
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __thiscall CGfxLibrary::InitAPIs(void) */

void __thiscall CGfxLibrary::InitAPIs(CGfxLibrary *this)

{
  CGfxLibrary *pCVar1;
  char *pcVar2;
  LONG LVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  DWORD *pDVar10;
  DEVMODEA *pDVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  LPSTR local_6d4 [5];
  DEVMODEA local_6c0;
  DEVMODEA local_620;
  CHAR local_548 [216];
  undefined1 auStack_470 [560];
  char acStack_240 [512];
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_c;
  
                    /* 0x5fdc0  2295  ?InitAPIs@CGfxLibrary@@AAEXXZ */
  local_c = DAT_362abd90;
  if (_bDedicatedServer == 0) {
    pDVar11 = &local_6c0;
    for (iVar9 = 0x27; iVar9 != 0; iVar9 = iVar9 + -1) {
      pDVar11->dmDeviceName[0] = '\0';
      pDVar11->dmDeviceName[1] = '\0';
      pDVar11->dmDeviceName[2] = '\0';
      pDVar11->dmDeviceName[3] = '\0';
      pDVar11 = (DEVMODEA *)(pDVar11->dmDeviceName + 4);
    }
    local_6c0.dmSize = 0x9c;
    EnumDisplaySettingsA((LPCSTR)0x0,0xffffffff,&local_6c0);
    pDVar11 = &local_6c0;
    pcVar2 = Translate(s_I_ETRSCurrent_display____s__vers_3622812e + 2,4);
    CPrintF(pcVar2,pDVar11);
    *(undefined4 *)(this + 0x510) = 1;
    *(undefined4 *)(this + 0x514) = 0;
    *(undefined4 *)(this + 0x134) = 4;
    pcVar2 = Translate(s_ETRSunknown_36228164,4);
    pcVar2 = StringDuplicate(pcVar2);
    StringFree(*(char **)(this + 0x138));
    *(char **)(this + 0x138) = pcVar2;
    pcVar2 = Translate(s_ETRSDefault_ICD_36228170,4);
    pcVar2 = StringDuplicate(pcVar2);
    StringFree(*(char **)(this + 0x13c));
    *(char **)(this + 0x13c) = pcVar2;
    pcVar2 = StringDuplicate(&DAT_36228180);
    StringFree(*(char **)(this + 0x140));
    *(char **)(this + 0x140) = pcVar2;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x130) = 0xffffffff;
    pDVar10 = &DAT_362a29c0;
    do {
      pDVar11 = &local_620;
      for (iVar9 = 0x27; iVar9 != 0; iVar9 = iVar9 + -1) {
        pDVar11->dmDeviceName[0] = '\0';
        pDVar11->dmDeviceName[1] = '\0';
        pDVar11->dmDeviceName[2] = '\0';
        pDVar11->dmDeviceName[3] = '\0';
        pDVar11 = (DEVMODEA *)(pDVar11->dmDeviceName + 4);
      }
      local_620.dmPelsWidth = *pDVar10;
      local_620.dmPelsHeight = pDVar10[1];
      local_620.dmSize = 0x9c;
      local_620.field17_0x74.dmDisplayFlags = 4;
      local_620.dmFields = 0x380000;
      LVar3 = ChangeDisplaySettingsA(&local_620,6);
      if (LVar3 == 0) {
        pCVar1 = this + *(int *)(this + 300) * 0xc;
        *(DWORD *)pCVar1 = *pDVar10;
        *(DWORD *)(pCVar1 + 4) = pDVar10[1];
        *(undefined4 *)(pCVar1 + 8) = 0;
        *(int *)(this + 300) = *(int *)(this + 300) + 1;
      }
      pDVar10 = pDVar10 + 2;
    } while ((int)pDVar10 < 0x362a2ac0);
    iVar9 = 0;
    DVar4 = SearchPathA((LPCSTR)0x0,s_3DFXVGL_DLL_36228188,(LPCSTR)0x0,0x104,local_548,local_6d4);
    if (DVar4 != 0) {
      *(int *)(this + 0x510) = *(int *)(this + 0x510) + 1;
      *(undefined4 *)(this + 0x270) = 4;
      *(undefined4 *)(this + 0x278) = 0xb;
      pcVar2 = StringDuplicate(&DAT_36228194);
      StringFree(*(char **)(this + 0x27c));
      *(char **)(this + 0x27c) = pcVar2;
      pcVar2 = StringDuplicate(s_3Dfx_Voodoo2_3622819c);
      StringFree(*(char **)(this + 0x280));
      *(char **)(this + 0x280) = pcVar2;
      pcVar2 = StringDuplicate(&DAT_362281ac);
      StringFree(*(char **)(this + 0x284));
      *(char **)(this + 0x284) = pcVar2;
      *(undefined4 *)(this + 0x144) = 0x200;
      *(undefined4 *)(this + 0x148) = 0x180;
      *(undefined4 *)(this + 0x14c) = 1;
      *(undefined4 *)(this + 0x150) = 0x280;
      *(undefined4 *)(this + 0x154) = 0x1e0;
      *(undefined4 *)(this + 0x158) = 1;
      *(undefined4 *)(this + 0x15c) = 800;
      *(undefined4 *)(this + 0x160) = 600;
      *(undefined4 *)(this + 0x164) = 1;
      *(undefined4 *)(this + 0x168) = 0x400;
      *(undefined4 *)(this + 0x16c) = 0x300;
      *(undefined4 *)(this + 0x170) = 1;
    }
    iVar5 = InitDriver_D3D(this);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(**(int **)(this + 0xa58) + 0x10))();
      *(undefined4 *)(this + 0xa28) = 0;
      if (0 < iVar5) {
        do {
          iVar6 = *(int *)(this + 0xa28) * 0x144;
          *(undefined4 *)(this + iVar6 + 0x64c) = 0;
          *(undefined4 *)(this + iVar6 + 0x644) = 0;
          iVar15 = iVar9;
          (**(code **)(**(int **)(this + 0xa58) + 0x18))();
          iVar14 = 0;
          iVar13 = 0x15;
          iVar7 = (**(code **)(**(int **)(this + 0xa58) + 0x24))
                            (*(int **)(this + 0xa58),iVar9,DAT_36228844,0x15);
          if ((iVar7 != 0) &&
             (iVar7 = (**(code **)(**(int **)(this + 0xa58) + 0x24))
                                (*(int **)(this + 0xa58),iVar9,DAT_36228844,0x16,0x16,0), iVar7 != 0
             )) {
            *(uint *)(this + iVar6 + 0x64c) = *(uint *)(this + iVar6 + 0x64c) | 8;
          }
          pDVar10 = &local_6c0.dmICMIntent;
          (**(code **)(**(int **)(this + 0xa58) + 0x34))(*(int **)(this + 0xa58),iVar9,DAT_36228844)
          ;
          if ((local_6c0.dmICMMethod & 0x80000) == 0) {
            *(uint *)(this + iVar6 + 0x64c) = *(uint *)(this + iVar6 + 0x64c) | 2;
          }
          piVar12 = &DAT_362a29c0;
          do {
            iVar7 = 0;
            if (0 < (int)pDVar10) {
              do {
                (**(code **)(**(int **)(this + 0xa58) + 0x1c))
                          (*(int **)(this + 0xa58),iVar9,iVar7,&stack0xfffff900);
                if ((((iVar13 == *piVar12) && (iVar14 == piVar12[1])) &&
                    (((iVar15 == 0x15 ||
                      (((iVar15 == 0x16 || (iVar15 == 0x19)) || (iVar15 == 0x18)))) ||
                     (iVar15 == 0x17)))) &&
                   (iVar8 = (**(code **)(**(int **)(this + 0xa58) + 0x24))
                                      (*(int **)(this + 0xa58),iVar9,DAT_36228844,iVar15,iVar15,0),
                   iVar8 == 0)) {
                  pCVar1 = this + *(int *)(this + iVar6 + 0x644) * 0xc + iVar6 + 0x518;
                  *(int *)pCVar1 = *piVar12;
                  *(int *)(pCVar1 + 4) = piVar12[1];
                  *(int *)(pCVar1 + 8) = 0;
                  *(int *)(this + iVar6 + 0x644) = *(int *)(this + iVar6 + 0x644) + 1;
                  break;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)pDVar10);
            }
            piVar12 = piVar12 + 2;
          } while ((int)piVar12 < 0x362a2ac0);
          *(int *)(this + 0xa28) = *(int *)(this + 0xa28) + 1;
          (**(code **)(**(int **)(this + 0xa58) + 0x14))
                    (*(int **)(this + 0xa58),iVar9,2,auStack_470);
          pcVar2 = StringDuplicate(s_MS_DirectX_8_362281b4);
          StringFree(*(char **)(this + iVar6 + 0x650));
          *(char **)(this + iVar6 + 0x650) = pcVar2;
          pcVar2 = StringDuplicate(acStack_240);
          StringFree(*(char **)(this + iVar6 + 0x654));
          *(char **)(this + iVar6 + 0x654) = pcVar2;
          CTString::PrintF((CTString *)(uStack_40 & 0xffff),(char *)(this + iVar6 + 0x658),
                           s__d__d__d__d_362281c4,(int)uStack_3c >> 0x10,uStack_3c & 0xffff,
                           uStack_40 >> 0x10,(CTString *)(uStack_40 & 0xffff));
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar5);
      }
      do {
        iVar9 = (**(code **)(**(int **)(this + 0xa58) + 8))();
      } while (0 < iVar9);
      *(undefined4 *)(this + 0xa58) = 0;
      if (*(HMODULE *)(this + 0xa34) != (HMODULE)0x0) {
        FreeLibrary(*(HMODULE *)(this + 0xa34));
      }
      *(undefined4 *)(this + 0xa34) = 0;
    }
  }
  return;
}

