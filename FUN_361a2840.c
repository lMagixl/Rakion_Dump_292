
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_361a2840(basic_istream<char,struct_std::char_traits<char>_> *param_1,
                 basic_ostream<char,struct_std::char_traits<char>_> *param_2)

{
  bool bVar1;
  int iVar2;
  char local_1c [4];
  uint local_18;
  char local_14 [8];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  if (((byte)param_1[*(int *)(*(int *)param_1 + 4) + 8] & 1) == 0) {
    bVar1 = true;
    do {
      std::basic_istream<char,struct_std::char_traits<char>_>::read(param_1,local_1c,8);
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == 1) {
        iVar2 = (int)local_1c[0];
      }
      if (bVar1) {
        bVar1 = false;
      }
      else {
        std::basic_ostream<char,struct_std::char_traits<char>_>::write(param_2,local_14,iVar2);
      }
      FUN_361a2220((uint *)local_1c,&local_18);
    } while (((byte)param_1[*(int *)(*(int *)param_1 + 4) + 8] & 1) == 0);
  }
  return;
}

