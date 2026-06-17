
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: int __thiscall CSoundLibrary::StartUp_dsound(int) */

int __thiscall CSoundLibrary::StartUp_dsound(CSoundLibrary *this,int param_1)

{
  CSoundLibrary *pCVar1;
  CSoundLibrary *pCVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  FARPROC pFVar6;
  long lVar7;
  void *pvVar8;
  char *pcVar9;
  CTString *this_00;
  uint uVar10;
  char *unaff_EBP;
  int *unaff_ESI;
  ulonglong uVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piStack_b0;
  char *pcStack_ac;
  uint uStack_a8;
  undefined4 *puStack_a4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  long lStack_8c;
  undefined4 uStack_88;
  CSoundLibrary *pCStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  byte bStack_6c;
  undefined4 uStack_4c;
  char *pcStack_34;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x9eba0  3666  ?StartUp_dsound@CSoundLibrary@@AAEHH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36212f61;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x44) = 0;
  if (param_1 != 0) {
    pcVar4 = Translate(s_ETRSDirect_Sound_initialization___3622f37c,4);
    CPrintF(pcVar4);
  }
  DAT_362ca0d8 = LoadLibraryA(s_dsound_dll_3622f3a4);
  if (DAT_362ca0d8 == (HMODULE)0x0) {
    pcVar4 = Translate(s_ETRS___DirectSound_error__Cannot_3622f3b0,4);
    CPrintF(pcVar4);
    iVar5 = 0;
  }
  else {
    pFVar6 = GetProcAddress(DAT_362ca0d8,s_DirectSoundCreate_3622f3e8);
    if (pFVar6 == (FARPROC)0x0) {
      pcVar4 = Translate(s_ETRS___DirectSound_error__Cannot_3622f3fc,4);
      iVar5 = DSFail(this,pcVar4);
    }
    else {
      pCVar1 = this + 0x2c;
      if ((*(int *)(this + 0x2c) == 0) && (iVar5 = (*pFVar6)(0), iVar5 != 0)) {
        pcVar4 = s_ETRS___DirectSound_error__Cannot_3622f438;
      }
      else {
        local_70 = 0x60;
        iVar5 = (**(code **)(**(int **)pCVar1 + 0x10))();
        if (iVar5 == 0) {
          if ((bStack_6c & 0x20) != 0) {
            pcVar4 = Translate(s_ETRS___DirectSound_error__No_dri_3622f4a8,4);
            CPrintF(pcVar4);
            ShutDown_dsound(this);
            ExceptionList = local_c;
            return 0;
          }
          pcStack_ac = pcStack_34;
          uStack_98 = uStack_4c;
          DAT_362ca0d4 = DAT_362b2a94;
          iVar5 = (**(code **)(**(int **)pCVar1 + 0x18))(*(int **)pCVar1);
          if (iVar5 == 0) {
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            lStack_8c = 0;
            pCStack_84 = (CSoundLibrary *)0x0;
            uStack_78 = 0;
            uStack_74 = 0;
            uStack_94 = 0x24;
            uStack_90 = 0x11;
            iVar5 = (**(code **)(**(int **)pCVar1 + 0xc))(*(int **)pCVar1,&uStack_94);
            if (iVar5 == 0) {
              iVar5 = (**(code **)(**(int **)(this + 0x24) + 0x38))();
              if (iVar5 == 0) {
                pCVar2 = this + 0x34;
                iVar5 = (**(code **)**(undefined4 **)(this + 0x24))(*(undefined4 **)(this + 0x24));
                if (iVar5 == 0) {
                  if (DAT_362ca0cc < 0) {
                    DAT_362ca0cc = 0;
                  }
                  else if (3 < DAT_362ca0cc) {
                    DAT_362ca0cc = 3;
                  }
                  if (((*(uint *)(this + 0x44) & 2) == 0) && (1 < DAT_362a520c)) {
                    if (((int)pcStack_ac < 5) && (DAT_362ca0cc < 1)) {
                      DAT_362a520c = 1;
                    }
                    else {
                      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 2;
                    }
                  }
                  uStack_a8 = *(uint *)(this + 0x44) & 2;
                  if (uStack_a8 != 0) {
                    (**(code **)(**(int **)pCVar2 + 0x34))
                              (*(int **)pCVar2,0,0,0x3f800000,0,0x3f800000);
                    (**(code **)(**(int **)pCVar2 + 0x38))(*(int **)pCVar2,0,0,0,0);
                    (**(code **)(**(int **)pCVar2 + 0x40))(*(int **)pCVar2,0,0,0,0);
                    (**(code **)(**(int **)pCVar2 + 0x3c))(*(int **)pCVar2,0,0);
                    (**(code **)(**(int **)pCVar2 + 0x30))(*(int **)pCVar2,0x3f8ccccd,0);
                  }
                  fVar3 = (float)*(int *)(this + 0x50);
                  if (*(int *)(this + 0x50) < 0) {
                    fVar3 = fVar3 + _DAT_362265a8;
                  }
                  FUN_3608a830(fVar3 * DAT_362a51f0);
                  uVar11 = FUN_361bfd6c();
                  lVar7 = (long)uVar11;
                  uStack_88 = 0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                  uStack_78 = 0;
                  uStack_74 = 0;
                  uStack_94 = 0x24;
                  uStack_90 = 0x500e0;
                  uStack_a8 = lVar7;
                  lStack_8c = lVar7;
                  pCStack_84 = this + 0x4c;
                  iVar5 = (**(code **)(**(int **)pCVar1 + 0xc))(*(int **)pCVar1,&uStack_94);
                  if (iVar5 == 0) {
                    if (DAT_362a520c == 3) {
                      *(ushort *)(this + 0x58) = *(ushort *)(this + 0x58) >> 1;
                      *(undefined2 *)(this + 0x4e) = 1;
                      *(uint *)(this + 0x54) = *(uint *)(this + 0x54) >> 1;
                      uStack_94 = 0x24;
                      lStack_8c = 4;
                      uStack_90 = 0x10;
                      pCStack_84 = this + 0x4c;
                      iVar5 = (**(code **)(**(int **)pCVar1 + 0xc))(*(int **)pCVar1,&uStack_94);
                      if (iVar5 == 0) {
                        iVar5 = (**(code **)*puStack_a4)(puStack_a4);
                        if (iVar5 == 0) {
                          pcVar4 = Translate(s_ETRS___EAX_error__Cannot_query_p_3622f614,4);
                          CTString::CTString((CTString *)&uStack_a8,pcVar4);
                          pCVar1 = this + 0x28;
                          local_10 = 0;
                          iVar5 = (*(code *)**(undefined4 **)pcStack_ac)
                                            (pcStack_ac,&DAT_36230010,pCVar1);
                          if (iVar5 == 0) {
                            uVar11 = 0;
                            iVar5 = (**(code **)(**(int **)pCVar1 + 0x14))
                                              (*(int **)pCVar1,&DAT_3622fd40,0xb,&stack0xffffff38);
                            if ((((iVar5 == 0) && ((uVar11 & 2) != 0)) &&
                                (iVar5 = (**(code **)(**(int **)pCVar1 + 0x14))
                                                   (*(int **)pCVar1,&DAT_3622fd30,3,&stack0xffffff38
                                                   ), iVar5 == 0)) && ((uVar11 & 2) != 0)) {
                              *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 4;
                            }
                          }
                          if (((byte)this[0x44] & 4) == 0) {
                            CPrintF(unaff_EBP);
                          }
                          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
                          local_10 = 0xffffffff;
                          StringFree(unaff_EBP);
                        }
                        (**(code **)(*piStack_b0 + 8))(piStack_b0);
                      }
                    }
                    *(long *)(this + 0x68) = lVar7;
                    uVar11 = FUN_361bfd6c();
                    *(int *)(this + 0x6c) = (int)uVar11;
                    pvVar8 = AllocMemory(lVar7);
                    *(void **)(this + 0x60) = pvVar8;
                    pvVar8 = AllocMemory(*(int *)(this + 0x6c) + 4);
                    *(void **)(this + 100) = pvVar8;
                    DAT_362ca0dc = 0;
                    if (param_1 != 0) {
                      pcVar4 = Translate(s_ETRSdefault_device_3622f648,4);
                      CTString::CTString((CTString *)&piStack_b0,pcVar4);
                      uStack_4 = 1;
                      if (-1 < DAT_362a5208) {
                        Translate(s_ETRSdevice__d_3622f65c,4);
                        CTString::PrintF(this_00,(char *)&piStack_b0);
                      }
                      uVar10 = (uint)*(ushort *)(this + 0x5a);
                      uVar12 = *(undefined4 *)(this + 0x50);
                      piVar13 = piStack_b0;
                      pcVar4 = Translate(s_ETRS__dHz___dbit___s__mix_ahead__3622f66c,4);
                      CPrintF(pcVar4,uVar12,uVar10,piVar13);
                      pcVar4 = Translate(s_ETRS_hardware_voices___d___d_3D__3622f694,4);
                      CPrintF(pcVar4);
                      pcVar4 = Translate(s_ETRS_mixer_buffer_size___d_KB_3622f6b8,4);
                      CPrintF(pcVar4);
                      pcVar4 = Translate(s_ETRS_decode_buffer_size___d_KB_3622f6dc,4);
                      CPrintF(pcVar4);
                      CTString::CTString((CTString *)&pcStack_ac);
                      uStack_4._0_1_ = 2;
                      if (((byte)this[0x44] & 4) == 0) {
                        pcVar4 = s_ETRSDisabled_3622f70c;
                      }
                      else {
                        pcVar4 = s_ETRSEnabled_3622f700;
                      }
                      pcVar4 = Translate(pcVar4,4);
                      CTString::operator=((CTString *)&pcStack_ac,pcVar4);
                      pcVar4 = pcStack_ac;
                      pcVar9 = Translate(s_ETRS_environment_effects___s_3622f71c,4);
                      CPrintF(pcVar9);
                      uStack_4 = CONCAT31(uStack_4._1_3_,1);
                      StringFree(pcVar4);
                      uStack_4 = 0xffffffff;
                      StringFree((char *)piStack_b0);
                    }
                    ExceptionList = local_c;
                    return 1;
                  }
                  pcVar4 = s_ETRS___DirectSound_error__Cannot_3622f5d8;
                }
                else {
                  pcVar4 = s_ETRS___DirectSound3D_error__Cann_3622f59c;
                }
              }
              else {
                pcVar4 = s_ETRS___DirectSound_error__Cannot_3622f558;
              }
            }
            else {
              pcVar4 = s_ETRS___DirectSound_error__Cannot_3622f518;
            }
          }
          else {
            pcVar4 = s_ETRS___DirectSound_error__Cannot_3622f4dc;
          }
        }
        else {
          pcVar4 = s_ETRS___DirectSound_error__Cannot_3622f46c;
        }
      }
      pcVar4 = Translate(pcVar4,4);
      iVar5 = DSFail(this,pcVar4);
    }
  }
  ExceptionList = local_c;
  return iVar5;
}

