
/* public: unsigned int __thiscall Xenesis::xFile::save(void *,unsigned int) */

uint __thiscall Xenesis::xFile::save(xFile *this,void *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uchar *puVar7;
  undefined4 *puVar8;
  uchar *puVar9;
  
                    /* 0x1a47e0  4287  ?save@xFile@Xenesis@@QAEIPAXI@Z */
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 + param_2 < 0x20001) {
    puVar6 = (undefined4 *)(*(int *)(this + 0x18) + iVar1);
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *(undefined4 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 4);
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)(*(int *)(this + 0x20) + 8) = *(int *)(*(int *)(this + 0x20) + 8) + param_2;
    *(uint *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
    return param_2;
  }
  uVar3 = 0x20000 - iVar1;
  puVar6 = param_1;
  puVar8 = (undefined4 *)(*(int *)(this + 0x18) + iVar1);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  bVar2 = saveBlock(this,*(uchar **)(this + 0x18));
  if (bVar2) {
    uVar4 = param_2 - uVar3;
    puVar7 = (uchar *)(uVar3 + (int)param_1);
    while( true ) {
      if (uVar4 < 0x20000) {
        puVar9 = *(uchar **)(this + 0x18);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        *(uint *)(this + 0x10) = uVar4;
        uVar3 = uVar3 + uVar4;
        *(uint *)(*(int *)(this + 0x20) + 8) = *(int *)(*(int *)(this + 0x20) + 8) + uVar3;
        *(uint *)(this + 8) = *(int *)(this + 8) + uVar3;
        return uVar3;
      }
      *(undefined4 *)(this + 0x10) = 0x20000;
      bVar2 = saveBlock(this,puVar7);
      if (!bVar2) break;
      uVar3 = uVar3 + 0x20000;
      uVar4 = uVar4 - 0x20000;
      puVar7 = puVar7 + 0x20000;
    }
    return uVar3;
  }
  return 0;
}

