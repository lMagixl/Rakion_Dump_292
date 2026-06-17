
undefined4 FUN_361ca403(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    param_2[1] = *(undefined4 *)(param_1 + 0x10);
    param_2[2] = *(undefined4 *)(param_1 + 0x14);
    param_2[3] = *(undefined4 *)(param_1 + 0x18);
    uVar1 = 0;
  }
  return uVar1;
}

