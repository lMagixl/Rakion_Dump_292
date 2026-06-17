
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: int __thiscall CSoundLibrary::StartUp_waveout(int) */

int __thiscall CSoundLibrary::StartUp_waveout(CSoundLibrary *this,int param_1)

{
  CSoundLibrary *this_00;
  float fVar1;
  char *pcVar2;
  UINT uDeviceID;
  MMRESULT MVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  void *pvVar7;
  CTString *extraout_ECX;
  CTString *this_01;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  tagWAVEOUTCAPSA *ptVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  double dVar17;
  HWAVEOUT local_50;
  char *local_4c;
  int local_48;
  tagWAVEOUTCAPSA local_44;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xa0000  3667  ?StartUp_waveout@CSoundLibrary@@AAEHH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212f9b;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x44) = 1;
  if (param_1 != 0) {
    pcVar2 = Translate(s_ETRSWaveOut_initialization_____3622f73c,4);
    CPrintF(pcVar2);
  }
  local_4c = DAT_362a5214;
  local_48 = 0;
  iVar8 = 0;
  do {
    while( true ) {
      uDeviceID = DAT_362a5208;
      if ((int)DAT_362a5208 < 0) {
        uDeviceID = 0xffffffff;
      }
      MVar3 = waveOutOpen(&local_50,uDeviceID,(LPCWAVEFORMATEX)(this + 0x4c),0,0,0);
      if (MVar3 == 0) break;
      local_4c = local_4c + -1;
      if ((int)local_4c < 0) goto LAB_360a00e7;
      uVar15 = FUN_361bfd6c();
      Sleep((DWORD)uVar15);
    }
    local_48 = iVar8 + 1;
    if (local_48 == 1) {
      *(HWAVEOUT *)this = local_50;
    }
    else {
      iVar8 = *(int *)(this + 0xc);
      this_00 = this + 4;
      *(int *)(this + 0xc) = iVar8 + 1;
      iVar10 = FUN_360a13f0((undefined4 *)this_00);
      if (iVar10 < iVar8 + 1) {
        iVar8 = FUN_360a13f0((undefined4 *)this_00);
        FUN_360a16a0(this_00,iVar8 + *(int *)(this + 0x10));
      }
      *(HWAVEOUT *)(*(int *)(this + 8) + -4 + *(int *)(this + 0xc) * 4) = local_50;
    }
    iVar8 = local_48;
  } while (local_48 < DAT_362a5218 + 1);
LAB_360a00e7:
  if ((iVar8 != 0) || (MVar3 == 0)) {
    if (param_1 != 0) {
      ptVar13 = &local_44;
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        ptVar13->wMid = 0;
        ptVar13->wPid = 0;
        ptVar13 = (tagWAVEOUTCAPSA *)&ptVar13->vDriverVersion;
      }
      waveOutGetDevCapsA(*(UINT_PTR *)this,&local_44,0x34);
      pcVar2 = Translate(s_ETRSdefault_device_3622f81c,4);
      local_4c = StringDuplicate(pcVar2);
      local_4 = 1;
      if (-1 < (int)DAT_362a5208) {
        pcVar2 = Translate(s_ETRSdevice__d_3622f830,4);
        CTString::PrintF((CTString *)&local_4c,(char *)&local_4c,pcVar2);
      }
      pcVar2 = Translate(s_ETRS_opened_device___s_3622f840,4);
      CPrintF(pcVar2);
      uVar5 = *(undefined4 *)(this + 0x50);
      uVar16 = CONCAT44(local_4c,(uint)*(ushort *)(this + 0x5a));
      pcVar2 = Translate(s_ETRS__dHz___dbit___s_3622f85c,4);
      CPrintF(pcVar2,uVar5,uVar16);
      local_4 = 0xffffffff;
      StringFree(local_4c);
    }
    fVar1 = (float)*(int *)(this + 0x50);
    if (*(int *)(this + 0x50) < 0) {
      fVar1 = fVar1 + _DAT_362265a8;
    }
    ceil((double)(fVar1 * DAT_362a51f0));
    uVar15 = FUN_361bfd6c();
    uVar11 = (uint)uVar15 & 0x800003ff;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffc00) + 1;
    }
    local_50 = (HWAVEOUT)(((uint)uVar15 - uVar11) + 0x400);
    *(HWAVEOUT *)(this + 0x68) = local_50;
    iVar8 = (int)((int)&local_50->unused + ((int)local_50 >> 0x1f & 0x3ffU)) >> 10;
    uVar15 = FUN_361bfd6c();
    *(int *)(this + 0x6c) = (int)uVar15;
    if (param_1 != 0) {
      uVar11 = (uint)*(ushort *)(this + 0x5a);
      uVar5 = *(undefined4 *)(this + 0x50);
      dVar17 = (double)DAT_362a51f0;
      pcVar2 = Translate(s_ETRS_parameters___d_Hz___d_bit__s_3622f874,4);
      CPrintF(pcVar2,uVar5,uVar11,dVar17);
      uVar16 = CONCAT44(0x400,iVar8);
      pcVar2 = Translate(s_ETRS_output_buffers___d_x__d_byt_3622f8b0,4);
      CPrintF(pcVar2,uVar16);
      pcVar2 = Translate(s_ETRS_mpx_decode___d_bytes_3622f8d8,4);
      CPrintF(pcVar2);
      pcVar2 = Translate(s_ETRS_extra_sound_channels_taken__3622f8f4,4);
      CPrintF(pcVar2);
    }
    puVar4 = AllocMemory(*(long *)(this + 0x68));
    uVar11 = *(uint *)(this + 0x68);
    *(undefined4 **)(this + 0x20) = puVar4;
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    if (iVar8 != 0) {
      *(int *)(this + 0x14) = iVar8;
      uVar5 = thunk_FUN_361bf99c((iVar8 + 1) * 0x20);
      *(undefined4 *)(this + 0x18) = uVar5;
      if (0 < iVar8) {
        iVar12 = 0;
        iVar10 = 0;
        do {
          piVar6 = (int *)(*(int *)(this + 0x18) + iVar10);
          iVar14 = *(int *)(this + 0x20) + iVar12;
          iVar10 = iVar10 + 0x20;
          iVar12 = iVar12 + 0x400;
          iVar8 = iVar8 + -1;
          *piVar6 = iVar14;
          piVar6[1] = 0x400;
          piVar6[4] = 0;
        } while (iVar8 != 0);
      }
    }
    pvVar7 = AllocMemory(*(long *)(this + 0x68));
    *(void **)(this + 0x60) = pvVar7;
    pvVar7 = AllocMemory(*(int *)(this + 0x6c) + 4);
    *(void **)(this + 100) = pvVar7;
    ExceptionList = local_c;
    return 1;
  }
  param_1 = (int)StringDuplicate(&DAT_36222fa0);
  this_01 = extraout_ECX;
  local_4 = iVar8;
  if (MVar3 - 2 < 0x22) {
    this_01 = (CTString *)(uint)*(byte *)((int)&PTR_caseD_3_360a0478 + MVar3 + 2);
    switch(MVar3) {
    case 2:
      pcVar2 = s_ETRSBad_device_number__3622f778;
      break;
    default:
      goto switchD_360a011b_caseD_3;
    case 4:
      pcVar2 = s_ETRSDevice_already_in_use__3622f75c;
      break;
    case 6:
      pcVar2 = s_ETRSNo_driver_installed__3622f790;
      break;
    case 7:
      pcVar2 = s_ETRSMemory_allocation_problem__3622f7ac;
      break;
    case 0x20:
      pcVar2 = s_ETRSUnsupported_data_format__3622f7cc;
      break;
    case 0x23:
      pcVar2 = s_ETRSWrong_flag__3622f7ec;
    }
    pcVar2 = Translate(pcVar2,4);
    CTString::operator=((CTString *)&param_1,pcVar2);
  }
  else {
switchD_360a011b_caseD_3:
    CTString::PrintF(this_01,(char *)&param_1,&DAT_3622f7fc);
  }
  pcVar2 = Translate(s_ETRS___WaveOut_error___s_3622f800,4);
  CPrintF(pcVar2);
  local_4 = 0xffffffff;
  StringFree((char *)param_1);
  ExceptionList = local_c;
  return 0;
}

