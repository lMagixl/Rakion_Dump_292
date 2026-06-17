
void __cdecl FUN_36022b80(CTStream *param_1)

{
  int iVar1;
  CTString *pCVar2;
  int iVar3;
  
  iVar1 = FUN_36022b40();
  **(int **)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar3 = 0;
  iVar1 = FUN_36022580(0x362b8fdc);
  if (0 < iVar1) {
    do {
      pCVar2 = (CTString *)FUN_36022660(&DAT_362b8fdc,iVar3);
      if (*(int *)(pCVar2 + 0xc) != 0) {
        operator<<(param_1,pCVar2);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_36022580(0x362b8fdc);
    } while (iVar3 < iVar1);
  }
  return;
}

