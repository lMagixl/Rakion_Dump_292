
void FUN_36162f40(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int unaff_EDI;
  
  iVar1 = FUN_36035f30((undefined4 *)(in_EAX + 4));
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = *(int *)(in_EAX + 8);
    do {
      if (*(int *)(iVar3 + 0x18) == unaff_EDI) {
        *unaff_EBX = iVar3;
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < iVar1);
  }
  *unaff_EBX = 0;
  return;
}

