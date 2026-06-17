
void FUN_36162dd0(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (DAT_362a6bc0 == -1) {
    DAT_362a6bc0 = FUN_36083260(unaff_ESI,3,0,0x69);
    DAT_362a6bc4 = FUN_3607ace0(DAT_362a6bc0,0);
    DAT_362a6bc8 = FUN_3607ace0(DAT_362a6bc0,1);
    return;
  }
  iVar1 = FUN_36082920(DAT_362a6bc0);
  if (iVar1 < unaff_ESI) {
    FUN_36082840(DAT_362a6bc0);
    DAT_362a6bc0 = FUN_36083260(unaff_ESI,3,0,0x69);
    DAT_362a6bc4 = FUN_3607ace0(DAT_362a6bc0,0);
    DAT_362a6bc8 = FUN_3607ace0(DAT_362a6bc0,1);
  }
  return;
}

