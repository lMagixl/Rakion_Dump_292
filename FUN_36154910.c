
int __cdecl FUN_36154910(int param_1)

{
  undefined4 *this;
  int iVar1;
  int iVar2;
  uint unaff_EBX;
  
  this = (undefined4 *)(param_1 + 0x38);
  iVar1 = FUN_360918e0(this);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(byte *)(*(int *)(param_1 + 0x3c) + iVar2) == unaff_EBX) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar1 = FUN_360918e0(this);
  FUN_36091a00(this,iVar1 + 1);
  *(char *)(iVar1 + *(int *)(param_1 + 0x3c)) = (char)unaff_EBX;
  return iVar1;
}

