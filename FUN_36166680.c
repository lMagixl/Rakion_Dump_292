
undefined4 __thiscall FUN_36166680(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)((int)this + 0x78);
  iVar3 = *(int *)((int)this + 0x7c) + iVar5;
  if (iVar5 < iVar3) {
    piVar6 = (int *)(iVar5 * 0x7c + 0x10 + DAT_362fe9a4);
    do {
      iVar1 = *piVar6;
      iVar2 = piVar6[1] + iVar1;
      if (iVar1 < iVar2) {
        puVar4 = (undefined4 *)(DAT_362fe9c4 + iVar1 * 0xc);
        do {
          if (unaff_EBX == *(int *)*puVar4) {
            *param_1 = iVar1;
            return 1;
          }
          iVar1 = iVar1 + 1;
          puVar4 = puVar4 + 3;
        } while (iVar1 < iVar2);
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x1f;
    } while (iVar5 < iVar3);
  }
  return 0;
}

