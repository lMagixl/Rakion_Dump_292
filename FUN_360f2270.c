
undefined4 __fastcall FUN_360f2270(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1[0x19] != 0) {
    do {
      piVar1 = (int *)FUN_360febf0((int)(param_1 + 0x14));
      uVar2 = FUN_360feae0((int)piVar1);
      uVar2 = uVar2 & 0xff;
      if (uVar2 == 0) {
        FUN_360ff390(param_1 + 0x14,0);
        FUN_360ff350(param_1 + 6,piVar1);
      }
      else {
        if (uVar2 == 1) {
          return 1;
        }
        if (uVar2 == 2) {
          FUN_360f1ce0(param_1);
          return 0;
        }
      }
    } while (param_1[0x19] != 0);
  }
  return 1;
}

