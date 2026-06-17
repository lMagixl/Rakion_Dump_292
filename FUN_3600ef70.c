
int * __cdecl
FUN_3600ef70(int *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  int iVar1;
  locale *plVar2;
  uint uVar3;
  ios_base *this;
  uint uVar4;
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
  puStack_c = &LAB_3620da31;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_1c = 0;
  local_15 = '\0';
  ExceptionList = &local_10;
  FUN_3600e280(&local_2c,param_1,false);
  local_8 = 0;
  if (local_28 == '\0') goto LAB_3600f0ac;
  plVar2 = (locale *)std::ios_base::getloc((ios_base *)(*(int *)(*param_1 + 4) + (int)param_1));
  local_8._0_1_ = 1;
  local_24 = FUN_3600aa90(plVar2);
  local_8._0_1_ = 0;
  std::locale::~locale(local_20);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
            (param_2,0,*(uint *)npos_exref);
  uVar4 = *(uint *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((int)uVar4 < 1) {
LAB_3600f020:
    uVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            max_size(param_2);
  }
  else {
    uVar3 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            max_size(param_2);
    if (uVar3 <= uVar4) goto LAB_3600f020;
    uVar4 = *(uint *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  }
  uVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sgetc
                    (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                      (*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (uVar3 == 0xffffffff) {
      local_1c = local_1c | 1;
      break;
    }
    if ((*(byte *)(*(int *)(local_24 + 0x10) + (uVar3 & 0xff) * 2) & 0x48) != 0) break;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
              (param_2,1,(char)uVar3);
    local_15 = '\x01';
    uVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::snextc
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
  }
LAB_3600f0ac:
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
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
  iVar1 = *(int *)(*(int *)(*local_2c + 4) + 0x28 + (int)local_2c);
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    std::_Mutex::_Unlock((_Mutex *)(iVar1 + 4));
  }
  ExceptionList = local_10;
  return param_1;
}

