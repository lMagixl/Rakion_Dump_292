
_String_val<char,class_std::allocator<char>_> * __thiscall
FUN_36018e30(void *this,_String_base *param_1,undefined4 *param_2)

{
  int iVar1;
  uint unaff_EDI;
  undefined4 *puVar2;
  
  std::_String_val<char,class_std::allocator<char>_>::_String_val<char,class_std::allocator<char>_>
            (this,this);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + 4) = 0;
  FUN_36016fb0(this,param_1,0,0xffffffff,unaff_EDI);
  puVar2 = (undefined4 *)((int)this + 0x1c);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return this;
}

