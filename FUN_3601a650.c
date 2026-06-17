
void * FUN_3601a650(undefined4 param_1,undefined4 param_2,undefined4 param_3,_String_base *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620e4d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_361bf99c(0xac);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_36019af0(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}

