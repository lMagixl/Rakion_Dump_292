
/* unsigned short * __cdecl ConvertByteStrToWordStr(char *,long &) */

ushort * __cdecl ConvertByteStrToWordStr(char *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)&DAT_36301748;
                    /* 0x187c70  1364  ?ConvertByteStrToWordStr@@YAPAGPADAAJ@Z */
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_2 = 0;
  cVar1 = *param_1;
  pcVar2 = &DAT_36301748;
  while ((cVar1 != '\0' && (*param_2 < 0x100))) {
    if ((_buseMultiByte == 1) && (cVar1 < '\0')) {
      *pcVar2 = param_1[1];
      pcVar2[1] = *param_1;
      param_1 = param_1 + 2;
    }
    else {
      *pcVar2 = cVar1;
      param_1 = param_1 + 1;
      pcVar2[1] = '\0';
    }
    pcVar2 = pcVar2 + 2;
    *param_2 = *param_2 + 1;
    cVar1 = *param_1;
  }
  return (ushort *)&DAT_36301748;
}

