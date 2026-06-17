
int * __cdecl
FUN_3600f490(int *param_1,
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *param_2)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  locale *plVar4;
  uint uVar5;
  ios_base *this;
  uint uVar6;
  int *local_2c;
  char local_28;
  facet *local_24;
  locale local_20 [4];
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620da91;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_1c = 0;
  local_15 = '\0';
  ExceptionList = &local_10;
  FUN_3600e210(&local_2c,param_1,false);
  local_8 = 0;
  if (local_28 == '\0') goto LAB_3600f5cb;
  plVar4 = (locale *)std::ios_base::getloc((ios_base *)(*(int *)(*param_1 + 4) + (int)param_1));
  local_8._0_1_ = 1;
  local_24 = FUN_3600ab90(plVar4);
  local_8._0_1_ = 0;
  std::locale::~locale(local_20);
  std::
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  ::erase(param_2,0,*(uint *)npos_exref);
  uVar6 = *(uint *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((int)uVar6 < 1) {
LAB_3600f540:
    uVar6 = std::
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            ::max_size(param_2);
  }
  else {
    uVar5 = std::
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            ::max_size(param_2);
    if (uVar5 <= uVar6) goto LAB_3600f540;
    uVar6 = *(uint *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  }
  uVar3 = std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::sgetc
                    (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_> **)
                      (*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (uVar3 == 0xffff) {
      local_1c = local_1c | 1;
      break;
    }
    bVar2 = std::ctype<unsigned_short>::is((ctype<unsigned_short> *)local_24,0x48,uVar3);
    if (bVar2) break;
    std::
    basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    ::append(param_2,1,uVar3);
    local_15 = '\x01';
    uVar3 = std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::snextc
                      (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_> **
                        )(*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
  }
LAB_3600f5cb:
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
  local_8 = 0;
  uVar6 = local_1c;
  if (local_15 == '\0') {
    uVar6 = local_1c | 2;
  }
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (uVar6 != 0) {
    uVar6 = *(uint *)(this + 8) | uVar6;
    if (*(int *)(this + 0x28) == 0) {
      uVar6 = uVar6 | 4;
    }
    std::ios_base::clear(this,uVar6,false);
  }
  iVar1 = *(int *)(*(int *)(*local_2c + 4) + 0x28 + (int)local_2c);
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    std::_Mutex::_Unlock((_Mutex *)(iVar1 + 4));
  }
  ExceptionList = local_10;
  return param_1;
}

