
void __cdecl FUN_361e10c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_361de35f(param_1,s_It_s_an_error_to_set_both_read_d_3624b4e8);
    FUN_361de35f(param_1,s_same_structure__Resetting_write__3624b4b4);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}

