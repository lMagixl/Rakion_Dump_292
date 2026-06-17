
/* char * __cdecl ConvertWordStrToByteStr(unsigned short *,long &) */

char * __cdecl ConvertWordStrToByteStr(ushort *param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)&DAT_36301748;
                    /* 0x187ce0  1367  ?ConvertWordStrToByteStr@@YAPADPAGAAJ@Z */
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_2 = 0;
  uVar1 = *param_1;
  pcVar3 = &DAT_36301748;
  while ((uVar1 != 0 && (*param_2 < 0x100))) {
    if ((_buseMultiByte == 1) && (*(char *)((int)param_1 + 1) != '\0')) {
      *pcVar3 = *(char *)((int)param_1 + 1);
      pcVar3 = pcVar3 + 1;
    }
    *pcVar3 = (char)*param_1;
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 + 1;
    *param_2 = *param_2 + 1;
    uVar1 = *param_1;
  }
  return &DAT_36301748;
}

