
void __cdecl
FUN_361e6397(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  if ((((param_1[0x16] & 1U) == 0) || ((param_1[0x16] & 4U) == 0)) &&
     (FUN_361de341(param_1,s_No_image_in_file_3624be10), param_4 == 0)) {
    return;
  }
  param_1[0x16] = param_1[0x16] | 0x18;
  if (param_5 != 0) {
    FUN_361de35f((int)param_1,s_Incorrect_IEND_chunk_length_3624bdf4);
  }
  FUN_361e5feb(param_1,param_5);
  return;
}

