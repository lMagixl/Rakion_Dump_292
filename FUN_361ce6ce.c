
uint FUN_361ce6ce(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  LSTATUS LVar9;
  HMODULE hModule;
  FARPROC pFVar10;
  HANDLE hHeap;
  uint extraout_ECX;
  int iVar11;
  int unaff_EBP;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  DWORD dwFlags;
  LPVOID lpMem;
  
  FUN_3620d000();
  if (*(undefined4 **)(unaff_EBP + 0x1c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x1c) = 0;
  }
  if (*(undefined4 **)(unaff_EBP + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x20) = 0;
  }
  if (*(undefined4 **)(unaff_EBP + 0x24) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x24) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((iVar2 == 0) || (iVar6 = *(int *)(unaff_EBP + 0xc), iVar6 == 0)) {
    uVar8 = 0x8876086c;
    goto LAB_361ceb80;
  }
  *(int *)(extraout_ECX + 0xb8) = iVar2;
  *(int *)(extraout_ECX + 0xbc) = iVar2;
  *(int *)(extraout_ECX + 0xc0) = iVar2;
  *(int *)(extraout_ECX + 0xc4) = iVar2 + iVar6;
  iVar2 = *(int *)(unaff_EBP + 0x14);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(extraout_ECX + 0x1d0) = iVar2;
  *(uint *)(extraout_ECX + 0xb0) = *(uint *)(unaff_EBP + 0x18) & 1;
  pcVar3 = *(char **)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x3d8) = 0;
  *(undefined4 *)(extraout_ECX + 0x3dc) = 0;
  *(undefined4 *)(extraout_ECX + 0x3e0) = 0;
  *(undefined4 *)(extraout_ECX + 0x3e4) = 0;
  *(undefined4 *)(extraout_ECX + 0xac) = 0;
  *(undefined4 *)(extraout_ECX + 0xb4) = 0;
  if (pcVar3 == (char *)0x0) {
    *(undefined1 *)(extraout_ECX + 0x1d4) = 0;
    FUN_361cd179(extraout_ECX);
  }
  else {
    iVar2 = (extraout_ECX + 0x1d4) - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(extraout_ECX + 0x2d8) = 0;
  *(undefined4 *)(extraout_ECX + 0x2d4) = 0;
  pcVar3 = setlocale(4,(char *)0x0);
  pcVar3 = _strdup(pcVar3);
  *(char **)(unaff_EBP + 8) = pcVar3;
  if (pcVar3 == (char *)0x0) {
LAB_361ce7cd:
    setlocale(4,&DAT_36249a44);
  }
  else {
    iVar2 = 2;
    bVar15 = true;
    pcVar13 = &DAT_36249a44;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar15 = *pcVar3 == *pcVar13;
      pcVar3 = pcVar3 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar15);
    if (!bVar15) goto LAB_361ce7cd;
  }
  iVar2 = FUN_361ce215();
  if (iVar2 != 0) {
    *(undefined4 *)(extraout_ECX + 0x98) = 1;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar2 = 2;
    bVar15 = true;
    pcVar3 = *(char **)(unaff_EBP + 8);
    pcVar13 = &DAT_36249a44;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar15 = *pcVar3 == *pcVar13;
      pcVar3 = pcVar3 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar15);
    if (!bVar15) {
      setlocale(4,*(char **)(unaff_EBP + 8));
    }
    free(*(void **)(unaff_EBP + 8));
  }
  if (*(int *)(extraout_ECX + 0x98) != 0) goto LAB_361ceb4b;
  if ((*(int *)(unaff_EBP + 0x1c) != 0) && (*(int *)(extraout_ECX + 0xac) == 0)) {
    puVar4 = (undefined4 *)FUN_361bf99c(0x10);
    *(undefined4 **)(unaff_EBP + 8) = puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_361dc132(puVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar5 + 0x18))(*(undefined4 *)(extraout_ECX + 0x9c));
      *(int *)(unaff_EBP + 8) = iVar6;
      iVar2 = *piVar5;
      if (-1 < iVar6) {
        uVar7 = (**(code **)(iVar2 + 0xc))(piVar5);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar7;
        while (*(int *)(extraout_ECX + 0x9c) != 0) {
          *(int *)(extraout_ECX + 0x9c) = *(int *)(extraout_ECX + 0x9c) + -4;
          FUN_361dbc0b((void *)(extraout_ECX + 100),
                       (undefined4 *)(*(int *)(extraout_ECX + 0x9c) + *(int *)(unaff_EBP + 0xc)));
        }
        **(undefined4 **)(unaff_EBP + 0x1c) = piVar5;
        goto LAB_361ce8b7;
      }
LAB_361ce940:
      (**(code **)(iVar2 + 0x14))(1);
    }
LAB_361ce943:
    uVar8 = 0x8007000e;
    goto LAB_361ceb80;
  }
LAB_361ce8b7:
  if (*(int *)(extraout_ECX + 0x98) == 0) {
    if (*(int *)(unaff_EBP + 0x20) != 0) {
      iVar2 = *(int *)(extraout_ECX + 0xa0);
      *(int *)(unaff_EBP + 0xc) = iVar2;
      iVar2 = iVar2 + 0x30;
      iVar6 = *(int *)(extraout_ECX + 0xac);
      pcVar3 = s_D3DX8_Shader_Assembler_Version_0_36249a20;
      puVar4 = (undefined4 *)(unaff_EBP + -0x30);
      for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        puVar4 = puVar4 + 1;
      }
      *(int *)(unaff_EBP + 0x1c) = iVar2;
      if (iVar6 != 0) {
        *(int *)(unaff_EBP + 0x1c) = iVar2 + *(int *)(extraout_ECX + 0x9c);
      }
      puVar4 = (undefined4 *)FUN_361bf99c(0x10);
      *(undefined4 **)(unaff_EBP + 8) = puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_361dc132(puVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int **)(unaff_EBP + 0x14) = piVar5;
      *(int **)(unaff_EBP + 0x10) = piVar5;
      if (piVar5 == (int *)0x0) goto LAB_361ce943;
      iVar2 = (**(code **)(*piVar5 + 0x18))(*(undefined4 *)(unaff_EBP + 0x1c));
      *(int *)(unaff_EBP + 8) = iVar2;
      if (iVar2 < 0) {
        iVar2 = *piVar5;
        goto LAB_361ce940;
      }
      puVar4 = (undefined4 *)
               (**(code **)(**(int **)(unaff_EBP + 0x14) + 0xc))(*(int **)(unaff_EBP + 0x14));
      *puVar4 = *(undefined4 *)(extraout_ECX + 0xb4);
      puVar4[1] = 0x9fffe;
      puVar12 = puVar4 + 2;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      iVar2 = *(int *)(unaff_EBP + 0x1c);
      iVar6 = *(int *)(unaff_EBP + 0xc);
      puVar12 = (undefined4 *)(unaff_EBP + -0x30);
      puVar14 = puVar4 + 2;
      for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined4 *)((int)puVar4 + iVar2 + -4) = 0xffff;
      puVar4 = (undefined4 *)((int)puVar4 + iVar2 + -8);
      if (iVar6 != 0) {
        do {
          FUN_361dbc0b((void *)(extraout_ECX + 0x74),puVar4);
          puVar4 = puVar4 + -1;
          piVar5 = (int *)(unaff_EBP + 0xc);
          *piVar5 = *piVar5 + -4;
        } while (*piVar5 != 0);
      }
      if (*(int *)(extraout_ECX + 0xac) != 0) {
        piVar5 = (int *)(extraout_ECX + 0x9c);
        while (*piVar5 != 0) {
          FUN_361dbc0b((void *)(extraout_ECX + 100),puVar4);
          puVar4 = puVar4 + -1;
          *piVar5 = *piVar5 + -4;
        }
      }
      **(undefined4 **)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 0x14);
    }
    if ((*(int *)(extraout_ECX + 0x98) == 0) && ((*(byte *)(unaff_EBP + 0x18) & 2) == 0)) {
      if (*(int *)(extraout_ECX + 0xa0) == 0) {
        FUN_361cc398(extraout_ECX,s_statement_expected_36249998);
      }
      else {
        bVar15 = false;
        LVar9 = RegOpenKeyA((HKEY)0x80000002,s_SOFTWARE_Microsoft_Direct3D_36249a04,
                            (PHKEY)(unaff_EBP + 0x20));
        if (LVar9 == 0) {
          *(undefined4 *)(unaff_EBP + 0x1c) = 4;
          LVar9 = RegQueryValueExA(*(HKEY *)(unaff_EBP + 0x20),s_LoadDebugRuntime_362499f0,
                                   (LPDWORD)0x0,(LPDWORD)(unaff_EBP + 0x18),
                                   (LPBYTE)(unaff_EBP + 0xc),(LPDWORD)(unaff_EBP + 0x1c));
          if (((LVar9 == 0) && (*(int *)(unaff_EBP + 0x18) == 4)) &&
             (*(int *)(unaff_EBP + 0x1c) == 4)) {
            bVar15 = *(int *)(unaff_EBP + 0xc) != 0;
          }
          RegCloseKey(*(HKEY *)(unaff_EBP + 0x20));
          if ((!bVar15) ||
             ((hModule = GetModuleHandleA(s_d3d8d_dll_362499e4), hModule == (HMODULE)0x0 &&
              (hModule = LoadLibraryA(s_d3d8d_dll_362499e4), hModule == (HMODULE)0x0))))
          goto LAB_361cea72;
        }
        else {
LAB_361cea72:
          hModule = GetModuleHandleA(s_d3d8_dll_362499d8);
          if ((hModule == (HMODULE)0x0) &&
             (hModule = LoadLibraryA(s_d3d8_dll_362499d8), hModule == (HMODULE)0x0))
          goto LAB_361ceb4b;
        }
        uVar8 = -(uint)(*(int *)(unaff_EBP + 0x24) != 0) & unaff_EBP + 0x1cU;
        *(undefined4 *)(unaff_EBP + 0x1c) = 0;
        iVar2 = *(int *)(extraout_ECX + 0xac);
        *(uint *)(unaff_EBP + 0x18) = (uint)(*(int *)(unaff_EBP + 0x24) != 0);
        if (iVar2 == 0) {
          pFVar10 = GetProcAddress(hModule,s_ValidateVertexShader_362499ac);
          *(FARPROC *)(unaff_EBP + 0xc) = pFVar10;
          if (pFVar10 != (FARPROC)0x0) {
            uVar7 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0xc))
                              (*(int **)(unaff_EBP + 0x10),0,0,*(undefined4 *)(unaff_EBP + 0x18),
                               uVar8);
            uVar7 = (**(code **)(unaff_EBP + 0xc))(uVar7);
            goto LAB_361ceb00;
          }
        }
        else {
          pFVar10 = GetProcAddress(hModule,s_ValidatePixelShader_362499c4);
          *(FARPROC *)(unaff_EBP + 0xc) = pFVar10;
          if (pFVar10 != (FARPROC)0x0) {
            uVar7 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0xc))
                              (*(int **)(unaff_EBP + 0x10),0,*(undefined4 *)(unaff_EBP + 0x18),uVar8
                              );
            uVar7 = (**(code **)(unaff_EBP + 0xc))(uVar7);
LAB_361ceb00:
            *(undefined4 *)(unaff_EBP + 8) = uVar7;
          }
        }
        if (*(int *)(unaff_EBP + 8) < 0) {
          *(undefined4 *)(extraout_ECX + 0x98) = 1;
        }
        if (*(int *)(unaff_EBP + 0x1c) != 0) {
          FUN_361dbc8b((void *)(extraout_ECX + 0x84),*(char **)(unaff_EBP + 0x1c));
          lpMem = *(LPVOID *)(unaff_EBP + 0x1c);
          *(int *)(extraout_ECX + 0xa4) = *(int *)(extraout_ECX + 0xa4) + 1;
          dwFlags = 0;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,dwFlags,lpMem);
        }
      }
    }
  }
LAB_361ceb4b:
  if (((*(int *)(extraout_ECX + 0xa4) == 0) || (*(int *)(unaff_EBP + 0x24) == 0)) ||
     (uVar8 = FUN_361dbd7a(), -1 < (int)uVar8)) {
    uVar8 = -(uint)(*(int *)(extraout_ECX + 0x98) != 0) & 0x88760b59;
  }
LAB_361ceb80:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}

