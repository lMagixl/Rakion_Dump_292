
/* void __cdecl shaFillColorBuffer(unsigned long) */

void __cdecl shaFillColorBuffer(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  
                    /* 0x90610  4330  ?shaFillColorBuffer@@YAXK@Z */
  iVar2 = DAT_362a433c;
  iVar3 = DAT_362a433c + 1;
  DAT_362c9954 = iVar3;
  iVar1 = FUN_36061f90((undefined4 *)&DAT_362c994c);
  if (iVar1 < iVar3) {
    iVar1 = FUN_36061f90((undefined4 *)&DAT_362c994c);
    FUN_360622b0(&DAT_362c994c,iVar1 + (iVar2 / DAT_362c9958 + 1) * DAT_362c9958);
  }
  DAT_362c9954 = DAT_362c9954 + -1;
  DAT_362c9864 = DAT_362c9950;
  iVar2 = DAT_362a433c;
  puVar4 = DAT_362c9950;
  if (DAT_362a433c != 0) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = param_1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

