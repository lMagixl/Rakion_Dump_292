
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_361a27a0(basic_istream<char,struct_std::char_traits<char>_> *param_1,
                 basic_ostream<char,struct_std::char_traits<char>_> *param_2)

{
  basic_istream<char,struct_std::char_traits<char>_> bVar1;
  char cVar2;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  
  cVar2 = '\0';
  bVar1 = param_1[*(int *)(*(int *)param_1 + 4) + 8];
  local_c = DAT_362abd90;
  while (((byte)bVar1 & 1) == 0) {
    local_14 = 0;
    local_10 = 0;
    std::basic_istream<char,struct_std::char_traits<char>_>::read(param_1,(char *)&local_14,8);
    cVar2 = (char)*(undefined4 *)(param_1 + 4);
    FUN_361a1e10(&local_14,&local_10);
    std::basic_ostream<char,struct_std::char_traits<char>_>::write(param_2,(char *)&local_14,8);
    bVar1 = param_1[*(int *)(*(int *)param_1 + 4) + 8];
  }
  std::basic_ostream<char,struct_std::char_traits<char>_>::put(param_2,cVar2);
  return;
}

