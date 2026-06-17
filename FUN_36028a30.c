
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_36028a30(void)

{
  char *pcVar1;
  MMRESULT MVar2;
  CTString *this;
  undefined4 *unaff_ESI;
  UINT_PTR uJoyID;
  int iVar3;
  joyinfoex_tag local_1cc;
  tagJOYCAPSA local_198;
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  *unaff_ESI = 4;
  FUN_3600bc00(unaff_ESI + 5,0x30);
  uJoyID = unaff_ESI[2] - 4;
  iVar3 = unaff_ESI[2] + -3;
  CTString::PrintF(this,(char *)(unaff_ESI + 3),s_Joystick__d_36224ff8,iVar3);
  CTString::PrintF((CTString *)(unaff_ESI + 4),(char *)(unaff_ESI + 4),s_Joy__d_36225004,iVar3);
  pcVar1 = Translate(s_ETRS_joy__d__3622500c,4);
  CPrintF(pcVar1,iVar3);
  MVar2 = joyGetDevCapsA(uJoyID,&local_198,0x194);
  if (MVar2 == 6) {
    pcVar1 = s_ETRS_joystick_driver_is_not_pres_3622501c;
  }
  else {
    if (MVar2 != 0xb) {
      if (MVar2 != 0) {
        pcVar1 = Translate(s_ETRS_error_0x_08x_3622505c,4);
        CPrintF(pcVar1,MVar2);
        return 0;
      }
      CPrintF(s___s__36225070,local_198.szPname);
      pcVar1 = Translate(s_ETRS__d_axes_36225078,4);
      CPrintF(pcVar1,local_198.wNumAxes);
      pcVar1 = Translate(s_ETRS__d_buttons_3622508c,4);
      CPrintF(pcVar1,local_198.wNumButtons);
      if ((local_198.wCaps & 0x10) == 0) {
        *(undefined4 *)(unaff_ESI[6] + 0x420) = 0;
        *(undefined4 *)(unaff_ESI[6] + 0x438) = 0;
        *(undefined4 *)(unaff_ESI[6] + 0x450) = 0;
        *(undefined4 *)(unaff_ESI[6] + 0x468) = 0;
      }
      else {
        pcVar1 = Translate(s_ETRS_POV_hat_present_362250a0,4);
        CPrintF(pcVar1);
        *(undefined4 *)(unaff_ESI[6] + 0x420) = 1;
        *(undefined4 *)(unaff_ESI[6] + 0x438) = 1;
        *(undefined4 *)(unaff_ESI[6] + 0x450) = 1;
        *(undefined4 *)(unaff_ESI[6] + 0x468) = 1;
      }
      local_1cc.dwSize = 0x34;
      local_1cc.dwFlags = 0x4ff;
      MVar2 = joyGetPosEx(uJoyID,&local_1cc);
      if (MVar2 != 0) {
        pcVar1 = Translate(s_ETRS_Cannot_read_the_joystick__362250bc,4);
        CPrintF(pcVar1);
        return 0;
      }
      *(undefined4 *)unaff_ESI[6] = 1;
      *(undefined4 *)(unaff_ESI[6] + 0x18) = 1;
      *(UINT *)(unaff_ESI[6] + 8) = local_198.wXmin;
      *(UINT *)(unaff_ESI[6] + 0xc) = local_198.wXmax;
      *(UINT *)(unaff_ESI[6] + 0x20) = local_198.wXmin;
      *(UINT *)(unaff_ESI[6] + 0x24) = local_198.wXmax;
      *(undefined4 *)(unaff_ESI[6] + 0x30) = 1;
      *(undefined4 *)(unaff_ESI[6] + 0x48) = 1;
      *(UINT *)(unaff_ESI[6] + 0x38) = local_198.wYmin;
      *(UINT *)(unaff_ESI[6] + 0x3c) = local_198.wYmax;
      *(UINT *)(unaff_ESI[6] + 0x50) = local_198.wYmin;
      *(UINT *)(unaff_ESI[6] + 0x54) = local_198.wYmax;
      *(UINT *)(unaff_ESI[6] + 0x60) = local_198.wCaps & 1;
      *(UINT *)(unaff_ESI[6] + 0x78) = local_198.wCaps & 1;
      *(UINT *)(unaff_ESI[6] + 0x68) = local_198.wZmin;
      *(UINT *)(unaff_ESI[6] + 0x6c) = local_198.wZmax;
      *(UINT *)(unaff_ESI[6] + 0x80) = local_198.wZmin;
      *(UINT *)(unaff_ESI[6] + 0x84) = local_198.wZmax;
      *(UINT *)(unaff_ESI[6] + 0x90) = local_198.wCaps & 2;
      *(UINT *)(unaff_ESI[6] + 0xa8) = local_198.wCaps & 2;
      *(UINT *)(unaff_ESI[6] + 0x98) = local_198.wRmin;
      *(UINT *)(unaff_ESI[6] + 0x9c) = local_198.wRmax;
      *(UINT *)(unaff_ESI[6] + 0xb0) = local_198.wRmin;
      *(UINT *)(unaff_ESI[6] + 0xb4) = local_198.wRmax;
      *(UINT *)(unaff_ESI[6] + 0xc0) = local_198.wCaps & 4;
      *(UINT *)(unaff_ESI[6] + 0xd8) = local_198.wCaps & 4;
      *(UINT *)(unaff_ESI[6] + 200) = local_198.wUmin;
      *(UINT *)(unaff_ESI[6] + 0xcc) = local_198.wUmax;
      *(UINT *)(unaff_ESI[6] + 0xe0) = local_198.wUmin;
      *(UINT *)(unaff_ESI[6] + 0xe4) = local_198.wUmax;
      *(UINT *)(unaff_ESI[6] + 0xf0) = local_198.wCaps & 8;
      *(UINT *)(unaff_ESI[6] + 0x108) = local_198.wCaps & 8;
      *(UINT *)(unaff_ESI[6] + 0xf8) = local_198.wVmin;
      *(UINT *)(unaff_ESI[6] + 0xfc) = local_198.wVmax;
      *(UINT *)(unaff_ESI[6] + 0x110) = local_198.wVmin;
      *(UINT *)(unaff_ESI[6] + 0x114) = local_198.wVmax;
      return 1;
    }
    pcVar1 = s_ETRS_invalid_parameter_36225044;
  }
  pcVar1 = Translate(pcVar1,4);
  CPrintF(pcVar1);
  return 0;
}

