
/* public: struct CharData * __thiscall CCharManager::getCharData(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &) */

CharData * __thiscall
CCharManager::getCharData
          (CCharManager *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  CharData *local_40;
  int *local_3c;
  int local_38 [2];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x186490  4174
                       ?getCharData@CCharManager@@QAEPAUCharData@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
                        */
  pbVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ac25;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_36186640(this,&param_1,param_1);
  if (param_1 !=
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)(this + 8))
  {
    ExceptionList = local_c;
    return *(CharData **)(param_1 + 0x24);
  }
  local_40 = createData(this,pbVar1);
  param_1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            ((uint)param_1 & 0xffffff00);
  FUN_36186d30(&local_3c,local_40);
  local_4 = 0;
  pbVar1 = FUN_36186070(local_30,pbVar1,&local_40);
  local_4._0_1_ = 1;
  FUN_361871b0(this,local_38,pbVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_36185930(local_30);
  local_4 = 0xffffffff;
  if (local_3c != (int *)0x0) {
    FUN_3600cd20(local_3c);
  }
  ExceptionList = local_c;
  return local_40;
}

