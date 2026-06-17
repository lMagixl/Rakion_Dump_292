
void __thiscall
FUN_361deacd(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  void *this_00;
  byte *pbVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  if (param_2 == (undefined4 *)0x0) {
    if (param_3 != (undefined4 *)0x0) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_361de726(this,param_1,(byte *)0x0,(byte *)*param_3);
        param_3 = param_3 + 1;
        this = extraout_ECX_00;
      }
    }
  }
  else if (param_3 == (undefined4 *)0x0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      FUN_361de726(this,param_1,(byte *)*param_2,(byte *)0x0);
      param_2 = param_2 + 1;
      this = extraout_ECX;
    }
  }
  else {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      this_00 = (void *)*param_3;
      pbVar1 = (byte *)*param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      FUN_361de726(this_00,param_1,pbVar1,this_00);
    }
  }
  return;
}

