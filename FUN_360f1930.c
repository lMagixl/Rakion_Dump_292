
undefined4 __fastcall FUN_360f1930(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *unaff_retaddr;
  int iStack_18;
  undefined1 local_10 [12];
  undefined4 uStack_4;
  
  uVar1 = (**(code **)(*param_1 + 0xc))(local_10,0x10);
  if (uVar1 < 0x10) {
    FUN_360f1510(param_1,uVar1);
    return 0;
  }
  iVar2 = FUN_360f1540((int)param_1);
  if (iStack_18 <= iVar2) {
    if (*unaff_retaddr < iStack_18) {
      FUN_360f1510(param_1,uVar1);
      *unaff_retaddr = iStack_18;
      return 0;
    }
    if (param_1[7] != 0) {
      puVar3 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      iVar2 = FUN_360314e0(local_10,puVar3);
      if (iVar2 != 0) {
        FUN_360f1510(param_1,uVar1);
        return 0;
      }
    }
    iVar2 = (**(code **)(*param_1 + 0xc))(uStack_4,iStack_18);
    *unaff_retaddr = iVar2;
    return 1;
  }
  FUN_360f1510(param_1,uVar1);
  return 0;
}

