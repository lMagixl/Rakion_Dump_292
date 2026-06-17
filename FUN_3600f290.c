
int * __cdecl FUN_3600f290(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ios_base *this;
  basic_ostream<char,struct_std::char_traits<char>_> *local_2c;
  char local_28;
  uint local_24;
  char local_20;
  undefined3 uStack_1f;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620da70;
  local_10 = ExceptionList;
  local_24 = *(uint *)(param_2 + 0x14);
  uVar5 = *(uint *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  bVar2 = false;
  local_14 = &stack0xffffffc8;
  local_18 = 0;
  if (((int)uVar5 < 1) || (uVar5 <= local_24)) {
    local_1c = 0;
  }
  else {
    local_1c = uVar5 - local_24;
  }
  iVar4 = local_1c;
  ExceptionList = &local_10;
  FUN_3600e770(&local_2c,param_1);
  if (local_28 == '\0') {
    local_18 = 4;
    goto LAB_3600f40e;
  }
  local_8 = 1;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) & 0x1c0) == 0x40) {
LAB_3600f351:
    for (uVar5 = 0; uVar5 < local_24; uVar5 = uVar5 + 1) {
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        iVar4 = param_2 + 4;
      }
      else {
        iVar4 = *(int *)(param_2 + 4);
      }
      iVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                          (*(int *)(*param_1 + 4) + 0x28 + (int)param_1),*(char *)(iVar4 + uVar5));
      if (iVar4 == -1) {
        local_18 = local_18 | 4;
        break;
      }
    }
    if (local_18 == 0) {
      for (; local_1c != 0; local_1c = local_1c + -1) {
        iVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            ((int)param_1 + *(int *)(*param_1 + 4) + 0x28),
                           *(char *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1));
        if (iVar4 == -1) {
          local_18 = local_18 | 4;
          break;
        }
      }
    }
  }
  else {
    while (iVar4 != 0) {
      cVar1 = *(char *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
      _local_20 = CONCAT31(uStack_1f,cVar1);
      iVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                          ((int)param_1 + *(int *)(*param_1 + 4) + 0x28),cVar1);
      if (iVar3 == -1) {
        bVar2 = true;
        local_18 = 4;
        break;
      }
      iVar4 = iVar4 + -1;
      local_1c = iVar4;
    }
    if (!bVar2) goto LAB_3600f351;
  }
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
LAB_3600f40e:
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  local_8 = 0;
  if (local_18 != 0) {
    uVar5 = *(uint *)(this + 8) | local_18;
    if (*(int *)(this + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    std::ios_base::clear(this,uVar5,false);
  }
  local_8 = 3;
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(local_2c);
  }
  local_8 = 0xffffffff;
  if (*(int *)(local_2c + *(int *)(*(int *)local_2c + 4) + 0x28) != 0) {
    std::_Mutex::_Unlock((_Mutex *)(*(int *)(local_2c + *(int *)(*(int *)local_2c + 4) + 0x28) + 4))
    ;
  }
  ExceptionList = local_10;
  return param_1;
}

