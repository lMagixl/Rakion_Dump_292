
bool __fastcall FUN_361a3020(undefined4 *param_1)

{
  BOOL BVar1;
  
  BVar1 = SetEndOfFile((HANDLE)*param_1);
  return (bool)('\x01' - (BVar1 != 1));
}

