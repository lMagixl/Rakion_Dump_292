
uint FUN_361c086b(HMODULE param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_10 [3];
  
  FUN_361ceb91(local_10);
  FUN_361cc260();
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  uVar1 = FUN_361cebcb(local_10,param_1,param_2,0,0);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_361ce6ce();
    uVar2 = 0;
    if (-1 < (int)uVar1) goto LAB_361c08dd;
  }
  uVar2 = uVar1;
LAB_361c08dd:
  FUN_361cc309();
  FUN_361ceb9e(local_10);
  return uVar2;
}

