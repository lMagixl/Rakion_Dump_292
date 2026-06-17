
undefined4 * __thiscall
FUN_36019af0(void *this,undefined4 param_1,uint param_2,_String_base *param_3,_String_base *param_4,
            undefined1 param_5)

{
  int iVar1;
  _String_base *p_Var2;
  uint unaff_EDI;
  undefined4 *puVar3;
  
  *(uint *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(_String_base **)((int)this + 8) = param_3;
  std::_String_val<char,class_std::allocator<char>_>::_String_val<char,class_std::allocator<char>_>
            ((_String_val<char,class_std::allocator<char>_> *)((int)this + 0xc),param_2);
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_36016fb0((_String_val<char,class_std::allocator<char>_> *)((int)this + 0xc),param_4,0,
               0xffffffff,unaff_EDI);
  p_Var2 = param_4 + 0x1c;
  puVar3 = (undefined4 *)((int)this + 0x28);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)p_Var2;
    p_Var2 = p_Var2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)this + 0xa8) = param_5;
  *(undefined1 *)((int)this + 0xa9) = 0;
  return this;
}

