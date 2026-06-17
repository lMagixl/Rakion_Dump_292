
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_3603af50(HANDLE param_1,LPCSTR param_2)

{
  char cVar1;
  char *pcVar2;
  DWORD local_408;
  CHAR local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  wvsprintfA(local_404,param_2,&stack0x0000000c);
  pcVar2 = local_404;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  WriteFile(param_1,local_404,(int)pcVar2 - (int)(local_404 + 1),&local_408,(LPOVERLAPPED)0x0);
  return;
}

