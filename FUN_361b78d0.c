
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_361b78d0(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  CShellSymbol *pCVar9;
  undefined3 extraout_var;
  uint uVar10;
  CShell *pCVar11;
  CShell *extraout_ECX;
  CShell *extraout_ECX_00;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  double dVar18;
  undefined4 uVar19;
  char *local_140;
  undefined4 local_13c;
  char *local_138;
  char *local_134;
  char *local_130;
  char *local_12c;
  char *local_128;
  char *local_124;
  char *local_120;
  undefined4 local_11c;
  byte local_118 [256];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621c213;
  local_10 = ExceptionList;
  local_18 = DAT_362abd90;
  local_14 = &stack0xfffffeb0;
  ExceptionList = &local_10;
  puVar1 = &stack0xfffffeb0;
  if (DAT_362abd28 != 0) {
    DAT_362abd28 = 0;
    if (DAT_36382d18 == 0) {
      DAT_36382d18 = 1;
    }
    if (DAT_36382d28 == (code *)0x0) {
      DAT_36382d28 = _iob_exref;
    }
    if (DAT_36382d2c == (code *)0x0) {
      DAT_36382d2c = _iob_exref + 0x20;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xfffffeb0;
    if (DAT_36382d10 == (CShell *)0x0) {
      ExceptionList = &local_10;
      DAT_36382d10 = (CShell *)FUN_361b75e0(DAT_36382d28,0x4000);
      puVar1 = local_14;
    }
    local_14 = puVar1;
    FUN_361b72d0();
    puVar1 = local_14;
  }
switchD_361b7a89_caseD_2:
  local_14 = puVar1;
  uVar15 = DAT_36382d18;
  *DAT_36382d14 = DAT_36382d0c;
  local_11c = DAT_36382d14;
  pbVar17 = DAT_36382d14;
LAB_361b7990:
  do {
    bVar12 = (&DAT_36245268)[(uint)*pbVar17 * 4];
    iVar3 = uVar15 * 2;
    if (*(short *)(&DAT_36245118 + iVar3) != 0) {
      DAT_36382cf8 = pbVar17;
      DAT_36382cfc = uVar15;
    }
    uVar10 = (uint)bVar12;
    if ((int)*(short *)(&DAT_36245d50 + ((int)*(short *)(&DAT_36245770 + iVar3) + uVar10) * 2) !=
        uVar15) {
      do {
        uVar15 = (uint)*(short *)(&DAT_362458d8 + iVar3);
        if (0xa4 < (int)uVar15) {
          bVar12 = (&DAT_36245668)[uVar10 * 4];
        }
        iVar3 = uVar15 * 2;
        uVar10 = (uint)bVar12;
      } while ((int)*(short *)(&DAT_36245d50 + ((int)*(short *)(&DAT_36245770 + iVar3) + uVar10) * 2
                              ) != uVar15);
    }
    uVar15 = (uint)*(short *)(&DAT_36245a40 +
                             ((int)*(short *)(&DAT_36245770 + uVar15 * 2) + (uint)bVar12) * 2);
    pbVar17 = pbVar17 + 1;
    pCVar11 = DAT_36382d10;
    uVar10 = uVar15;
  } while (*(short *)(&DAT_36245770 + uVar15 * 2) != 0x144);
LAB_361b7a30:
  iVar3 = (int)*(short *)(&DAT_36245118 + uVar10 * 2);
  if (iVar3 == 0) {
    iVar3 = (int)*(short *)(&DAT_36245118 + DAT_36382cfc * 2);
    pbVar17 = DAT_36382cf8;
  }
  DAT_36382d04 = (int)pbVar17 - (int)local_11c;
  DAT_36382cf4 = local_11c;
  DAT_36382d0c = *pbVar17;
  *pbVar17 = 0;
  DAT_36382d14 = pbVar17;
LAB_361b7a80:
  uVar10 = DAT_36382cfc;
  pbVar13 = DAT_36382cf4;
  puVar1 = local_14;
  switch(iVar3) {
  case 0:
    goto switchD_361b7a89_caseD_0;
  case 1:
    DAT_36382d18 = 7;
  case 2:
  case 0x2a:
  case 0x2d:
  case 0x2f:
    break;
  case 3:
    iVar3 = FUN_360371a0();
    if (0x3f < iVar3) {
      CShell::ErrorF(_pShell,(char *)_pShell,s_Script_files_nested_too_deeply_36246060);
    }
    pbVar17 = DAT_36382cf4;
    do {
      bVar12 = *pbVar17;
      pbVar17[(int)(local_118 + -(int)DAT_36382cf4)] = bVar12;
      pbVar17 = pbVar17 + 1;
    } while (bVar12 != 0);
    pbVar17 = local_118;
    do {
      pbVar13 = pbVar17;
      pbVar17 = pbVar13 + 1;
    } while (*pbVar13 != 0);
    pbVar13[-1] = 0;
    local_128 = StringDuplicate(&DAT_36222fa0);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    pcVar8 = StringDuplicate((char *)local_118);
    local_8._0_1_ = 2;
    local_11c = (byte *)pcVar8;
    local_140 = StringDuplicate(pcVar8);
    local_13c = 0;
    local_8._0_1_ = 3;
    CTString::Load_t((CTString *)&local_128,(CTFileName *)&local_140);
    local_8._0_1_ = 2;
    StringFree(local_140);
    local_8 = CONCAT31(local_8._1_3_,1);
    StringFree(pcVar8);
    FUN_36037080((char *)local_118,local_128,0);
    DAT_36382d18 = 1;
    local_8 = 0xffffffff;
    StringFree(local_128);
    puVar1 = local_14;
    break;
  case 4:
    CShell::ErrorF(pCVar11,(char *)_pShell,s_Wrong_syntax_for_include_stateme_362460a4);
  case 0x2c:
    DAT_36382d18 = 1;
    puVar1 = local_14;
    break;
  case 5:
    DAT_362abd2c = DAT_362abd2c + 1;
    local_120 = StringDuplicate((char *)DAT_36382cf4);
    local_8 = 5;
    FUN_361b70f0(&local_120);
    CTString::CTString(DAT_362abd2c,(long)&local_124,(char *)0x1,&DAT_362460c8,DAT_362abd2c);
    local_8 = CONCAT31(local_8._1_3_,6);
    lVar4 = CTString::FindSubstr((CTString *)&local_120,(CTString *)&local_124);
    if (lVar4 == -1) {
      iVar16 = 0;
      iVar3 = CTString::ReplaceSubstr
                        ((CTString *)&DAT_36382d30,(CTString *)&local_124,(CTString *)&local_120);
      pCVar11 = extraout_ECX;
      if (iVar3 != 0) goto LAB_361b7ca0;
      goto LAB_361b7cc1;
    }
    pcVar8 = s_Parameter_substitution_recursion_362460d0;
    pCVar11 = _pShell;
    goto LAB_361b7cdf;
  case 6:
    uVar19 = 0;
    pcVar8 = DAT_36382d30;
    pcVar5 = (char *)FUN_36037180();
    FUN_36037080(pcVar5,pcVar8,uVar19);
    DAT_36382d18 = 1;
    puVar1 = local_14;
    break;
  case 7:
    ExceptionList = local_10;
    return 0x108;
  case 8:
    ExceptionList = local_10;
    return 0x107;
  case 9:
    ExceptionList = local_10;
    return 0x109;
  case 10:
    ExceptionList = local_10;
    return 0x10a;
  case 0xb:
    ExceptionList = local_10;
    return 0x10b;
  case 0xc:
    ExceptionList = local_10;
    return 0x10c;
  case 0xd:
    ExceptionList = local_10;
    return 0x10d;
  case 0xe:
    ExceptionList = local_10;
    return 0x10e;
  case 0xf:
    ExceptionList = local_10;
    return 0x10f;
  case 0x10:
    ExceptionList = local_10;
    return 0x110;
  case 0x11:
    ExceptionList = local_10;
    return 0x111;
  case 0x12:
    ExceptionList = local_10;
    return 0x112;
  case 0x13:
    ExceptionList = local_10;
    return 0x113;
  case 0x14:
    ExceptionList = local_10;
    return 0x114;
  case 0x15:
    ExceptionList = local_10;
    return 0x11a;
  case 0x16:
    ExceptionList = local_10;
    return 0x119;
  case 0x17:
    ExceptionList = local_10;
    return 0x117;
  case 0x18:
    ExceptionList = local_10;
    return 0x118;
  case 0x19:
    ExceptionList = local_10;
    return 0x116;
  case 0x1a:
    ExceptionList = local_10;
    return 0x115;
  case 0x1b:
    ExceptionList = local_10;
    return 0x11b;
  case 0x1c:
    ExceptionList = local_10;
    return 0x11c;
  case 0x1d:
    ExceptionList = local_10;
    return (int)(char)*DAT_36382cf4;
  case 0x1e:
    iVar3 = atoi((char *)DAT_36382cf4);
    param_1[2] = iVar3;
    ExceptionList = local_10;
    return 0x103;
  case 0x1f:
    uVar6 = strtoul((char *)(DAT_36382cf4 + 2),(char **)0x0,0x10);
    param_1[2] = uVar6;
    ExceptionList = local_10;
    return 0x103;
  case 0x20:
    dVar18 = atof((char *)DAT_36382cf4);
    param_1[1] = (int)(float)dVar18;
    ExceptionList = local_10;
    return 0x102;
  case 0x21:
    dVar18 = atof((char *)DAT_36382cf4);
    param_1[1] = (int)(float)dVar18;
    ExceptionList = local_10;
    return 0x102;
  case 0x22:
    iVar3 = FUN_36021480(0x362bec18);
    if (iVar3 - DAT_362bec2c < 1) {
      FUN_360219e0(&DAT_362bec18,DAT_362bec30);
      pbVar13 = DAT_36382cf4;
    }
    iVar3 = DAT_362bec2c;
    DAT_362bec2c = DAT_362bec2c + 1;
    piVar7 = (int *)FUN_36021470(&DAT_362bec18,iVar3);
    pcVar8 = StringDuplicate((char *)pbVar13);
    StringFree((char *)*piVar7);
    *piVar7 = (int)pcVar8;
    FUN_361b70f0(piVar7);
    param_1[3] = *piVar7;
    ExceptionList = local_10;
    return 0x104;
  case 0x23:
    ExceptionList = local_10;
    return 0x105;
  case 0x24:
    local_130 = StringDuplicate((char *)DAT_36382cf4);
    local_8 = 7;
    pCVar9 = CShell::GetSymbol(_pShell,(CTString *)&local_130,0);
    *param_1 = (int)pCVar9;
    local_8 = 0xffffffff;
    StringFree(local_130);
    piVar7 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)*param_1);
    if (*piVar7 == 7) {
      local_12c = StringDuplicate((char *)**(undefined4 **)(*param_1 + 8));
      local_8 = 8;
      local_138 = StringDuplicate(s__command_36246128);
      local_8._0_1_ = 9;
      iVar3 = CTString::RemovePrefix((CTString *)&local_12c,(CTString *)&local_138);
      local_8 = CONCAT31(local_8._1_3_,8);
      StringFree(local_138);
      if (iVar3 != 0) {
        pcVar8 = StringDuplicate(local_12c);
        StringFree(DAT_36382d30);
        DAT_362abd2c = (CTString *)0x0;
        DAT_36382d24 = 0;
        DAT_36382d18 = 9;
        DAT_36382d30 = pcVar8;
      }
      local_8 = 0xffffffff;
      StringFree(local_12c);
      puVar1 = local_14;
      if (iVar3 != 0) break;
    }
    ExceptionList = local_10;
    return 0x106;
  case 0x25:
    local_134 = StringDuplicate((char *)(DAT_36382cf4 + 1));
    local_8 = 10;
    pCVar9 = CShell::GetSymbol(_pShell,(CTString *)&local_134,0);
    *param_1 = (int)pCVar9;
    local_8 = 0xffffffff;
    StringFree(local_134);
    ExceptionList = local_10;
    return 0x106;
  case 0x26:
    if (DAT_362a2620 == 0) {
      DAT_36382d20 = DAT_36382d20 + 1;
      DAT_36382d18 = 5;
    }
    DAT_36382d1c = DAT_36382d1c + 1;
    ExceptionList = local_10;
    return 0x11d;
  case 0x27:
    DAT_36382d1c = DAT_36382d1c + -1;
    if (-1 < DAT_36382d1c) {
      ExceptionList = local_10;
      return 0x11e;
    }
    CShell::ErrorF(pCVar11,(char *)_pShell,s_Mismatched_____36246134);
    ExceptionList = local_10;
    return 0x11e;
  case 0x28:
    DAT_36382d1c = DAT_36382d1c + 1;
    DAT_36382d20 = DAT_36382d20 + 1;
    break;
  case 0x29:
    DAT_36382d1c = DAT_36382d1c + -1;
    DAT_36382d20 = DAT_36382d20 + -1;
    if (DAT_36382d20 == 0) {
      DAT_36382d18 = 1;
      ExceptionList = local_10;
      return 0x11e;
    }
    break;
  case 0x2b:
    DAT_36382d18 = 3;
    break;
  case 0x2e:
  case 0x30:
    FUN_360371c0();
    puVar1 = local_14;
    break;
  case 0x31:
    CShell::ErrorF(_pShell,(char *)_pShell,s_Unrecognized_character___c___ASC_36246144,
                   (int)(char)*DAT_36382cf4,(int)(char)*DAT_36382cf4);
    puVar1 = local_14;
    break;
  case 0x32:
    fwrite(DAT_36382cf4,DAT_36382d04,1,(FILE *)DAT_36382d2c);
    puVar1 = local_14;
    break;
  case 0x33:
    *pbVar17 = DAT_36382d0c;
    if (*(int *)(pCVar11 + 0x24) == 0) {
      DAT_36382d08 = *(int *)(pCVar11 + 0x10);
      *(code **)pCVar11 = DAT_36382d28;
      *(undefined4 *)(pCVar11 + 0x24) = 1;
    }
    if ((byte *)(*(int *)(pCVar11 + 4) + DAT_36382d08) < DAT_36382d14) {
      cVar2 = FUN_361b76b0();
      pbVar14 = DAT_36382cf4;
      iVar3 = CONCAT31(extraout_var,cVar2);
      if (iVar3 == 0) {
        pbVar17 = DAT_36382cf4 + (int)(pbVar17 + (-1 - (int)pbVar13));
        DAT_36382d14 = pbVar17;
        uVar15 = FUN_361b7160();
        local_11c = pbVar14;
        goto LAB_361b7990;
      }
      if (iVar3 == 1) {
        _DAT_36382d00 = 0;
        iVar3 = FUN_361b70e0();
        if (iVar3 != 0) goto code_r0x361b8255;
        FUN_361b7670(DAT_36382d28);
        puVar1 = local_14;
        break;
      }
      puVar1 = local_14;
      if (iVar3 != 2) break;
      pbVar17 = (byte *)(*(int *)(DAT_36382d10 + 4) + DAT_36382d08);
      DAT_36382d14 = pbVar17;
      uVar10 = FUN_361b7160();
      local_11c = DAT_36382cf4;
      pCVar11 = DAT_36382d10;
      goto LAB_361b7a30;
    }
    pbVar14 = DAT_36382cf4;
    pbVar17 = DAT_36382cf4 + (int)(pbVar17 + (-1 - (int)pbVar13));
    DAT_36382d14 = pbVar17;
    uVar10 = FUN_361b7160();
    uVar15 = FUN_361b7230();
    pCVar11 = DAT_36382d10;
    local_11c = pbVar14;
    if (uVar15 == 0) goto LAB_361b7a30;
    pbVar17 = pbVar17 + 1;
    goto LAB_361b7990;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    iVar3 = FUN_36037100();
    puVar1 = local_14;
    if (iVar3 != 0) {
      ExceptionList = local_10;
      return 0;
    }
    break;
  default:
    FUN_361b7340();
    puVar1 = local_14;
  }
  goto switchD_361b7a89_caseD_2;
code_r0x361b8255:
  DAT_36382d14 = DAT_36382cf4;
  iVar3 = (int)(DAT_36382d18 - 1) / 2 + 0x34;
  pCVar11 = DAT_36382d10;
  goto LAB_361b7a80;
LAB_361b7ca0:
  do {
    iVar16 = iVar16 + 1;
    iVar3 = CTString::ReplaceSubstr
                      ((CTString *)&DAT_36382d30,(CTString *)&local_124,(CTString *)&local_120);
  } while (iVar3 != 0);
  pCVar11 = extraout_ECX_00;
  if (iVar16 == 0) {
LAB_361b7cc1:
    if (DAT_36382d24 == 0) {
      pcVar8 = s_Too_many_parameters_for_command_e_362460fc;
      DAT_36382d24 = 1;
LAB_361b7cdf:
      CShell::ErrorF(pCVar11,(char *)_pShell,pcVar8);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  StringFree(local_124);
  local_8 = 0xffffffff;
  StringFree(local_120);
  puVar1 = local_14;
  goto switchD_361b7a89_caseD_2;
switchD_361b7a89_caseD_0:
  *pbVar17 = DAT_36382d0c;
  pbVar17 = DAT_36382cf8;
  goto LAB_361b7a30;
}

