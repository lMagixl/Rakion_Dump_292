
undefined4 __fastcall FUN_360648a0(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int in_EAX;
  int *unaff_ESI;
  
  *param_2 = *param_2 + *(int *)(in_EAX + 8);
  *unaff_ESI = *unaff_ESI + *(int *)(in_EAX + 0xc);
  iVar1 = *param_2;
  if (iVar1 < *(int *)(in_EAX + 0x18)) {
    *param_3 = *param_3 + (iVar1 - *(int *)(in_EAX + 0x18));
    *param_2 = *(int *)(in_EAX + 0x18);
  }
  else if (*(int *)(in_EAX + 0x20) <= iVar1) {
    return 0;
  }
  iVar1 = *unaff_ESI;
  if (iVar1 < *(int *)(in_EAX + 0x1c)) {
    *param_4 = *param_4 + (iVar1 - *(int *)(in_EAX + 0x1c));
    *unaff_ESI = *(int *)(in_EAX + 0x1c);
  }
  else if (*(int *)(in_EAX + 0x24) <= iVar1) {
    return 0;
  }
  if ((0 < *param_3) && (0 < *param_4)) {
    if (*(int *)(in_EAX + 0x20) < *param_3 + *param_2) {
      *param_3 = *(int *)(in_EAX + 0x20) - *param_2;
    }
    if (*(int *)(in_EAX + 0x24) < *param_4 + *unaff_ESI) {
      *param_4 = *(int *)(in_EAX + 0x24) - *unaff_ESI;
    }
    *param_2 = *param_2 - *(int *)(in_EAX + 8);
    *unaff_ESI = *unaff_ESI - *(int *)(in_EAX + 0xc);
    return 1;
  }
  return 0;
}

