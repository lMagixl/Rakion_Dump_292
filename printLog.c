
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl TestLog::printLog(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &,char const * const,...) */

void __thiscall
TestLog::printLog(TestLog *this,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_1,char *param_2,...)

{
  char *pcVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this_00;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  int iVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *this_01;
  undefined4 *puVar4;
  LPCSTR in_stack_0000000c;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var5;
  uint local_4ac;
  basic_ofstream<char,struct_std::char_traits<char>_> *local_4a8;
  int *local_4a4;
  LPCRITICAL_SECTION local_4a0;
  undefined4 local_49c;
  basic_ofstream<char,struct_std::char_traits<char>_> *local_498 [2];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_490 [36];
  char local_46c [16];
  char local_45c [60];
  CHAR local_420;
  undefined4 local_41f;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x19f810  4267
                       ?printLog@TestLog@@QAAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBDZZ
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_3621b6e8;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  local_4a0 = (LPCRITICAL_SECTION)(param_1 + 0x4c);
  ExceptionList = &local_14;
  EnterCriticalSection(local_4a0);
  local_49c = 1;
  local_c = 0;
  FUN_361a0790(param_1 + 8,&local_4ac,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               param_2);
  if (local_4ac == *(uint *)(param_1 + 0x10)) {
    local_4a8 = (basic_ofstream<char,struct_std::char_traits<char>_> *)FUN_361bf99c(0x94);
    local_c._0_1_ = 1;
    local_498[0] = local_4a8;
    if (local_4a8 == (basic_ofstream<char,struct_std::char_traits<char>_> *)0x0) {
      local_4a8 = (basic_ofstream<char,struct_std::char_traits<char>_> *)0x0;
    }
    else {
      std::basic_ofstream<char,struct_std::char_traits<char>_>::
      basic_ofstream<char,struct_std::char_traits<char>_>(local_4a8);
      *(undefined ***)(local_4a8 + 0x60) = &PTR_LAB_362430e4;
    }
    local_4ac = local_4ac & 0xffffff00;
    local_c._0_1_ = 0;
    FUN_361a0510(&local_4a4,local_4a8);
    local_c._0_1_ = 2;
    std::locale::locale((locale *)local_498,s_korean_36243090,0x3f);
    this_01 = (basic_ostream<char,struct_std::char_traits<char>_> *)local_4a8;
    local_c._0_1_ = 3;
    std::basic_ios<char,struct_std::char_traits<char>_>::imbue
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (local_4a8 + *(int *)(*(int *)local_4a8 + 4)),(locale *)&local_4ac);
    std::locale::~locale((locale *)&local_4ac);
    local_c._0_1_ = 2;
    std::locale::~locale((locale *)local_498);
    if (*(uint *)(param_2 + 0x18) < 0x10) {
      pcVar1 = param_2 + 4;
    }
    else {
      pcVar1 = *(char **)(param_2 + 4);
    }
    std::basic_ofstream<char,struct_std::char_traits<char>_>::open
              ((basic_ofstream<char,struct_std::char_traits<char>_> *)this_01,pcVar1,10,0x1b6);
    if (*(int *)(this_01 + 0x5c) == 0) {
      local_c = (uint)local_c._1_3_ << 8;
      if (local_4a4 != (int *)0x0) {
        FUN_3600cd20(local_4a4);
      }
      goto LAB_3619faae;
    }
    updateTime((TestLog *)param_1);
    strftime(local_45c,0x3b,s____________Log_Started_at__Y__m__36243098,*(tm **)(param_1 + 4));
    p_Var5 = endl_exref;
    this_00 = std::operator<<<struct_std::char_traits<char>_>(this_01,local_45c);
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this_00,p_Var5);
    pbVar2 = FUN_361a0640(local_490,
                          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)param_2,&local_4a8);
    local_c._0_1_ = 4;
    FUN_361a1220(param_1 + 8,(int *)local_498,pbVar2);
    local_c._0_1_ = 2;
    FUN_3619ffa0(local_490);
    local_c = (uint)local_c._1_3_ << 8;
    if (local_4a4 != (int *)0x0) {
      FUN_3600cd20(local_4a4);
    }
  }
  else {
    this_01 = *(basic_ostream<char,struct_std::char_traits<char>_> **)(local_4ac + 0x24);
  }
  local_420 = '\0';
  puVar4 = &local_41f;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  wvsprintfA(&local_420,in_stack_0000000c,&stack0x00000010);
  updateTime((TestLog *)param_1);
  strftime(local_46c,0xf,s_<_X>_362430cc,*(tm **)(param_1 + 4));
  pbVar2 = param_1 + 0x30;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
            (pbVar2,local_46c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
            (pbVar2,&local_420);
  if (*(int *)(this_01 + 0x5c) != 0) {
    FUN_3600f290((int *)this_01,(int)pbVar2);
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this_01,endl_exref);
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this_01);
  }
  if (*(uint *)(param_1 + 0x48) < 0x10) {
    pbVar2 = param_1 + 0x34;
  }
  else {
    pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_1 + 0x34);
  }
  OutputDebugStringA((LPCSTR)pbVar2);
LAB_3619faae:
  LeaveCriticalSection(local_4a0);
  ExceptionList = local_14;
  return;
}

