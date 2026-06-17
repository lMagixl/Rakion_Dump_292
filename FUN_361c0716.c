
uint FUN_361c0716(LPCWSTR param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int local_14 [4];
  
  FUN_361cc028(local_14);
  FUN_361cc260();
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  uVar1 = FUN_361cc03a(local_14,param_1,0);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_361ce6ce();
    uVar2 = 0;
    if (-1 < (int)uVar1) goto LAB_361c0786;
  }
  uVar2 = uVar1;
LAB_361c0786:
  FUN_361cc309();
  FUN_361cc255(local_14);
  return uVar2;
}

