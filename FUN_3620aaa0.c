
void __cdecl
FUN_3620aaa0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621d178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_3620aa70((int)local_3c);
  local_4 = 0;
  FUN_3620b9c0(local_3c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar1 = FUN_3620ab40(local_3c);
  piVar1 = FUN_3620b2a0(local_3c,piVar1);
  FUN_3620b750(local_3c,piVar1);
  FUN_3620b440(local_3c,piVar1);
  FUN_3620aa90();
  ExceptionList = local_c;
  return;
}

