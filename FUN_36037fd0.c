
CTString * __cdecl FUN_36037fd0(CTString *param_1,CTString *param_2,CTString *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *_Str;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  CTString local_24 [4];
  CTString local_20 [4];
  CTString local_1c [4];
  CTString local_18 [4];
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362102cc;
  local_c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_c;
  FUN_36037f10(local_18,param_2);
  local_4 = 1;
  FUN_36037f10(local_1c,param_3);
  local_4._0_1_ = 2;
  _Str = CTString::operator_char_const_(local_18);
  pcVar4 = CTString::operator_char_const_(local_1c);
  pcVar4 = strstr(_Str,pcVar4);
  if (pcVar4 != (char *)0x0) {
    pcVar5 = CTString::operator_char_const_(param_3);
    pcVar1 = pcVar5 + 1;
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    local_10 = (int)pcVar5 - (int)pcVar1;
    if (local_10 != 0) {
      pcVar5 = CTString::operator_char_const_(param_2);
      pcVar1 = pcVar5 + 1;
      do {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      pcVar6 = CTString::operator_char_const_(param_3);
      pcVar2 = pcVar6 + 1;
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      CTString::CTString(local_20,param_2);
      local_4._0_1_ = 3;
      CTString::TrimRight(local_20,(int)pcVar4 - (int)_Str);
      CTString::CTString(local_24,param_2);
      local_4._0_1_ = 4;
      CTString::TrimLeft(local_24,(long)(pcVar5 + ((-((int)pcVar6 - (int)pcVar2) - (int)pcVar1) -
                                                  ((int)pcVar4 - (int)_Str))));
      CTString::operator+(local_20,param_1);
      local_14 = 1;
      local_4._0_1_ = 3;
      CTString::~CTString(local_24);
      local_4._0_1_ = 2;
      CTString::~CTString(local_20);
      goto LAB_3603811e;
    }
  }
  CTString::CTString(param_1,param_2);
  local_14 = 1;
LAB_3603811e:
  local_4._0_1_ = 1;
  CTString::~CTString(local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  CTString::~CTString(local_18);
  ExceptionList = local_c;
  return param_1;
}

