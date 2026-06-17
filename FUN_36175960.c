
int __cdecl FUN_36175960(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 0x104);
  iVar4 = *(int *)(in_EAX * 0x160 + 0xc + iVar3);
  iVar5 = in_EAX * 0x160 + iVar3;
  iVar6 = *(int *)(param_1 + 0x54) >> ((byte)iVar4 & 0x1f);
  iVar1 = iVar6 + -1;
  iVar2 = iVar6 * 2 + -2;
  iVar7 = (iVar6 + -2) * (iVar6 + -2) * 2;
  iVar6 = iVar2;
  if (((*(int *)(iVar5 + 0x18) != -1) && (iVar4 != 0)) &&
     (iVar3 = *(int *)(*(int *)(iVar5 + 0x18) * 0x160 + 0xc + iVar3), iVar3 < iVar4)) {
    iVar6 = ((*(int *)(param_1 + 0x54) >> ((byte)iVar3 & 0x1f)) - iVar1) + -1 + iVar2;
  }
  if (((*(int *)(iVar5 + 0x1c) == -1) || (iVar4 == 0)) ||
     (iVar3 = *(int *)(*(int *)(iVar5 + 0x1c) * 0x160 + 0xc + *(int *)(param_1 + 0x104)),
     iVar4 <= iVar3)) {
    iVar6 = iVar6 + iVar2;
  }
  else {
    iVar6 = iVar6 + -1 + ((*(int *)(param_1 + 0x54) >> ((byte)iVar3 & 0x1f)) - iVar1) + iVar2;
  }
  if (((*(int *)(iVar5 + 0x20) == -1) || (iVar4 == 0)) ||
     (iVar3 = *(int *)(*(int *)(iVar5 + 0x20) * 0x160 + 0xc + *(int *)(param_1 + 0x104)),
     iVar4 <= iVar3)) {
    iVar6 = iVar6 + iVar2;
  }
  else {
    iVar6 = iVar6 + -1 + ((*(int *)(param_1 + 0x54) >> ((byte)iVar3 & 0x1f)) - iVar1) + iVar2;
  }
  if (((*(int *)(iVar5 + 0x24) != -1) && (iVar4 != 0)) &&
     (iVar3 = *(int *)(*(int *)(iVar5 + 0x24) * 0x160 + 0xc + *(int *)(param_1 + 0x104)),
     iVar3 < iVar4)) {
    return iVar6 + -1 + ((*(int *)(param_1 + 0x54) >> ((byte)iVar3 & 0x1f)) - iVar1) + iVar2 + iVar7
    ;
  }
  return iVar6 + iVar2 + iVar7;
}

