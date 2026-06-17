
void FUN_36177a50(void)

{
  int iVar1;
  void *unaff_EBX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)((int)unaff_EBX + 0xfc) + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_36177a00(unaff_EBX);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

