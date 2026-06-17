
int * __cdecl
FUN_3600f640(int *param_1,
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *param_2,ushort param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ios_base *this;
  uint uVar4;
  int *local_24;
  char local_20;
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620daa8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_1c = 0;
  local_15 = '\0';
  ExceptionList = &local_10;
  FUN_3600e210(&local_24,param_1,true);
  if (local_20 != '\0') {
    local_8 = 1;
    std::
    basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    ::erase(param_2,0,*(uint *)npos_exref);
    uVar2 = std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::sgetc
                      (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_> **
                        )(*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
    while (uVar2 != 0xffff) {
      if (uVar2 == param_3) {
        local_15 = '\x01';
        std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::sbumpc
                  (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_> **)
                    (*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
        goto LAB_3600f739;
      }
      uVar4 = *(uint *)(param_2 + 0x14);
      uVar3 = std::
              basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
              ::max_size(param_2);
      if (uVar3 <= uVar4) {
        local_1c = local_1c | 2;
        goto LAB_3600f739;
      }
      std::
      basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
      ::operator+=(param_2,uVar2);
      local_15 = '\x01';
      uVar2 = std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::snextc
                        (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>
                           **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
    }
    local_1c = local_1c | 1;
  }
LAB_3600f739:
  local_8 = 0;
  uVar4 = local_1c;
  if (local_15 == '\0') {
    uVar4 = local_1c | 2;
  }
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (uVar4 != 0) {
    uVar4 = *(uint *)(this + 8) | uVar4;
    if (*(int *)(this + 0x28) == 0) {
      uVar4 = uVar4 | 4;
    }
    std::ios_base::clear(this,uVar4,false);
  }
  iVar1 = *(int *)(*(int *)(*local_24 + 4) + 0x28 + (int)local_24);
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    std::_Mutex::_Unlock((_Mutex *)(iVar1 + 4));
  }
  ExceptionList = local_10;
  return param_1;
}

