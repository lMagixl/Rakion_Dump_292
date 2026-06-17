
void __cdecl FUN_36106f40(CNetworkMessage *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_362cfacc;
  puStack_8 = &LAB_3621782a;
  local_c = ExceptionList;
  DAT_362cfacc = 1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_36107540(&DAT_362cfa9c,param_1);
  DAT_362cfacc = uVar1;
  ExceptionList = local_c;
  return;
}

