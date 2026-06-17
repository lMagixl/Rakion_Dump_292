
void __thiscall FUN_36145020(void *this,int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar5 = param_1 * 4;
  bVar2 = (byte)param_1;
  param_1 = *(int *)((int)this + 0x74) >> (bVar2 & 0x1f);
  iVar7 = *(int *)((int)this + 0x70) >> (bVar2 & 0x1f);
  puVar6 = (undefined1 *)(*(int *)((int)this + iVar5 + 0x94) + *(int *)((int)this + 0xc0));
  if (0 < param_1) {
    do {
      puVar4 = puVar6 + iVar7 + -1;
      puVar3 = puVar6;
      iVar5 = iVar7 / 2;
      if (0 < iVar7 / 2) {
        do {
          uVar1 = *puVar3;
          *puVar3 = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + -1;
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 1;
        } while (iVar5 != 0);
      }
      puVar6 = puVar6 + iVar7;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

