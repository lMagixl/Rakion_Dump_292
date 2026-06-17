
void __fastcall FUN_361a94c0(int *param_1)

{
  DWORD DVar1;
  
  (**(code **)(*param_1 + 0xc))();
  if ((char)param_1[2] != '\0') {
    do {
      DVar1 = FUN_361a30b0(param_1 + 10,param_1[1]);
      if (DVar1 != 0) {
        if (DVar1 == 0xffffffff) {
          (**(code **)(*param_1 + 8))();
        }
        else {
          (**(code **)(*param_1 + 4))(DVar1 - 1);
        }
      }
    } while ((char)param_1[2] != '\0');
  }
  (**(code **)(*param_1 + 0x10))();
  if (param_1[3] == -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x361a3275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _endthread();
  return;
}

