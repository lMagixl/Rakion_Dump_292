
void __fastcall FUN_36045f20(undefined4 *param_1)

{
  HANDLE pvVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  DWORD DVar5;
  undefined4 uVar6;
  
  DVar5 = 0x20000080;
  if (DAT_362b2aa8 != 0) {
    DVar5 = 0x60000080;
  }
  pvVar1 = CreateFileA((LPCSTR)*param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,DVar5,(HANDLE)0x0)
  ;
  param_1[2] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    piVar2 = _errno();
    pcVar3 = strerror(*piVar2);
    uVar6 = *param_1;
    pcVar4 = Translate(s_ETRS_s__Cannot_open_file___s__362279cc,4);
    ThrowF_t(pcVar4,uVar6,pcVar3);
  }
  DVar5 = GetFileSize((HANDLE)param_1[2],(LPDWORD)0x0);
  param_1[3] = DVar5;
  return;
}

