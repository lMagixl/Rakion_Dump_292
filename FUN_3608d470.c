
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_3608d470(void)

{
  BOOL BVar1;
  char *pcVar2;
  int iVar3;
  _OSVERSIONINFOA *p_Var4;
  _OSVERSIONINFOA local_ac;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_362127b0;
  local_10 = ExceptionList;
  local_18 = DAT_362abd90;
  local_14 = &stack0xffffff44;
  if (_bDedicatedServer == 0) {
    p_Var4 = &local_ac;
    for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
      p_Var4->dwOSVersionInfoSize = 0;
      p_Var4 = (_OSVERSIONINFOA *)&p_Var4->dwMajorVersion;
    }
    iVar3 = 0;
    local_ac.dwOSVersionInfoSize = 0x94;
    ExceptionList = &local_10;
    BVar1 = GetVersionExA(&local_ac);
    if ((BVar1 != 0) && (local_ac.dwPlatformId == 2)) {
      iVar3 = 1;
    }
    if ((1 < DAT_362c5464) && (iVar3 == 0)) {
      pcVar2 = Translate(s_ETRSMultimonitor_configuration_d_3622df9c,4);
      CPrintF(pcVar2);
      if (DAT_362a41a8 == 0) {
        pcVar2 = Translate(s_ETRS_Multimonitor_support_was_al_3622e030,4);
        CPrintF(pcVar2);
      }
      else {
        pcVar2 = Translate(s_ETRS_Multimonitor_support_disall_3622dfc8,4);
        CPrintF(pcVar2);
        pcVar2 = Translate(s_ETRS_Disabling_multimonitor____3622dff0,4);
        CPrintF(pcVar2);
        local_8 = iVar3;
        FUN_3608d230(1);
        pcVar2 = Translate(s_ETRS_disabled_3622e010,4);
        CPrintF(pcVar2);
        DAT_362c5468 = 1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

