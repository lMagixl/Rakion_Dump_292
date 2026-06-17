
uint FUN_361c0988(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
  
  FUN_361cc260();
  if (in_stack_00000010 != (undefined4 *)0x0) {
    *in_stack_00000010 = 0;
  }
  if (in_stack_00000014 != (undefined4 *)0x0) {
    *in_stack_00000014 = 0;
  }
  if (in_stack_00000018 != (undefined4 *)0x0) {
    *in_stack_00000018 = 0;
  }
  uVar1 = FUN_361ce6ce();
  uVar2 = 0;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1;
  }
  FUN_361cc309();
  return uVar2;
}

