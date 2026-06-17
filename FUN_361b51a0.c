
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_361b51a0(void)

{
  char cVar1;
  CShell CVar2;
  short sVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  CShell *pCVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  CTString *pCVar12;
  CTString *pCVar13;
  CShell *extraout_ECX;
  CShell *pCVar14;
  CShell *extraout_ECX_00;
  CShell *this;
  CShell *this_00;
  CShell *this_01;
  CShell *this_02;
  CShell *this_03;
  CTString *this_04;
  uint uVar15;
  CShell *pCVar16;
  CShell *pCVar17;
  uint uVar18;
  CShell *pCVar19;
  undefined4 *puVar20;
  CShell *pCVar21;
  undefined4 *puVar22;
  float10 fVar23;
  ulonglong uVar24;
  double dVar25;
  int *piVar26;
  int iVar27;
  undefined8 uVar28;
  CShell local_e80 [3200];
  char *local_200;
  char *local_1fc;
  char *local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  char *local_1e4;
  int local_1e0;
  CShell *local_1dc;
  CShell *local_1d8;
  CShell *local_1d4;
  CShell *local_1d0;
  uint local_1cc;
  int local_1c8;
  CShell *local_1c4;
  CShell *local_1c0;
  int local_1bc;
  CShell *local_1b8;
  uint local_1b4;
  int *local_1b0;
  undefined *local_1ac;
  undefined4 local_1a8;
  CShell local_1a4 [400];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621c180;
  local_10 = ExceptionList;
  local_14 = DAT_362abd90;
  local_1d4 = local_1a4;
  iVar6 = 0;
  pCVar7 = local_e80;
  local_1dc = pCVar7;
  local_1d0 = (CShell *)0xc8;
  local_1a8 = (CShell *)0x0;
  local_1b4 = 0;
  local_1b0 = (int *)0x0;
  local_1ac = (undefined *)0x0;
  local_1bc = 0;
  local_1e0 = 0;
  local_1cc = 0xfffffffe;
  pCVar21 = (CShell *)((int)&local_1a8 + 2);
  ExceptionList = &local_10;
LAB_361b521c:
  local_1c8 = iVar6;
LAB_361b5220:
  while( true ) {
    pCVar21 = pCVar21 + 2;
    *(short *)pCVar21 = (short)local_1c8;
    local_1d8 = pCVar21;
    pCVar14 = local_1d0;
    pCVar16 = pCVar7;
    if (local_1d4 + (int)local_1d0 * 2 + -2 <= pCVar21) {
      local_1c4 = local_1dc;
      local_1b8 = local_1d4;
      iVar6 = ((int)pCVar21 - (int)local_1d4 >> 1) + 1;
      if (9999 < (int)local_1d0) {
        FUN_361b4ae0(s_parser_stack_overflow_36244c34);
        ExceptionList = local_10;
        return 2;
      }
      local_1d0 = (CShell *)((int)local_1d0 * 2);
      if (10000 < (int)local_1d0) {
        local_1d0 = (CShell *)0x2710;
      }
      iVar11 = (int)local_1d0 * -2;
      local_1d4 = local_e80 + iVar11 + -0xc;
      iVar27 = iVar6 * 2;
      *(undefined4 *)(local_e80 + iVar11 + -0x10) = 0x361b5296;
      FUN_361b4f40((int)(local_e80 + iVar11 + -0xc),iVar27);
      *(undefined4 *)(local_e80 + iVar11 + -0x10) = 0x361b52a7;
      local_1dc = (CShell *)&stack0xfffff174;
      iVar6 = iVar6 * 0x10;
      FUN_361b4f40((int)&stack0xfffff174,iVar6);
      pCVar21 = local_e80 + iVar27 + iVar11 + -0xe;
      pCVar16 = local_e80 + iVar6 + -0x1c;
      pCVar14 = local_1d4 + (int)local_1d0 * 2 + -2;
      local_1d8 = pCVar21;
      if (pCVar14 <= pCVar21) {
        ExceptionList = local_10;
        return 1;
      }
    }
    sVar3 = *(short *)(&DAT_362443a0 + local_1c8 * 2);
    local_1d8 = pCVar21;
    if (sVar3 == -0x8000) break;
    if (local_1cc == 0xfffffffe) {
      local_1cc = FUN_361b78d0((int *)&local_1f4);
      pCVar14 = extraout_ECX;
    }
    if ((int)local_1cc < 1) {
      pCVar7 = (CShell *)0x0;
      local_1cc = 0;
    }
    else if (local_1cc < 0x121) {
      pCVar7 = (CShell *)(int)(char)(&DAT_36243c08)[local_1cc];
    }
    else {
      pCVar7 = (CShell *)0x4b;
    }
    pCVar17 = pCVar7 + sVar3;
    if ((((int)pCVar17 < 0) || (0x1c8 < (int)pCVar17)) ||
       (pCVar14 = (CShell *)(int)*(short *)(&DAT_362448a0 + (int)pCVar17 * 2), pCVar14 != pCVar7))
    break;
    iVar6 = (int)*(short *)(&DAT_36244508 + (int)pCVar17 * 2);
    if (iVar6 < 0) {
      if (iVar6 == -0x8000) goto LAB_361b5419;
      local_1c0 = (CShell *)-iVar6;
      pCVar14 = local_1c0;
      goto LAB_361b5369;
    }
    if (iVar6 == 0) goto LAB_361b5419;
    if (iVar6 == 0x9c) {
      ExceptionList = local_10;
      return 0;
    }
    if (local_1cc != 0) {
      local_1cc = 0xfffffffe;
    }
    pCVar7 = pCVar16 + 0x10;
    *(uint *)pCVar7 = local_1f4;
    *(uint *)(pCVar16 + 0x14) = local_1f0;
    *(uint *)(pCVar16 + 0x18) = local_1ec;
    *(uint *)(pCVar16 + 0x1c) = local_1e8;
    if (local_1bc != 0) {
      local_1bc = local_1bc + -1;
    }
    local_1c8 = iVar6;
  }
  local_1c0 = (CShell *)(int)*(short *)(&DAT_36244238 + local_1c8 * 2);
  if (local_1c0 == (CShell *)0x0) {
LAB_361b5419:
    if (local_1bc != 0) {
      if (local_1bc == 3) {
        if (local_1cc == 0) {
          ExceptionList = local_10;
          return 1;
        }
        local_1cc = 0xfffffffe;
      }
      goto LAB_361b5636;
    }
    local_1c0 = (CShell *)(int)*(short *)(&DAT_362443a0 + local_1c8 * 2);
    local_1e0 = local_1e0 + 1;
    if (((int)local_1c0 < -0x7fff) || (0x1c7 < (int)local_1c0)) {
      FUN_361b4ae0(s_parse_error_362450d0);
      goto LAB_361b5636;
    }
    local_1b8 = (CShell *)0x0;
    local_1bc = 0;
    if ((int)local_1c0 < 0) {
      uVar18 = -(int)local_1c0;
      if (uVar18 < 0x4c) goto LAB_361b5465;
    }
    else {
      uVar18 = 0;
LAB_361b5465:
      local_1c4 = (CShell *)(&DAT_362448a0 + (int)(local_1c0 + uVar18) * 2);
      do {
        if ((int)*(short *)local_1c4 == uVar18) {
          pcVar8 = (&PTR_DAT_36243fb8)[uVar18];
          pcVar9 = pcVar8 + 1;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          local_1b8 = (CShell *)(pcVar8 + (int)(local_1b8 + (0xf - (int)pcVar9)));
          local_1bc = local_1bc + 1;
        }
        uVar18 = uVar18 + 1;
        local_1c4 = local_1c4 + 2;
      } while (uVar18 < 0x4c);
    }
    pCVar7 = MEM_MAlloc((uint)(local_1b8 + 0xf));
    local_1b8 = pCVar7;
    if (pCVar7 == (CShell *)0x0) {
      FUN_361b4ae0(s_parse_error__also_virtual_memory_362450a4);
      goto LAB_361b5636;
    }
    *(undefined4 *)pCVar7 = s_parse_error_3624507c._0_4_;
    *(undefined4 *)(pCVar7 + 4) = s_parse_error_3624507c._4_4_;
    *(undefined4 *)(pCVar7 + 8) = s_parse_error_3624507c._8_4_;
    if (local_1bc < 5) {
      local_1bc = 0;
      if ((int)local_1c0 < 0) {
        local_1c4 = (CShell *)-(int)local_1c0;
        if ((CShell *)0x4b < local_1c4) goto LAB_361b55d8;
      }
      else {
        local_1c4 = (CShell *)0x0;
      }
      local_1c0 = (CShell *)(&DAT_362448a0 + (int)(local_1c4 + (int)local_1c0) * 2);
      do {
        if ((CShell *)(int)*(short *)local_1c0 == local_1c4) {
          pcVar9 = s___expecting___36245088;
          pCVar21 = (CShell *)pcVar9;
          if (local_1bc != 0) {
            pcVar9 = &DAT_36245098;
            pCVar21 = (CShell *)pcVar9;
          }
          do {
            CVar2 = (CShell)*pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (CVar2 != (CShell)0x0);
          pCVar14 = pCVar7 + -1;
          do {
            pCVar17 = pCVar14 + 1;
            pCVar14 = pCVar14 + 1;
          } while (*pCVar17 != (CShell)0x0);
          pCVar17 = pCVar21;
          for (uVar18 = (uint)((int)pcVar9 - (int)pCVar21) >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pCVar14 = *(undefined4 *)pCVar17;
            pCVar17 = pCVar17 + 4;
            pCVar14 = pCVar14 + 4;
          }
          for (uVar18 = (int)pcVar9 - (int)pCVar21 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pCVar14 = *pCVar17;
            pCVar17 = pCVar17 + 1;
            pCVar14 = pCVar14 + 1;
          }
          pCVar21 = (CShell *)(&PTR_DAT_36243fb8)[(int)local_1c4];
          pCVar14 = pCVar21;
          do {
            CVar2 = *pCVar14;
            pCVar14 = pCVar14 + 1;
          } while (CVar2 != (CShell)0x0);
          pCVar17 = pCVar7 + -1;
          do {
            pCVar19 = pCVar17 + 1;
            pCVar17 = pCVar17 + 1;
          } while (*pCVar19 != (CShell)0x0);
          pCVar19 = pCVar21;
          for (uVar18 = (uint)((int)pCVar14 - (int)pCVar21) >> 2; uVar18 != 0; uVar18 = uVar18 - 1)
          {
            *(undefined4 *)pCVar17 = *(undefined4 *)pCVar19;
            pCVar19 = pCVar19 + 4;
            pCVar17 = pCVar17 + 4;
          }
          for (uVar18 = (int)pCVar14 - (int)pCVar21 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pCVar17 = *pCVar19;
            pCVar19 = pCVar19 + 1;
            pCVar17 = pCVar17 + 1;
          }
          pCVar21 = pCVar7 + -1;
          do {
            pCVar14 = pCVar21 + 1;
            pCVar21 = pCVar21 + 1;
          } while (*pCVar14 != (CShell)0x0);
          local_1bc = local_1bc + 1;
          *(undefined2 *)pCVar21 = DAT_362450a0;
          pCVar21 = local_1d8;
        }
        local_1c4 = local_1c4 + 1;
        local_1c0 = local_1c0 + 2;
      } while (local_1c4 < (CShell *)0x4c);
    }
LAB_361b55d8:
    FUN_361b4ae0(pCVar7);
    MEM_Free(pCVar7);
LAB_361b5636:
    local_1bc = 3;
    iVar6 = local_1c8;
    do {
      if (((*(short *)(&DAT_362443a0 + iVar6 * 2) != -0x8000) &&
          (iVar6 = *(short *)(&DAT_362443a0 + iVar6 * 2) + 1, -1 < iVar6)) &&
         ((iVar6 < 0x1c9 && (*(short *)(&DAT_362448a0 + iVar6 * 2) == 1)))) {
        iVar6 = (int)*(short *)(&DAT_36244508 + iVar6 * 2);
        if (iVar6 < 0) {
          if (iVar6 != -0x8000) goto code_r0x361b5686;
        }
        else if (iVar6 != 0) {
          if (iVar6 == 0x9c) {
            ExceptionList = local_10;
            return 0;
          }
          pCVar7 = pCVar16 + 0x10;
          *(uint *)pCVar7 = local_1f4;
          *(uint *)(pCVar16 + 0x14) = local_1f0;
          *(uint *)(pCVar16 + 0x18) = local_1ec;
          *(uint *)(pCVar16 + 0x1c) = local_1e8;
          goto LAB_361b521c;
        }
      }
      if (pCVar21 == local_1d4) {
        ExceptionList = local_10;
        return 1;
      }
      iVar6 = (int)*(short *)(pCVar21 + -2);
      pCVar16 = pCVar16 + -0x10;
      pCVar21 = pCVar21 + -2;
      local_1d8 = pCVar21;
    } while( true );
  }
  goto LAB_361b536c;
code_r0x361b5686:
  local_1c0 = (CShell *)-iVar6;
  pCVar14 = local_1d4;
LAB_361b5369:
LAB_361b536c:
  local_1c4 = (CShell *)(int)*(short *)(&DAT_36244190 + (int)local_1c0 * 2);
  if (0 < (int)local_1c4) {
    local_1b4 = *(uint *)(pCVar16 + (int)local_1c4 * -0x10 + 0x10);
    local_1b0 = *(int **)(pCVar16 + (int)local_1c4 * -0x10 + 0x14);
    pCVar14 = *(CShell **)(pCVar16 + (int)local_1c4 * -0x10 + 0x1c);
    local_1ac = *(undefined **)(pCVar16 + (int)local_1c4 * -0x10 + 0x18);
    local_1a8 = pCVar14;
  }
  switch(local_1c0) {
  case (CShell *)0x7:
  case (CShell *)0x12:
  case (CShell *)0x14:
    local_1b4 = 0;
    break;
  case (CShell *)0x8:
    local_1b4 = *(uint *)(pCVar16 + -0x10) | 1;
    break;
  case (CShell *)0x9:
    local_1b4 = *(uint *)(pCVar16 + -0x10) | 2;
    break;
  case (CShell *)0xa:
    local_1b4 = *(uint *)(pCVar16 + -0x10) | 4;
    break;
  case (CShell *)0xb:
    local_1b4 = *(uint *)(pCVar16 + -0x10) | 8;
    break;
  case (CShell *)0xc:
    local_1a8 = (CShell *)&DAT_36244c4a;
    break;
  case (CShell *)0xd:
    goto switchD_361b53b4_caseD_d;
  case (CShell *)0xe:
    local_1b4 = FUN_3603a3b0();
    break;
  case (CShell *)0xf:
    local_1b4 = FUN_3603a390();
    break;
  case (CShell *)0x10:
    local_1b4 = FUN_3603a3d0();
    break;
  case (CShell *)0x11:
    local_1b4 = FUN_3603a370();
    break;
  case (CShell *)0x13:
    piVar26 = *(int **)pCVar16;
    iVar6 = *piVar26 * 0x1c;
    if (((*(int *)(DAT_362bec74 + iVar6) == 2) &&
        (*(int *)(DAT_362bec74 + *(int *)(DAT_362bec74 + iVar6 + 8) * 0x1c) == 5)) &&
       ((*(int *)(DAT_362bec74 + *piVar26 * 0x1c + 0xc) ==
         *(int *)(DAT_362bec74 + *piVar26 * 0x1c + 0x10) &&
        (*(int *)(DAT_362bec74 + *(int *)(DAT_362bec74 + iVar6 + 0xc) * 0x1c) == 5)))) {
      local_1b4 = piVar26[2];
    }
    else {
      CShell::ErrorF(_pShell,(char *)_pShell);
    }
    break;
  case (CShell *)0x15:
    piVar26 = *(int **)pCVar16;
    iVar6 = *piVar26 * 0x1c;
    if ((((*(int *)(DAT_362bec74 + iVar6) == 2) &&
         (*(int *)(DAT_362bec74 + *(int *)(DAT_362bec74 + iVar6 + 8) * 0x1c) == 4)) &&
        (*(int *)(DAT_362bec74 + *piVar26 * 0x1c + 0xc) ==
         *(int *)(DAT_362bec74 + *piVar26 * 0x1c + 0x10))) &&
       (*(int *)(DAT_362bec74 + *(int *)(DAT_362bec74 + iVar6 + 0xc) * 0x1c) == 5)) {
      local_1b4 = piVar26[2];
    }
    else {
      CShell::ErrorF(_pShell,(char *)_pShell);
    }
    break;
  case (CShell *)0x16:
    uVar18 = FUN_3603a480(0);
    local_1b4 = uVar18;
    iVar6 = FUN_3603a370();
    FUN_3603a1f0(uVar18,iVar6);
    break;
  case (CShell *)0x17:
    local_1b4 = *(uint *)pCVar16;
    break;
  case (CShell *)0x18:
    local_1b4 = FUN_3603a480(0);
    FUN_3603a1f0(local_1b4,*(int *)pCVar16);
    break;
  case (CShell *)0x19:
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    FUN_3603a1f0(local_1b4,*(int *)pCVar16);
    break;
  case (CShell *)0x1a:
    FUN_361b5000(*(void **)(pCVar16 + -0x60),(uint)*(void **)(pCVar16 + -0x60),
                 *(int *)(pCVar16 + -0x50),*(int **)(pCVar16 + -0x40),*(int *)(pCVar16 + -0x30),
                 *(int *)(pCVar16 + -0x20));
    FUN_3603a640(*(int *)(pCVar16 + -0x50));
    break;
  case (CShell *)0x1b:
    *(undefined4 *)(DAT_362bec74 + *(int *)(pCVar16 + -0x30) * 0x1c + 8) =
         *(undefined4 *)(pCVar16 + -0x60);
    iVar6 = *(int *)(pCVar16 + -0x30);
    uVar18 = *(uint *)(pCVar16 + -0x70);
    uVar28 = 0;
    piVar26 = *(int **)(pCVar16 + -0x50);
    *(int *)(pCVar16 + -0x60) = iVar6;
    FUN_361b5000(*(int **)(pCVar16 + -0x50),uVar18,iVar6,piVar26,(int)uVar28,
                 (int)((ulonglong)uVar28 >> 0x20));
    FUN_3603a640(*(int *)(pCVar16 + -0x60));
    break;
  case (CShell *)0x1c:
    if (*(int *)(pCVar16 + -0x50) != 5) {
      CShell::ErrorF(_pShell,(char *)_pShell);
    }
    iVar6 = FUN_3603a450(*(undefined4 *)(pCVar16 + -0x80),*(undefined4 *)(pCVar16 + -0x48));
    uVar18 = *(uint *)(pCVar16 + -0x90);
    iVar27 = 0;
    iVar11 = 0;
    piVar26 = *(int **)(pCVar16 + -0x70);
    *(int *)(pCVar16 + -0x80) = iVar6;
    FUN_361b5000(*(int **)(pCVar16 + -0x70),uVar18,iVar6,piVar26,iVar11,iVar27);
    FUN_3603a640(*(int *)(pCVar16 + -0x80));
    break;
  case (CShell *)0x1f:
    iVar6 = *(int *)(pCVar16 + -0x10);
    if (iVar6 != 4) {
      if (iVar6 == 6) {
        CPrintF(&DAT_36244cd0);
      }
      else if (iVar6 == 7) {
        CPrintF(s___s__36244cd4);
      }
      else if (iVar6 == 5) {
        CPrintF(s__d_0x_08X__36244cdc);
      }
      else {
        CShell::ErrorF(pCVar14,(char *)_pShell);
      }
    }
    break;
  case (CShell *)0x20:
    if ((*(byte *)(*(int *)(pCVar16 + -0x2c) + 0x14) & 1) == 0) {
      pcVar4 = *(code **)(*(int *)(pCVar16 + -0x2c) + 0xc);
      if ((pcVar4 == (code *)0x0) || (iVar6 = (*pcVar4)(), iVar6 != 0)) {
        iVar6 = *(int *)(pCVar16 + -0x30);
        if ((iVar6 == 6) && (*(int *)(pCVar16 + -0x10) == 6)) {
          **(undefined4 **)(pCVar16 + -0x28) = *(undefined4 *)(pCVar16 + -0xc);
        }
        else if ((iVar6 == 5) && (*(int *)(pCVar16 + -0x10) == 5)) {
          **(undefined4 **)(pCVar16 + -0x28) = *(undefined4 *)(pCVar16 + -8);
        }
        else if ((iVar6 == 7) && (*(int *)(pCVar16 + -0x10) == 7)) {
          CTString::operator=(*(CTString **)(pCVar16 + -0x28),*(char **)(pCVar16 + -4));
        }
        else if ((iVar6 == 6) && (*(int *)(pCVar16 + -0x10) == 5)) {
          **(float **)(pCVar16 + -0x28) = (float)*(int *)(pCVar16 + -8);
        }
        else {
          CShell::ErrorF((CShell *)0x5,(char *)_pShell);
        }
        if (*(code **)(*(int *)(pCVar16 + -0x2c) + 0x10) != (code *)0x0) {
          (**(code **)(*(int *)(pCVar16 + -0x2c) + 0x10))();
        }
      }
    }
    else {
      CShell::ErrorF(_pShell,(char *)_pShell);
    }
    break;
  case (CShell *)0x21:
    FUN_361b5000(*(void **)(pCVar16 + -0x40),*(uint *)(pCVar16 + -0x50),
                 (int)*(void **)(pCVar16 + -0x40),*(int **)(pCVar16 + -0x30),0,0);
    FUN_3603a640(*(int *)(pCVar16 + -0x40));
    iVar6 = *(int *)(pCVar16 + -0x30);
    if ((*(byte *)(iVar6 + 0x14) & 1) != 0) {
      CShell::ErrorF(*(CShell **)(iVar6 + 4),(char *)_pShell);
    }
    iVar11 = *(int *)(DAT_362bec74 + *(int *)(pCVar16 + -0x40) * 0x1c);
    if (iVar11 == 6) {
      if (*(int *)(pCVar16 + -0x10) == 6) {
        **(undefined4 **)(iVar6 + 8) = *(undefined4 *)(pCVar16 + -0xc);
        break;
      }
      if (*(int *)(pCVar16 + -0x10) == 5) {
        CShell::ErrorF(_pShell,(char *)_pShell);
        **(float **)(iVar6 + 8) = (float)*(int *)(pCVar16 + -8);
        break;
      }
    }
    else if (iVar11 == 5) {
      if (*(int *)(pCVar16 + -0x10) == 5) {
        **(undefined4 **)(iVar6 + 8) = *(undefined4 *)(pCVar16 + -8);
        break;
      }
    }
    else if ((iVar11 == 7) && (*(int *)(pCVar16 + -0x10) == 7)) {
      CTString::operator=(*(CTString **)(iVar6 + 8),*(char **)(pCVar16 + -4));
      break;
    }
    CShell::ErrorF(_pShell,(char *)_pShell);
    break;
  case (CShell *)0x22:
    FUN_36037c10((CTString *)(*(int *)pCVar16 + 4));
    break;
  case (CShell *)0x23:
    FUN_36037c10((CTString *)(*(int *)(pCVar16 + -0x20) + 4));
    break;
  case (CShell *)0x24:
    FUN_36037c10((CTString *)(*(int *)(pCVar16 + -0x20) + 4));
    break;
  case (CShell *)0x25:
    DAT_362a2620 = 0;
    if (*(int *)(pCVar16 + -0x10) == 5) {
      DAT_362a2620 = (uint)(*(int *)(pCVar16 + -8) != 0);
      *(uint *)(pCVar16 + -0x30) = DAT_362a2620;
    }
    else if (*(int *)(pCVar16 + -0x10) == 6) {
      if (*(float *)(pCVar16 + -0xc) == _DAT_3622376c) {
        DAT_362a2620 = 0;
        *(undefined4 *)(pCVar16 + -0x30) = 0;
      }
      else {
        DAT_362a2620 = 1;
        *(undefined4 *)(pCVar16 + -0x30) = 1;
      }
    }
    else {
      CShell::ErrorF((CShell *)0x0,(char *)_pShell);
      *(uint *)(pCVar16 + -0x30) = DAT_362a2620;
    }
    break;
  case (CShell *)0x26:
    DAT_36382bf0 = (uint)(*(int *)(pCVar16 + -0x50) == 0);
    DAT_362a2620 = 1;
    break;
  case (CShell *)0x29:
    DAT_362a2620 = 0;
    if (DAT_36382bf0 == 0) {
      DAT_36382bf0 = 0;
      *(undefined4 *)(pCVar16 + -0x30) = 1;
    }
    else if (*(int *)(pCVar16 + -0x10) == 5) {
      DAT_362a2620 = (uint)(*(int *)(pCVar16 + -8) != 0);
      *(uint *)(pCVar16 + -0x30) = DAT_362a2620;
    }
    else if (*(int *)(pCVar16 + -0x10) == 6) {
      if (*(float *)(pCVar16 + -0xc) == _DAT_3622376c) {
        DAT_362a2620 = 0;
        *(undefined4 *)(pCVar16 + -0x30) = 0;
      }
      else {
        DAT_362a2620 = 1;
        *(undefined4 *)(pCVar16 + -0x30) = 1;
      }
    }
    else {
      CShell::ErrorF(_pShell,(char *)_pShell);
      *(uint *)(pCVar16 + -0x30) = DAT_362a2620;
    }
    break;
  case (CShell *)0x2a:
    DAT_36382bf0 = (uint)(*(int *)(pCVar16 + -0x50) == 0);
  case (CShell *)0x2d:
    DAT_362a2620 = 1;
    break;
  case (CShell *)0x2c:
    DAT_362a2620 = DAT_36382bf0;
    break;
  case (CShell *)0x2e:
    piVar26 = *(int **)pCVar16;
    pCVar7 = DAT_362bec74 + *piVar26 * 0x1c;
    local_1b0 = piVar26;
    iVar6 = FUN_360371d0(piVar26);
    if ((iVar6 == 0) ||
       (((uVar18 = *(uint *)pCVar7, uVar18 != 6 && (uVar18 != 5)) && (uVar18 != 7)))) {
      CShell::ErrorF(_pShell,(char *)_pShell);
      _DAT_362abc98 = 0xc4268000;
      local_1b4 = 4;
      local_1ac = &DAT_362abc98;
    }
    else {
      local_1b4 = uVar18;
      local_1ac = (undefined *)piVar26[2];
    }
    break;
  case (CShell *)0x2f:
    piVar26 = *(int **)(pCVar16 + -0x30);
    pCVar7 = DAT_362bec74 + *piVar26 * 0x1c;
    local_1b0 = piVar26;
    local_1b8 = (CShell *)0x0;
    if (*(int *)(pCVar16 + -0x10) == 5) {
      local_1b8 = *(CShell **)(pCVar16 + -8);
    }
    else {
      CShell::ErrorF(DAT_362bec74,(char *)_pShell);
    }
    if (*(int *)pCVar7 == 3) {
      uVar18 = *(uint *)(DAT_362bec74 + *(int *)(pCVar7 + 8) * 0x1c);
      if ((uVar18 != 6) && (uVar18 != 5)) break;
      if ((-1 < (int)local_1b8) && ((int)local_1b8 < *(int *)(pCVar7 + 4))) {
        local_1b4 = uVar18;
        local_1ac = (undefined *)(piVar26[2] + (int)local_1b8 * 4);
        goto LAB_361b696e;
      }
      CShell::ErrorF(_pShell,(char *)_pShell);
    }
    else {
      CShell::ErrorF(_pShell,(char *)_pShell);
    }
    _DAT_362abc98 = 0xc4268000;
    local_1ac = &DAT_362abc98;
    break;
  case (CShell *)0x30:
    uVar10 = FUN_3603a370();
    uVar18 = FUN_3603a480(uVar10);
    local_1b4 = uVar18;
    iVar6 = FUN_3603a370();
    FUN_3603a1f0(uVar18,iVar6);
    local_1b0 = (int *)0x0;
    break;
  case (CShell *)0x31:
    local_1b4 = *(uint *)pCVar16;
    local_1b0 = *(int **)(pCVar16 + 4);
    break;
  case (CShell *)0x32:
    uVar10 = FUN_3603a370();
    uVar18 = FUN_3603a480(uVar10);
    local_1b4 = uVar18;
    iVar6 = FUN_3603a3f0(*(undefined4 *)pCVar16);
    FUN_3603a1f0(uVar18,iVar6);
    local_1b0 = (int *)FUN_361b4f60((int *)pCVar16);
    break;
  case (CShell *)0x33:
    uVar18 = *(uint *)(pCVar16 + -0x20);
    iVar6 = *(int *)(pCVar16 + -0x1c);
    local_1b4 = uVar18;
    iVar11 = FUN_3603a3f0(*(undefined4 *)pCVar16);
    FUN_3603a1f0(uVar18,iVar11);
    iVar11 = FUN_361b4f60((int *)pCVar16);
    local_1b0 = (int *)(iVar6 + iVar11);
    break;
  case (CShell *)0x34:
    local_1b4 = 6;
    local_1b0 = *(int **)(pCVar16 + 4);
    break;
  case (CShell *)0x35:
    local_1b4 = 5;
    local_1ac = *(undefined **)(pCVar16 + 8);
    break;
  case (CShell *)0x36:
    local_1b4 = 7;
    goto switchD_361b53b4_caseD_d;
  case (CShell *)0x37:
    local_1b4 = *(uint *)pCVar16;
    if (local_1b4 == 4) break;
    if (local_1b4 == 6) {
      local_1b0 = (int *)**(float **)(pCVar16 + 8);
      break;
    }
    if (local_1b4 != 5) {
      if (local_1b4 == 7) {
        local_1a8 = (CShell *)**(undefined4 **)(pCVar16 + 8);
      }
      else {
        local_1b4 = 6;
        local_1b0 = (int *)0xc4268000;
        CShell::ErrorF(*(CShell **)(*(int *)(pCVar16 + 4) + 4),(char *)_pShell);
      }
      break;
    }
    local_1ac = (undefined *)**(undefined4 **)(pCVar16 + 8);
    goto LAB_361b696e;
  case (CShell *)0x38:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    pCVar7 = extraout_ECX_00;
    if (local_1b4 != 5) {
LAB_361b607e:
      CShell::ErrorF(pCVar7,(char *)_pShell);
      local_1b4 = 5;
      local_1ac = (undefined *)0xfffffd66;
      break;
    }
    local_1ac = (undefined *)
                (*(int *)(pCVar16 + -0x18) << ((byte)*(undefined4 *)(pCVar16 + 8) & 0x1f));
    goto LAB_361b696e;
  case (CShell *)0x39:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    pCVar7 = _pShell;
    if (local_1b4 != 5) goto LAB_361b607e;
    local_1ac = (undefined *)
                (*(int *)(pCVar16 + -0x18) >> ((byte)*(undefined4 *)(pCVar16 + 8) & 0x1f));
    goto LAB_361b696e;
  case (CShell *)0x3a:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      CShell::ErrorF(this,(char *)_pShell);
      break;
    }
    if (local_1b4 != 5) goto LAB_361b656e;
    local_1ac = (undefined *)(*(uint *)(pCVar16 + -0x18) & *(uint *)(pCVar16 + 8));
    goto LAB_361b696e;
  case (CShell *)0x3b:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      CShell::ErrorF(this_00,(char *)_pShell);
      break;
    }
    if (local_1b4 != 5) goto LAB_361b656e;
    local_1ac = (undefined *)(*(uint *)(pCVar16 + -0x18) | *(uint *)(pCVar16 + 8));
    goto LAB_361b696e;
  case (CShell *)0x3c:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      CShell::ErrorF(_pShell,(char *)_pShell);
      break;
    }
    if (local_1b4 != 5) goto LAB_361b656e;
    local_1ac = (undefined *)(*(uint *)(pCVar16 + -0x18) ^ *(uint *)(pCVar16 + 8));
    goto LAB_361b696e;
  case (CShell *)0x3d:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      CShell::ErrorF(this_01,(char *)_pShell);
      break;
    }
    if (local_1b4 == 5) {
      if ((*(int *)(pCVar16 + -0x18) == 0) || (*(int *)(pCVar16 + 8) == 0)) {
LAB_361b63d4:
        local_1ac = (undefined *)0x0;
        break;
      }
LAB_361b61c5:
      local_1ac = (undefined *)0x1;
      break;
    }
    goto LAB_361b656e;
  case (CShell *)0x3e:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      CShell::ErrorF(this_02,(char *)_pShell);
      break;
    }
    if (local_1b4 == 5) {
      if ((*(int *)(pCVar16 + -0x18) == 0) && (*(int *)(pCVar16 + 8) == 0)) {
        local_1ac = (undefined *)0x0;
        break;
      }
      goto LAB_361b61c5;
    }
    goto LAB_361b656e;
  case (CShell *)0x3f:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      local_1b0 = (int *)(*(float *)(pCVar16 + -0x1c) + *(float *)(pCVar16 + 4));
      break;
    }
    if (local_1b4 != 5) {
      if (local_1b4 == 7) {
        pCVar13 = (CTString *)FUN_361b6cb0(&DAT_362bec18);
        CTString::CTString((CTString *)&local_1e4,*(char **)(pCVar16 + 0xc));
        local_8 = 0;
        pCVar12 = (CTString *)CTString::CTString((CTString *)&local_200,*(char **)(pCVar16 + -0x14))
        ;
        local_8._0_1_ = 1;
        pCVar12 = (CTString *)CTString::operator+(pCVar12,(CTString *)&local_1fc);
        local_8._0_1_ = 2;
        CTString::operator=(pCVar13,pCVar12);
        local_8._0_1_ = 1;
        StringFree(local_1fc);
        local_8 = (uint)local_8._1_3_ << 8;
        StringFree(local_200);
        local_8 = 0xffffffff;
        StringFree(local_1e4);
        local_1a8 = *(CShell **)pCVar13;
        break;
      }
      goto LAB_361b656e;
    }
    local_1ac = (undefined *)(*(int *)(pCVar16 + -0x18) + *(int *)(pCVar16 + 8));
    goto LAB_361b696e;
  case (CShell *)0x40:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      local_1b0 = (int *)(*(float *)(pCVar16 + -0x1c) - *(float *)(pCVar16 + 4));
      break;
    }
    if (local_1b4 != 5) goto LAB_361b656e;
    local_1ac = (undefined *)(*(int *)(pCVar16 + -0x18) - *(int *)(pCVar16 + 8));
    goto LAB_361b696e;
  case (CShell *)0x41:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      local_1b0 = (int *)(*(float *)(pCVar16 + -0x1c) * *(float *)(pCVar16 + 4));
      break;
    }
    if (local_1b4 != 5) goto LAB_361b656e;
    local_1ac = (undefined *)(*(int *)(pCVar16 + -0x18) * *(int *)(pCVar16 + 8));
    goto LAB_361b696e;
  case (CShell *)0x42:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      local_1b0 = (int *)(*(float *)(pCVar16 + -0x1c) / *(float *)(pCVar16 + 4));
      break;
    }
    if (local_1b4 != 5) goto LAB_361b656e;
    if (*(int *)(pCVar16 + 8) == 0) {
      CShell::ErrorF(_pShell,(char *)_pShell);
      goto LAB_361b63d4;
    }
    local_1ac = (undefined *)(*(int *)(pCVar16 + -0x18) / *(int *)(pCVar16 + 8));
    goto LAB_361b696e;
  case (CShell *)0x43:
    FUN_361b4b00((int *)(pCVar16 + -0x20),pCVar16);
    local_1b4 = *(uint *)(pCVar16 + -0x20);
    if (local_1b4 == 6) {
      CShell::ErrorF(this_03,(char *)_pShell);
      break;
    }
    if (local_1b4 == 5) {
      local_1ac = (undefined *)(*(int *)(pCVar16 + -0x18) % *(int *)(pCVar16 + 8));
      break;
    }
    goto LAB_361b656e;
  case (CShell *)0x44:
    FUN_361b4b50(&local_1b4,(int *)(pCVar16 + -0x20),pCVar16,0x3c);
    break;
  case (CShell *)0x45:
    FUN_361b4b50(&local_1b4,(int *)(pCVar16 + -0x20),pCVar16,0x3e);
    break;
  case (CShell *)0x46:
    uVar10 = 0x3d;
    goto LAB_361b64ae;
  case (CShell *)0x47:
    FUN_361b4b50(&local_1b4,(int *)(pCVar16 + -0x20),pCVar16,0x21);
    break;
  case (CShell *)0x48:
    FUN_361b4b50(&local_1b4,(int *)(pCVar16 + -0x20),pCVar16,0x7d);
    break;
  case (CShell *)0x49:
    uVar10 = 0x7b;
LAB_361b64ae:
    FUN_361b4b50(&local_1b4,(int *)(pCVar16 + -0x20),pCVar16,uVar10);
    break;
  case (CShell *)0x4a:
    local_1b4 = *(uint *)pCVar16;
    if (local_1b4 == 6) {
      local_1b0 = (int *)-*(float *)(pCVar16 + 4);
      break;
    }
    if (local_1b4 != 5) goto LAB_361b656e;
    local_1ac = (undefined *)-*(int *)(pCVar16 + 8);
    goto LAB_361b696e;
  case (CShell *)0x4b:
    local_1b4 = *(uint *)pCVar16;
    if (local_1b4 == 6) {
      local_1b0 = *(int **)(pCVar16 + 4);
      break;
    }
    if (local_1b4 == 5) {
      local_1ac = *(undefined **)(pCVar16 + 8);
      break;
    }
    goto LAB_361b656e;
  case (CShell *)0x4c:
    local_1b4 = *(uint *)pCVar16;
    if (local_1b4 == 6) {
      CShell::ErrorF(pCVar14,(char *)_pShell);
      local_1b0 = *(int **)(pCVar16 + 4);
      break;
    }
    if (local_1b4 == 5) {
      local_1ac = (undefined *)(uint)(*(int *)(pCVar16 + 8) == 0);
      break;
    }
LAB_361b656e:
    local_1b4 = 6;
    local_1b0 = (int *)0xc4268000;
    break;
  case (CShell *)0x4d:
    iVar6 = *(int *)pCVar16;
    local_1b4 = 6;
    if (iVar6 == 6) {
      local_1b0 = *(int **)(pCVar16 + 4);
      break;
    }
    if (iVar6 == 5) {
      local_1b0 = (int *)(float)*(int *)(pCVar16 + 8);
      break;
    }
    if (iVar6 == 7) {
      dVar25 = atof(*(char **)(pCVar16 + 0xc));
      local_1b0 = (int *)(float)dVar25;
      break;
    }
LAB_361b662a:
    CShell::ErrorF(_pShell,(char *)_pShell);
    local_1b4 = 4;
    break;
  case (CShell *)0x4e:
    iVar6 = *(int *)pCVar16;
    local_1b4 = 5;
    if (iVar6 == 6) {
      uVar24 = FUN_361bfd6c();
      local_1ac = (undefined *)uVar24;
    }
    else {
      if (iVar6 == 5) {
        local_1ac = *(undefined **)(pCVar16 + 8);
        break;
      }
      if (iVar6 != 7) goto LAB_361b662a;
      local_1ac = (undefined *)atol(*(char **)(pCVar16 + 0xc));
    }
    goto LAB_361b696e;
  case (CShell *)0x4f:
    pCVar13 = (CTString *)FUN_361b6cb0(&DAT_362bec18);
    iVar6 = *(int *)pCVar16;
    local_1b4 = 7;
    if (iVar6 == 6) {
      CTString::PrintF(this_04,(char *)pCVar13);
      local_1a8 = *(CShell **)pCVar13;
    }
    else if (iVar6 == 5) {
      CTString::PrintF(this_04,(char *)pCVar13);
      local_1a8 = *(CShell **)pCVar13;
    }
    else if (iVar6 == 7) {
      CTString::operator=(pCVar13,*(char **)(pCVar16 + 0xc));
      local_1a8 = *(CShell **)pCVar13;
    }
    else {
      CShell::ErrorF(_pShell,(char *)_pShell);
      local_1b4 = 4;
      local_1a8 = *(CShell **)pCVar13;
    }
    break;
  case (CShell *)0x50:
    iVar6 = FUN_360371d0(*(int **)(pCVar16 + -0x30));
    if (iVar6 == 0) {
      pCVar7 = *(CShell **)(*(int *)(pCVar16 + -0x30) + 4);
LAB_361b6927:
      CShell::ErrorF(pCVar7,(char *)_pShell);
    }
    else {
      iVar6 = **(int **)(pCVar16 + -0x30) * 0x1c;
      if (*(int *)(DAT_362bec74 + iVar6) != 2) {
        pCVar7 = (CShell *)(*(int **)(pCVar16 + -0x30))[1];
        local_1b4 = 4;
        goto LAB_361b6927;
      }
      pCVar7 = DAT_362bec74 + *(int *)(DAT_362bec74 + iVar6 + 8) * 0x1c;
      *(undefined4 *)
       (DAT_362bec74 + *(int *)(DAT_362bec74 + *(int *)(pCVar16 + -0x10) * 0x1c + 8) * 0x1c) =
           *(undefined4 *)(DAT_362bec74 + *(int *)(DAT_362bec74 + iVar6 + 8) * 0x1c);
      iVar6 = FUN_3603a240(*(int *)(pCVar16 + -0x10),**(int **)(pCVar16 + -0x30));
      if (iVar6 == 0) {
        pCVar7 = *(CShell **)(pCVar16 + -0x30);
        local_1b4 = 4;
        goto LAB_361b6927;
      }
      local_1b4 = *(uint *)pCVar7;
      if (local_1b4 == 4) {
        uVar18 = *(uint *)(pCVar16 + -0xc);
        puVar20 = (undefined4 *)(&DAT_363827f0 + (DAT_36382bf4 - uVar18));
        puVar22 = (undefined4 *)&stack0xfffff174;
        for (uVar15 = uVar18 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar22 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar22 = puVar22 + 1;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar22 = *(undefined1 *)puVar20;
          puVar20 = (undefined4 *)((int)puVar20 + 1);
          puVar22 = (undefined4 *)((int)puVar22 + 1);
        }
        (**(code **)(*(int *)(pCVar16 + -0x30) + 8))();
      }
      else if (local_1b4 == 5) {
        uVar18 = *(uint *)(pCVar16 + -0xc);
        puVar20 = (undefined4 *)(&DAT_363827f0 + (DAT_36382bf4 - uVar18));
        puVar22 = (undefined4 *)&stack0xfffff174;
        for (uVar15 = uVar18 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar22 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar22 = puVar22 + 1;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar22 = *(undefined1 *)puVar20;
          puVar20 = (undefined4 *)((int)puVar20 + 1);
          puVar22 = (undefined4 *)((int)puVar22 + 1);
        }
        local_1ac = (undefined *)(**(code **)(*(int *)(pCVar16 + -0x30) + 8))();
      }
      else if (local_1b4 == 6) {
        uVar18 = *(uint *)(pCVar16 + -0xc);
        puVar20 = (undefined4 *)(&DAT_363827f0 + (DAT_36382bf4 - uVar18));
        puVar22 = (undefined4 *)&stack0xfffff174;
        for (uVar15 = uVar18 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar22 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar22 = puVar22 + 1;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar22 = *(undefined1 *)puVar20;
          puVar20 = (undefined4 *)((int)puVar20 + 1);
          puVar22 = (undefined4 *)((int)puVar22 + 1);
        }
        fVar23 = (float10)(**(code **)(*(int *)(pCVar16 + -0x30) + 8))();
        local_1b0 = (int *)(float)fVar23;
      }
      else if (local_1b4 == 7) {
        local_1b8 = (CShell *)FUN_361b6cb0(&DAT_362bec18);
        uVar18 = *(uint *)(pCVar16 + -0xc);
        puVar20 = (undefined4 *)(&DAT_363827f0 + (DAT_36382bf4 - uVar18));
        puVar22 = (undefined4 *)&stack0xfffff174;
        for (uVar15 = uVar18 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar22 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar22 = puVar22 + 1;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar22 = *(undefined1 *)puVar20;
          puVar20 = (undefined4 *)((int)puVar20 + 1);
          puVar22 = (undefined4 *)((int)puVar22 + 1);
        }
        pCVar13 = (CTString *)(**(code **)(*(int *)(pCVar16 + -0x30) + 8))();
        pCVar7 = local_1b8;
        local_8 = 3;
        CTString::operator=((CTString *)local_1b8,pCVar13);
        local_8 = 0xffffffff;
        StringFree(local_1f8);
        local_1a8 = *(CShell **)pCVar7;
      }
      else {
        local_1b4 = 6;
        local_1b0 = (int *)0xc4268000;
      }
    }
    DAT_36382bf4 = DAT_36382bf4 - *(int *)(pCVar16 + -0xc);
    FUN_3603a640(*(int *)(pCVar16 + -0x10));
    break;
  case (CShell *)0x51:
    local_1b4 = *(uint *)(pCVar16 + -0x10);
    local_1ac = *(undefined **)(pCVar16 + -8);
    local_1b0 = *(int **)(pCVar16 + -0xc);
    local_1a8 = *(CShell **)(pCVar16 + -4);
LAB_361b696e:
  }
switchD_361b53b4_caseD_1d:
  piVar26 = local_1b0;
  pCVar21 = local_1d8 + (int)local_1c4 * -2;
  pCVar7 = pCVar16 + (int)local_1c4 * -0x10 + 0x10;
  *(uint *)pCVar7 = local_1b4;
  puVar5 = local_1ac;
  *(int **)(pCVar7 + 4) = piVar26;
  pCVar16 = local_1a8;
  *(undefined **)(pCVar7 + 8) = puVar5;
  *(CShell **)(pCVar7 + 0xc) = pCVar16;
  iVar6 = (int)*(short *)(&DAT_36244472 + *(short *)(&DAT_362440e8 + (int)local_1c0 * 2) * 2) +
          (int)*(short *)pCVar21;
  if (((iVar6 < 0) || (0x1c8 < iVar6)) ||
     (*(short *)(&DAT_362448a0 + iVar6 * 2) != *(short *)pCVar21)) {
    local_1c8 = (int)*(short *)(&DAT_3624430a + *(short *)(&DAT_362440e8 + (int)local_1c0 * 2) * 2);
  }
  else {
    local_1c8 = (int)*(short *)(&DAT_36244508 + iVar6 * 2);
  }
  goto LAB_361b5220;
switchD_361b53b4_caseD_d:
  local_1a8 = *(CShell **)(pCVar16 + 0xc);
  goto switchD_361b53b4_caseD_1d;
}

