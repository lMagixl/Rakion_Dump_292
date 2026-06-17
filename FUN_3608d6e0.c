
undefined4 __fastcall FUN_3608d6e0(CRaster *param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    return 1;
  }
  iVar1 = CGfxLibrary::LockRaster(_pGfx,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    return 1;
  }
  return 0;
}

