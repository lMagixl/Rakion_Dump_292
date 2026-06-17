
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl FUN_36060340(DWORD param_1,DWORD param_2,int param_3)

{
  LONG LVar1;
  LONG LVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  DWORD DVar6;
  DEVMODEA *pDVar7;
  char *local_c4;
  DEVMODEA local_c0;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_36211c7b;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  if (_bDedicatedServer != 0) {
    return 0;
  }
  pDVar7 = &local_c0;
  for (iVar5 = 0x27; iVar5 != 0; iVar5 = iVar5 + -1) {
    pDVar7->dmDeviceName[0] = '\0';
    pDVar7->dmDeviceName[1] = '\0';
    pDVar7->dmDeviceName[2] = '\0';
    pDVar7->dmDeviceName[3] = '\0';
    pDVar7 = (DEVMODEA *)(pDVar7->dmDeviceName + 4);
  }
  local_c0.dmPelsWidth = param_1;
  local_c0.dmSize = 0x9c;
  local_c0.dmPelsHeight = param_2;
  local_c0.field17_0x74.dmDisplayFlags = 4;
  local_c0.dmFields = 0x380000;
  if (0 < (int)DAT_362c53f0) {
    local_c0.dmFields = 0x780000;
    local_c0.dmDisplayFrequency = DAT_362c53f0;
  }
  DVar6 = 0;
  if (param_3 == 1) {
    local_c0.dmBitsPerPel = 0x10;
    DVar6 = 0xf;
  }
  else {
    if (param_3 != 2) goto LAB_360603fc;
    local_c0.dmBitsPerPel = 0x20;
    DVar6 = 0x18;
  }
  local_c0.dmFields = local_c0.dmFields | 0x40000;
LAB_360603fc:
  ExceptionList = &local_14;
  LVar1 = ChangeDisplaySettingsA(&local_c0,4);
  if ((LVar1 != 0) &&
     (local_c0.dmBitsPerPel = DVar6, LVar2 = ChangeDisplaySettingsA(&local_c0,4), LVar2 != 0)) {
    local_c4 = StringDuplicate(&DAT_36222fa0);
    local_c = 0;
    switch(LVar1) {
    case 0:
      CTString::operator=((CTString *)&local_c4,s_DISP_CHANGE_SUCCESSFUL_362281d0);
      break;
    case 1:
      CTString::operator=((CTString *)&local_c4,s_DISP_CHANGE_RESTART_362281e8);
      break;
    case -5:
      CTString::operator=((CTString *)&local_c4,s_DISP_CHANGE_BADPARAM_36228214);
      break;
    case -4:
      CTString::operator=((CTString *)&local_c4,s_DISP_CHANGE_BADFLAGS_362281fc);
      break;
    case -3:
      CTString::operator=((CTString *)&local_c4,s_DISP_CHANGE_NOTUPDATED_36228254);
      break;
    case -2:
      CTString::operator=((CTString *)&local_c4,s_DISP_CHANGE_BADMODE_36228240);
      break;
    case -1:
      CTString::operator=((CTString *)&local_c4,s_DISP_CHANGE_FAILED_3622822c);
      break;
    default:
      CTString::PrintF((CTString *)&local_c4,(char *)&local_c4,&DAT_3622826c,LVar1);
    }
    pcVar4 = local_c4;
    pcVar3 = Translate(s_ETRSCDS_error___s_36228270,4);
    CPrintF(pcVar3,pcVar4);
    local_c = 0xffffffff;
    StringFree(local_c4);
    ExceptionList = local_14;
    return 0;
  }
  DVar6 = local_c0.dmBitsPerPel;
  pcVar4 = Translate(s_ETRS_CDS__mode_set_to__dx_dx_d_36228284,4);
  CPrintF(pcVar4,param_1,param_2,DVar6);
  ExceptionList = local_14;
  return 1;
}

