
void __fastcall FUN_361097b0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 1;
  param_1[0x13] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  uVar1 = FUN_36109560(param_1 + 0xf);
  *(undefined4 *)((int)uVar1 + 0x50) = 0xbf800000;
  *(int *)((int)uVar1 + 0x54) = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

