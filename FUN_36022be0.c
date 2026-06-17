
void __cdecl FUN_36022be0(CTString *param_1,ulong param_2)

{
  CTString *pCVar1;
  int iVar2;
  char *pcVar3;
  
  if (DAT_362b8f08 != 0) {
    pCVar1 = (CTString *)FUN_360227c0(&DAT_362b8ff8,param_1);
    if (pCVar1 == (CTString *)0x0) {
      if (param_2 == 0) {
        param_2 = GetFileCRC32_t((CTFileName *)param_1);
      }
      iVar2 = FUN_360225f0(0x362b8fdc);
      if (iVar2 - DAT_362b8ff0 < 1) {
        FUN_360230f0(&DAT_362b8fdc,DAT_362b8ff4);
      }
      iVar2 = DAT_362b8ff0;
      DAT_362b8ff0 = DAT_362b8ff0 + 1;
      pCVar1 = (CTString *)FUN_36022660(&DAT_362b8fdc,iVar2);
      pcVar3 = StringDuplicate(*(char **)param_1);
      StringFree(*(char **)pCVar1);
      *(char **)pCVar1 = pcVar3;
      *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(param_1 + 4);
      *(ulong *)(pCVar1 + 8) = param_2;
      *(undefined4 *)(pCVar1 + 0xc) = 1;
      FUN_36022a60(&DAT_362b8ff8,pCVar1);
    }
    else {
      iVar2 = *(int *)(pCVar1 + 0xc);
      *(undefined4 *)(pCVar1 + 0xc) = 1;
      if (param_2 != 0) {
        *(ulong *)(pCVar1 + 8) = param_2;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    if (DAT_362ccef8 != 0) {
      CPrintF(s_I_CRC__08x____s__3622402a + 2,*(undefined4 *)(pCVar1 + 8),*(undefined4 *)pCVar1);
    }
  }
  return;
}

