
void __thiscall
FUN_360444e0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1c))) {
    pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              ((int)this + 8);
    FUN_36043d60(pbVar2,1,param_1);
    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
     ((int)this + 8) = pbVar2 + 0x1c;
    return;
  }
  FUN_36044410(this,(int *)&param_1,
               *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 8),param_1);
  return;
}

