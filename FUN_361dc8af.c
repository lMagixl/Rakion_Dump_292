
void __cdecl FUN_361dc8af(int *param_1,int param_2)

{
  if ((param_1[4] != 0xcf) && (param_1[4] != 0xcc)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if ((*(char *)(param_1[99] + 0x11) != '\0') && (param_1[0x1f] < param_2)) {
    param_2 = param_1[0x1f];
  }
  param_1[0x21] = param_2;
  FUN_361dc6e5();
  return;
}

