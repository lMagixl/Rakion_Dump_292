
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_361b9970(void)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined3 extraout_var;
  uint uVar9;
  byte *extraout_ECX;
  char *extraout_ECX_00;
  undefined4 *puVar10;
  byte bVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  double dVar15;
  char *local_128;
  undefined4 local_124;
  char *local_120;
  undefined4 local_11c;
  byte local_118 [256];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621c2e1;
  local_10 = ExceptionList;
  local_18 = DAT_362abd90;
  local_14 = &stack0xfffffec8;
  ExceptionList = &local_10;
  puVar3 = &stack0xfffffec8;
  if (DAT_362abd30 != 0) {
    DAT_362abd30 = 0;
    if (DAT_36382ffc == 0) {
      DAT_36382ffc = 1;
    }
    if (DAT_36383000 == (code *)0x0) {
      DAT_36383000 = _iob_exref;
    }
    if (DAT_36383004 == (code *)0x0) {
      DAT_36383004 = _iob_exref + 0x20;
    }
    ExceptionList = &local_10;
    puVar3 = &stack0xfffffec8;
    if (DAT_36382ff4 == (undefined4 *)0x0) {
      ExceptionList = &local_10;
      DAT_36382ff4 = FUN_361b9600(DAT_36383000,0x4000);
      puVar3 = local_14;
    }
    local_14 = puVar3;
    FUN_361b9270();
    puVar3 = local_14;
  }
switchD_361b9b37_caseD_12:
  local_14 = puVar3;
  uVar13 = DAT_36382ffc;
  *DAT_36382ff8 = (byte)DAT_36382d58;
  pbVar14 = DAT_36382ff8;
  local_11c = DAT_36382ff8;
LAB_361b9a40:
  do {
    bVar11 = (&DAT_36246ee0)[(uint)*pbVar14 * 4];
    iVar5 = uVar13 * 2;
    if (*(short *)(&DAT_36246da0 + iVar5) != 0) {
      DAT_36382d5c = pbVar14;
      DAT_36382ff0 = uVar13;
    }
    uVar9 = (uint)bVar11;
    if ((int)*(short *)(&DAT_36247860 + ((int)*(short *)(&DAT_36247390 + iVar5) + uVar9) * 2) !=
        uVar13) {
      do {
        uVar13 = (uint)*(short *)(&DAT_362474d8 + iVar5);
        if (0x9c < (int)uVar13) {
          bVar11 = (&DAT_362472e0)[uVar9 * 4];
        }
        iVar5 = uVar13 * 2;
        uVar9 = (uint)bVar11;
      } while ((int)*(short *)(&DAT_36247860 + ((int)*(short *)(&DAT_36247390 + iVar5) + uVar9) * 2)
               != uVar13);
    }
    uVar13 = (uint)*(short *)(&DAT_36247620 +
                             ((int)*(short *)(&DAT_36247390 + uVar13 * 2) + (uint)bVar11) * 2);
    pbVar14 = pbVar14 + 1;
    puVar10 = DAT_36382ff4;
    uVar9 = uVar13;
  } while (*(short *)(&DAT_36247390 + uVar13 * 2) != 0xf4);
LAB_361b9ae0:
  iVar5 = (int)*(short *)(&DAT_36246da0 + uVar9 * 2);
  if (iVar5 == 0) {
    iVar5 = (int)*(short *)(&DAT_36246da0 + DAT_36382ff0 * 2);
    pbVar14 = DAT_36382d5c;
  }
  DAT_36382fe0 = (int)pbVar14 - (int)local_11c;
  DAT_36382fe8 = local_11c;
  DAT_36382d58._0_1_ = *pbVar14;
  *pbVar14 = 0;
  pbVar12 = pbVar14;
LAB_361b9b28:
  uVar9 = DAT_36382ff0;
  pbVar1 = DAT_36382fe8;
  DAT_36382ff8 = pbVar12;
  puVar3 = local_14;
  switch(iVar5) {
  case 0:
    goto switchD_361b9b37_caseD_0;
  case 1:
    goto switchD_361b9b37_caseD_1;
  case 2:
    ExceptionList = local_10;
    return 0x107;
  case 3:
    ExceptionList = local_10;
    return 0x108;
  case 4:
    ExceptionList = local_10;
    return 0x10a;
  case 5:
    ExceptionList = local_10;
    return 0x109;
  case 6:
    ExceptionList = local_10;
    return 0x10b;
  case 7:
    ExceptionList = local_10;
    return 0x10c;
  case 8:
    ExceptionList = local_10;
    return 0x10d;
  case 9:
    ExceptionList = local_10;
    return 0x10e;
  case 10:
    ExceptionList = local_10;
    return 0x10f;
  case 0xb:
    ExceptionList = local_10;
    return 0x106;
  case 0xc:
    ExceptionList = local_10;
    return 0x110;
  case 0xd:
    ExceptionList = local_10;
    return 0x111;
  case 0xe:
    ExceptionList = local_10;
    return 0x113;
  case 0xf:
    ExceptionList = local_10;
    return 0x114;
  case 0x10:
    ExceptionList = local_10;
    return 0x112;
  case 0x11:
    ExceptionList = local_10;
    return 0x115;
  case 0x12:
  case 0x1d:
  case 0x1f:
    goto switchD_361b9b37_caseD_12;
  case 0x13:
    iVar5 = FUN_361b90d0();
    pbVar14 = extraout_ECX;
    if (0x1f < iVar5) {
      pbVar14 = extraout_ECX;
      uVar7 = FUN_361b90c0();
      uVar8 = FUN_361b90b0();
      ThrowF_t(s_File___s__line__d_Includes_neste_36247aa0,uVar8,uVar7,pbVar14);
      pbVar14 = DAT_36382fe8;
    }
    iVar5 = -(int)pbVar14;
    do {
      bVar11 = *pbVar14;
      pbVar14[(int)(local_118 + iVar5)] = bVar11;
      pbVar14 = pbVar14 + 1;
    } while (bVar11 != 0);
    pbVar14 = local_118;
    do {
      pbVar12 = pbVar14;
      pbVar14 = pbVar12 + 1;
    } while (*pbVar12 != 0);
    pbVar12[-1] = 0;
    local_120 = StringDuplicate(&DAT_36222fa0);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    pcVar6 = StringDuplicate((char *)local_118);
    local_8._0_1_ = 2;
    local_11c = (byte *)pcVar6;
    local_128 = StringDuplicate(pcVar6);
    local_124 = 0;
    local_8._0_1_ = 3;
    CTString::Load_t((CTString *)&local_120,(CTFileName *)&local_128);
    local_8._0_1_ = 2;
    StringFree(local_128);
    local_8 = CONCAT31(local_8._1_3_,1);
    StringFree(pcVar6);
    FUN_361b9690((char *)local_118,local_120,0);
    DAT_36382ffc = 1;
    local_8 = 0xffffffff;
    StringFree(local_120);
    puVar3 = local_14;
    goto switchD_361b9b37_caseD_12;
  case 0x14:
    DAT_36382ffc = 1;
    uVar7 = FUN_361b90b0();
    ThrowF_t(s_File___s__Wrong_syntax_for_inclu_36247b00,uVar7);
    puVar3 = local_14;
    goto switchD_361b9b37_caseD_12;
  case 0x15:
    ExceptionList = local_10;
    return (int)(char)*DAT_36382fe8;
  case 0x16:
    DAT_36382d34 = (byte *)atoi((char *)DAT_36382fe8);
    break;
  case 0x17:
    DAT_36382d34 = (byte *)strtoul((char *)(DAT_36382fe8 + 2),(char **)0x0,0x10);
    break;
  case 0x18:
  case 0x19:
    dVar15 = atof((char *)DAT_36382fe8);
    DAT_36382d34 = (byte *)(float)dVar15;
    ExceptionList = local_10;
    return 0x102;
  case 0x1a:
    pbVar14 = DAT_36382fe8;
    do {
      pbVar12 = pbVar14;
      pbVar14 = pbVar12 + 1;
    } while (*pbVar12 != 0);
    pbVar12[-1] = 0;
    DAT_36382d34 = DAT_36382fe8 + 1;
    ExceptionList = local_10;
    return 0x104;
  case 0x1b:
    DAT_36382ffc = 3;
    goto switchD_361b9b37_caseD_12;
  case 0x1c:
    DAT_36382ffc = 1;
    goto switchD_361b9b37_caseD_12;
  case 0x1e:
  case 0x20:
    FUN_361b90f0();
    DAT_36382ff8 = pbVar12;
    puVar3 = local_14;
    goto switchD_361b9b37_caseD_12;
  case 0x21:
    uVar7 = FUN_361b90c0();
    iVar5 = (int)*extraout_ECX_00;
    uVar8 = FUN_361b90b0();
    ThrowF_t(s_File___s__Unrecognized_character_36247b30,uVar8,iVar5,uVar7);
    puVar3 = local_14;
    goto switchD_361b9b37_caseD_12;
  case 0x22:
    fwrite(DAT_36382fe8,DAT_36382fe0,1,(FILE *)DAT_36383004);
    puVar3 = local_14;
    goto switchD_361b9b37_caseD_12;
  case 0x23:
    goto switchD_361b9b37_caseD_23;
  case 0x24:
  case 0x25:
  case 0x26:
    iVar5 = FUN_361b9580();
    puVar3 = local_14;
    if (iVar5 != 0) {
      ExceptionList = local_10;
      return 0;
    }
    goto switchD_361b9b37_caseD_12;
  default:
    FUN_361b92e0();
    puVar3 = local_14;
    goto switchD_361b9b37_caseD_12;
  }
  ExceptionList = local_10;
  return 0x103;
switchD_361b9b37_caseD_23:
  *pbVar14 = (byte)DAT_36382d58;
  if (puVar10[9] == 0) {
    DAT_36382fe4 = puVar10[4];
    *puVar10 = DAT_36383000;
    puVar10[9] = 1;
  }
  pbVar2 = DAT_36382fe8;
  if ((byte *)(puVar10[1] + DAT_36382fe4) < pbVar12) {
    cVar4 = FUN_361b9750();
    pbVar12 = DAT_36382fe8;
    iVar5 = CONCAT31(extraout_var,cVar4);
    if (iVar5 == 0) {
      pbVar14 = DAT_36382fe8 + (int)(pbVar14 + (-1 - (int)pbVar1));
      DAT_36382ff8 = pbVar14;
      uVar13 = FUN_361b9100();
      local_11c = pbVar12;
      goto LAB_361b9a40;
    }
    if (iVar5 == 1) {
      _DAT_36382fec = 0;
      iVar5 = FUN_361b90a0();
      if (iVar5 != 0) goto code_r0x361b9f1a;
      FUN_361b9710(DAT_36383000);
      puVar3 = local_14;
      goto switchD_361b9b37_caseD_12;
    }
    puVar3 = local_14;
    if (iVar5 != 2) goto switchD_361b9b37_caseD_12;
    pbVar14 = (byte *)(DAT_36382ff4[1] + DAT_36382fe4);
    DAT_36382ff8 = pbVar14;
    uVar9 = FUN_361b9100();
    local_11c = DAT_36382fe8;
    puVar10 = DAT_36382ff4;
    goto LAB_361b9ae0;
  }
  pbVar12 = DAT_36382fe8;
  pbVar14 = DAT_36382fe8 + (int)(pbVar14 + (-1 - (int)pbVar1));
  DAT_36382ff8 = pbVar14;
  uVar9 = FUN_361b9100();
  uVar13 = FUN_361b91d0();
  local_11c = pbVar2;
  puVar10 = DAT_36382ff4;
  if (uVar13 == 0) goto LAB_361b9ae0;
  pbVar14 = pbVar14 + 1;
  goto LAB_361b9a40;
code_r0x361b9f1a:
  iVar5 = (int)(DAT_36382ffc - 1) / 2 + 0x24;
  puVar10 = DAT_36382ff4;
  pbVar12 = DAT_36382fe8;
  goto LAB_361b9b28;
switchD_361b9b37_caseD_1:
  DAT_36382ffc = 5;
  goto switchD_361b9b37_caseD_12;
switchD_361b9b37_caseD_0:
  *pbVar14 = (byte)DAT_36382d58;
  pbVar14 = DAT_36382d5c;
  goto LAB_361b9ae0;
}

