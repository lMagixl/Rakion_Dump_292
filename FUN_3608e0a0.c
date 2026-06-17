
char * __cdecl FUN_3608e0a0(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3621292f;
  local_c = ExceptionList;
  local_4 = 1;
  if (param_3 == 1) {
    ExceptionList = &local_c;
    pcVar1 = StringDuplicate(param_2);
    *(char **)param_1 = pcVar1;
    local_4 = local_4 & 0xffffff00;
    StringFree(param_2);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = &local_c;
  operator+(param_1,(CTString *)s_ps_1_1_362a437c);
  local_4 = local_4 & 0xffffff00;
  StringFree(param_2);
  ExceptionList = local_c;
  return param_1;
}

