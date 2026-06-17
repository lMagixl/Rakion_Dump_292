
int __fastcall FUN_36175870(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x104);
  iVar5 = in_EAX * 0x160 + iVar1;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(iVar5 + 0xc);
  iVar7 = 0;
  iVar6 = (iVar2 >> ((byte)iVar3 & 0x1f)) + 1;
  if (((*(int *)(iVar5 + 0x18) != -1) && (iVar3 != 0)) &&
     (iVar4 = *(int *)(*(int *)(iVar5 + 0x18) * 0x160 + 0xc + iVar1), iVar4 < iVar3)) {
    iVar7 = ((iVar2 >> ((byte)iVar4 & 0x1f)) - iVar6) + 1;
  }
  if (((*(int *)(iVar5 + 0x1c) != -1) && (iVar3 != 0)) &&
     (iVar4 = *(int *)(*(int *)(iVar5 + 0x1c) * 0x160 + 0xc + iVar1), iVar4 < iVar3)) {
    iVar7 = iVar7 + 1 + ((iVar2 >> ((byte)iVar4 & 0x1f)) - iVar6);
  }
  if (((*(int *)(iVar5 + 0x20) != -1) && (iVar3 != 0)) &&
     (iVar4 = *(int *)(*(int *)(iVar5 + 0x20) * 0x160 + 0xc + iVar1), iVar4 < iVar3)) {
    iVar7 = iVar7 + 1 + ((iVar2 >> ((byte)iVar4 & 0x1f)) - iVar6);
  }
  if (*(int *)(iVar5 + 0x24) != -1) {
    if (iVar3 != 0) {
      iVar1 = *(int *)(*(int *)(iVar5 + 0x24) * 0x160 + 0xc + iVar1);
      if (iVar3 <= iVar1) goto LAB_36175944;
      iVar7 = iVar7 + 1 + ((iVar2 >> ((byte)iVar1 & 0x1f)) - iVar6);
    }
    return iVar6 * iVar6 + iVar7;
  }
LAB_36175944:
  return iVar7 + iVar6 * iVar6;
}

