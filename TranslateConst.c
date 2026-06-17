
/* char const * __cdecl TranslateConst(char const *,long) */

char * __cdecl TranslateConst(char *param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x453a0  3847  ?TranslateConst@@YAPBDPBDJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211308;
  local_c = ExceptionList;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)param_2 <= (uint)((int)pcVar2 - (int)(param_1 + 1))) {
    param_1 = param_1 + param_2;
  }
  if (DAT_362bf220 != 0) {
    param_1[-1] = '*';
    return param_1 + -1;
  }
  ExceptionList = &local_c;
  iVar3 = FUN_36045290(0x362bf308);
  if (0 < iVar3) {
    param_2 = (long)StringDuplicate(param_1);
    local_4 = 0;
    uVar4 = FUN_360e4b00(&DAT_362bf2f4,(CTString *)&param_2);
    local_4 = 0xffffffff;
    StringFree((char *)param_2);
    if (uVar4 != 0) {
      ExceptionList = local_c;
      return *(char **)(uVar4 + 8);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

