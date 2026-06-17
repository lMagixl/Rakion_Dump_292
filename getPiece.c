
/* private: void __thiscall Xenesis::xFile::getPiece(unsigned char *,unsigned int) */

void __thiscall Xenesis::xFile::getPiece(xFile *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  xFile *pxVar5;
  xFile *pxVar6;
  uchar *puVar7;
  
                    /* 0x1a3f70  4202  ?getPiece@xFile@Xenesis@@AAEXPAEI@Z */
  if (*(char *)(*(int *)(this + 0x20) + 0x11) == '\0') {
    puVar4 = (uchar *)(*(int *)(this + 0x18) + *(int *)(this + 0x10));
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)puVar4;
      puVar4 = puVar4 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
    *(uint *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
    return;
  }
  uVar1 = 8 - (*(uint *)(this + 0x10) & 7);
  if (uVar1 != 8) {
    if (param_2 <= uVar1) {
      pxVar5 = this + (*(uint *)(this + 0x10) & 7) + 0x28;
      for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)param_1 = *(undefined4 *)pxVar5;
        pxVar5 = pxVar5 + 4;
        param_1 = (uchar *)(param_1 + 4);
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_1 = (uchar)*pxVar5;
        pxVar5 = pxVar5 + 1;
        param_1 = (uchar *)(param_1 + 1);
      }
      *(uint *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
      return;
    }
    pxVar5 = this + (*(uint *)(this + 0x10) & 7) + 0x28;
    pxVar6 = (xFile *)param_1;
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pxVar6 = *(undefined4 *)pxVar5;
      pxVar5 = pxVar5 + 4;
      pxVar6 = pxVar6 + 4;
    }
    for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pxVar6 = *pxVar5;
      pxVar5 = pxVar5 + 1;
      pxVar6 = pxVar6 + 1;
    }
    param_2 = param_2 - uVar1;
    param_1 = param_1 + uVar1;
    *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar1;
  }
  if (8 < param_2) {
    uVar2 = param_2 & 0xfffffff8;
    puVar4 = (uchar *)(*(int *)(this + 0x18) + *(int *)(this + 0x10));
    puVar7 = param_1;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)puVar7 = *(undefined4 *)puVar4;
      puVar4 = puVar4 + 4;
      puVar7 = puVar7 + 4;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_361a3cf0(*(void **)(this + 0x24),(uint *)param_1,uVar2);
    param_2 = param_2 - uVar2;
    param_1 = param_1 + uVar2;
    *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar2;
  }
  if (param_2 != 0) {
    pxVar5 = this + 0x28;
    *(uint *)pxVar5 = *(uint *)(*(int *)(this + 0x10) + *(int *)(this + 0x18));
    *(undefined4 *)(this + 0x2c) =
         *(undefined4 *)(*(int *)(this + 0x10) + 4 + *(int *)(this + 0x18));
    FUN_361a3cf0(*(void **)(this + 0x24),(uint *)pxVar5,8);
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint *)param_1 = *(uint *)pxVar5;
      pxVar5 = pxVar5 + 4;
      param_1 = (uchar *)(param_1 + 4);
    }
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = (uchar)*pxVar5;
      pxVar5 = pxVar5 + 1;
      param_1 = (uchar *)(param_1 + 1);
    }
    *(uint *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
  }
  return;
}

