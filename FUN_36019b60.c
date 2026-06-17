
_String_val<char,class_std::allocator<char>_> * __thiscall
FUN_36019b60(void *this,_String_val<char,class_std::allocator<char>_> *param_1,void *param_2,
            void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_EDI;
  _String_val<char,class_std::allocator<char>_> *p_Var3;
  uint in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620e398;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::_String_val<char,class_std::allocator<char>_>::_String_val<char,class_std::allocator<char>_>
            (param_1,this);
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (_String_val<char,class_std::allocator<char>_>)0x0;
  FUN_36016fb0(param_1,(_String_base *)&param_2,0,0xffffffff,unaff_EDI);
  puVar2 = (undefined4 *)&stack0x00000024;
  p_Var3 = param_1 + 0x1c;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)p_Var3 = *puVar2;
    puVar2 = puVar2 + 1;
    p_Var3 = p_Var3 + 4;
  }
  if (0xf < in_stack_00000020) {
    operator_delete(param_3);
  }
  ExceptionList = local_c;
  return param_1;
}

