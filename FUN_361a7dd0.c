
void * __cdecl FUN_361a7dd0(void *param_1,_String_base *param_2,_String_base *param_3)

{
  _String_base _Var1;
  void *pvVar2;
  _String_base *p_Var3;
  _String_base *unaff_EDI;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bbb1;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_3601cb20(local_28,param_2,0,0xffffffff,(uint)unaff_EDI);
  local_4 = 1;
  p_Var3 = param_3;
  do {
    _Var1 = *p_Var3;
    p_Var3 = p_Var3 + 1;
  } while (_Var1 != (_String_base)0x0);
  p_Var3 = FUN_361a7800(local_28,param_3,(int)p_Var3 - (int)(param_3 + 1),unaff_EDI);
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_3601cb20(param_1,p_Var3,0,0xffffffff,(uint)unaff_EDI);
  pvVar2 = local_24;
  local_4 = local_4 & 0xffffff00;
  if (0xf < local_10) {
    FUN_36018c30();
    operator_delete(pvVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

