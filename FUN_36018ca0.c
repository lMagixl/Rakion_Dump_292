
_String_val<char,class_std::allocator<char>_> * __thiscall
FUN_36018ca0(void *this,_String_base *param_1)

{
  int iVar1;
  _String_base *p_Var2;
  uint unaff_EDI;
  undefined4 *puVar3;
  
  std::_String_val<char,class_std::allocator<char>_>::_String_val<char,class_std::allocator<char>_>
            (this,this);
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  FUN_36016fb0(this,param_1,0,0xffffffff,unaff_EDI);
  p_Var2 = param_1 + 0x1c;
  puVar3 = (undefined4 *)((int)this + 0x1c);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)p_Var2;
    p_Var2 = p_Var2 + 4;
    puVar3 = puVar3 + 1;
  }
  return this;
}

