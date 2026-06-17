
_String_val<char,class_std::allocator<char>_> * __thiscall
FUN_360194d0(void *this,_String_val<char,class_std::allocator<char>_> *param_1)

{
  uint unaff_EDI;
  
  std::_String_val<char,class_std::allocator<char>_>::_String_val<char,class_std::allocator<char>_>
            (param_1,this);
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (_String_val<char,class_std::allocator<char>_>)0x0;
  FUN_36016fb0(param_1,(_String_base *)((int)this + 8),0,0xffffffff,unaff_EDI);
  return param_1;
}

