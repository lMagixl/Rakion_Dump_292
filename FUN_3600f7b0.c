
int * __cdecl FUN_3600f7b0(int *param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ios_base *this;
  basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> *local_28;
  char local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620dad0;
  local_10 = ExceptionList;
  local_20 = *(uint *)(param_2 + 0x14);
  uVar4 = *(uint *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  bVar1 = false;
  local_14 = &stack0xffffffcc;
  local_18 = 0;
  if (((int)uVar4 < 1) || (uVar4 <= local_20)) {
    local_1c = 0;
  }
  else {
    local_1c = uVar4 - local_20;
  }
  iVar3 = local_1c;
  ExceptionList = &local_10;
  FUN_3600e110(&local_28,param_1);
  if (local_24 == '\0') {
    local_18 = 4;
    goto LAB_3600f927;
  }
  local_8 = 1;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) & 0x1c0) == 0x40) {
LAB_3600f86e:
    for (uVar4 = 0; uVar4 < local_20; uVar4 = uVar4 + 1) {
      if (*(uint *)(param_2 + 0x18) < 8) {
        iVar3 = param_2 + 4;
      }
      else {
        iVar3 = *(int *)(param_2 + 4);
      }
      uVar2 = std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::sputc
                        (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>
                           **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1),
                         *(ushort *)(iVar3 + uVar4 * 2));
      if (uVar2 == 0xffff) {
        local_18 = local_18 | 4;
        break;
      }
    }
    if (local_18 == 0) {
      for (; local_1c != 0; local_1c = local_1c + -1) {
        uVar2 = std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::sputc
                          (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>
                             **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28),
                           *(ushort *)((int)param_1 + *(int *)(*param_1 + 4) + 0x30));
        if (uVar2 == 0xffff) {
          local_18 = local_18 | 4;
          break;
        }
      }
    }
  }
  else {
    while (iVar3 != 0) {
      uVar2 = std::basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>::sputc
                        (*(basic_streambuf<unsigned_short,struct_std::char_traits<unsigned_short>_>
                           **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28),
                         *(ushort *)((int)param_1 + *(int *)(*param_1 + 4) + 0x30));
      if (uVar2 == 0xffff) {
        bVar1 = true;
        local_18 = 4;
        break;
      }
      iVar3 = iVar3 + -1;
      local_1c = iVar3;
    }
    if (!bVar1) goto LAB_3600f86e;
  }
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
LAB_3600f927:
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  local_8 = 0;
  if (local_18 != 0) {
    uVar4 = *(uint *)(this + 8) | local_18;
    if (*(int *)(this + 0x28) == 0) {
      uVar4 = uVar4 | 4;
    }
    std::ios_base::clear(this,uVar4,false);
  }
  local_8 = 3;
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_>::_Osfx(local_28);
  }
  local_8 = 0xffffffff;
  if (*(int *)(local_28 + *(int *)(*(int *)local_28 + 4) + 0x28) != 0) {
    std::_Mutex::_Unlock((_Mutex *)(*(int *)(local_28 + *(int *)(*(int *)local_28 + 4) + 0x28) + 4))
    ;
  }
  ExceptionList = local_10;
  return param_1;
}

