
/* unsigned long __cdecl StringToAddress(class CTString const &) */

ulong __cdecl StringToAddress(CTString *param_1)

{
  ulong netlong;
  u_long uVar1;
  hostent *phVar2;
  
                    /* 0xfb420  3701  ?StringToAddress@@YAKABVCTString@@@Z */
  netlong = inet_addr(*(char **)param_1);
  uVar1 = ntohl(netlong);
  if (uVar1 == 0xffffffff) {
    phVar2 = gethostbyname(*(char **)param_1);
    if (phVar2 != (hostent *)0x0) {
      uVar1 = ntohl(*(u_long *)*phVar2->h_addr_list);
      return uVar1;
    }
  }
  return uVar1;
}

