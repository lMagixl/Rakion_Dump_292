
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_3608d230(int param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  LSTATUS LVar4;
  int iVar5;
  DWORD dwIndex;
  LPCSTR lpString2;
  BYTE local_3b0 [4];
  HKEY local_3ac;
  HKEY local_3a8;
  DWORD local_3a4 [2];
  undefined1 auStack_39c [160];
  byte bStack_2fc;
  CHAR local_1f8 [500];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  if ((DAT_362c9764 == (HMODULE)0x0) &&
     (DAT_362c9764 = LoadLibraryA(s_user32_dll_3622de4c), DAT_362c9764 == (HMODULE)0x0)) {
    pcVar2 = Translate(s_ETRSCannot_load_user32_dll__3622de58,4);
    ThrowF_t(pcVar2);
  }
  if ((DAT_362c9768 == (FARPROC)0x0) &&
     (DAT_362c9768 = GetProcAddress(DAT_362c9764,s_EnumDisplayDevicesA_3622de74),
     DAT_362c9768 == (FARPROC)0x0)) {
    pcVar2 = Translate(s_ETRSCannot_find_EnumDisplayDevic_3622de88,4);
    ThrowF_t(pcVar2);
  }
  if ((DAT_362c976c == (FARPROC)0x0) &&
     (DAT_362c976c = GetProcAddress(DAT_362c9764,s_ChangeDisplaySettingsExA_3622deb0),
     DAT_362c976c == (FARPROC)0x0)) {
    pcVar2 = Translate(s_ETRSCannot_find_ChangeDisplaySet_3622decc,4);
    ThrowF_t(pcVar2);
  }
  iVar3 = RegOpenKeyExA((HKEY)0x80000005,s_Display_Settings_3622def8,0,10,&local_3ac);
  if (iVar3 != 0) {
    pcVar2 = Translate(s_ETRSCannot_enumerate_display_set_3622df0c,4);
    ThrowF_t(pcVar2);
  }
  if (param_1 == 0) {
    lpString2 = &DAT_3622df48;
  }
  else {
    lpString2 = &DAT_3622df44;
  }
  lstrcpyA((LPSTR)local_3b0,lpString2);
  dwIndex = 0;
  while (iVar3 == 0) {
    local_3a4[0] = 500;
    LVar4 = RegEnumKeyExA(local_3ac,dwIndex,local_1f8,local_3a4,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                          ,(PFILETIME)0x0);
    if ((LVar4 != 0) || (LVar4 = RegOpenKeyExA(local_3ac,local_1f8,0,2,&local_3a8), LVar4 != 0))
    break;
    iVar3 = RegSetValueExA(local_3a8,s_AttachToDesktop_3622df4c,0,1,local_3b0,2);
    RegCloseKey(local_3a8);
    dwIndex = dwIndex + 1;
  }
  RegCloseKey(local_3ac);
  iVar5 = 0;
  bVar1 = false;
  local_3a4[1] = 0x1a8;
  iVar3 = (*DAT_362c9768)(0,0,local_3a4 + 1,0);
  if (iVar3 != 0) {
    do {
      if ((((bStack_2fc & 0xc) == 0) && (iVar3 = (*DAT_362c976c)(auStack_39c,0,0,0,0), iVar3 != 0))
         && (iVar3 != -5)) {
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
      iVar3 = (*DAT_362c9768)(0,iVar5,local_3a4 + 1,0);
    } while (iVar3 != 0);
    if (bVar1) {
      pcVar2 = Translate(s_ETRSCannot_change_settings_for_a_3622df5c,4);
      ThrowF_t(pcVar2);
    }
  }
  return;
}

