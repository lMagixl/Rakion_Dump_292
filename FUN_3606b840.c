
void __cdecl FUN_3606b840(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

