
void __cdecl FUN_361e6792(int *param_1,int param_2,uint param_3)

{
  FUN_361e5793(param_1,(byte *)(param_1 + 0x43));
  if (((*(byte *)(param_1 + 0x43) & 0x20) == 0) &&
     (FUN_361de374(param_1,(undefined4 *)s_unknown_critical_chunk_3624c050), param_2 == 0)) {
    return;
  }
  if ((param_1[0x16] & 4U) != 0) {
    param_1[0x16] = param_1[0x16] | 8;
  }
  FUN_361e5feb(param_1,param_3);
  return;
}

