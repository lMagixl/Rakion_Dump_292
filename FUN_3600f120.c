
int * __cdecl
FUN_3600f120(int *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            byte param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ios_base *this;
  int *local_24;
  char local_20;
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620da48;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_1c = 0;
  local_15 = '\0';
  ExceptionList = &local_10;
  FUN_3600e280(&local_24,param_1,true);
  if (local_20 != '\0') {
    local_8 = 1;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
              (param_2,0,*(uint *)npos_exref);
    uVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
    while (uVar3 != 0xffffffff) {
      if (uVar3 == param_3) {
        local_15 = '\x01';
        std::basic_streambuf<char,struct_std::char_traits<char>_>::sbumpc
                  (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                    (*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
        goto LAB_3600f21c;
      }
      uVar1 = *(uint *)(param_2 + 0x14);
      uVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              max_size(param_2);
      if (uVar4 <= uVar1) {
        local_1c = local_1c | 2;
        goto LAB_3600f21c;
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (param_2,(char)uVar3);
      local_15 = '\x01';
      uVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                          (*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
    }
    local_1c = local_1c | 1;
  }
LAB_3600f21c:
  local_8 = 0;
  uVar3 = local_1c;
  if (local_15 == '\0') {
    uVar3 = local_1c | 2;
  }
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (uVar3 != 0) {
    uVar3 = *(uint *)(this + 8) | uVar3;
    if (*(int *)(this + 0x28) == 0) {
      uVar3 = uVar3 | 4;
    }
    std::ios_base::clear(this,uVar3,false);
  }
  iVar2 = *(int *)(*(int *)(*local_24 + 4) + 0x28 + (int)local_24);
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    std::_Mutex::_Unlock((_Mutex *)(iVar2 + 4));
  }
  ExceptionList = local_10;
  return param_1;
}

