
/* class CTString __cdecl AddressToString(unsigned long) */

ulong __cdecl AddressToString(ulong param_1)

{
  hostent *phVar1;
  char *pcVar2;
  u_long in_stack_00000008;
  _union_1226 local_4;
  
                    /* 0xfb3b0  1038  ?AddressToString@@YA?AVCTString@@K@Z */
  local_4.S_addr = 0;
  local_4.S_addr = htonl(in_stack_00000008);
  if (DAT_362ccec8 != 0) {
    phVar1 = gethostbyaddr((char *)&local_4.S_addr,4,2);
    if (phVar1 != (hostent *)0x0) {
      pcVar2 = StringDuplicate(phVar1->h_name);
      *(char **)param_1 = pcVar2;
      return param_1;
    }
  }
  pcVar2 = inet_ntoa((in_addr)local_4.S_un_b);
  pcVar2 = StringDuplicate(pcVar2);
  *(char **)param_1 = pcVar2;
  return param_1;
}

