
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_361b83f0(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  CModelInstance *pCVar4;
  char *pcVar5;
  char *pcVar6;
  short *psVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  short *psVar15;
  char *pcVar16;
  undefined2 *puVar17;
  undefined1 *puVar18;
  char *pcStack_1530;
  float fStack_152c;
  float local_1508 [1200];
  float local_248;
  char *local_244;
  float local_240;
  char *local_23c;
  undefined4 local_238;
  char *local_234;
  undefined4 local_230;
  char *local_22c;
  undefined4 local_228;
  char *local_224;
  undefined4 local_220;
  float local_21c;
  float local_218;
  float local_214;
  char *local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  char *local_1f0;
  char *local_1ec;
  char *local_1e8;
  char *local_1e4;
  float *local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  short *local_1c4;
  int local_1c0;
  short *local_1bc;
  undefined1 *local_1b8;
  float *local_1b4;
  short *local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  short local_1a4 [200];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621c2b2;
  local_10 = ExceptionList;
  local_14 = DAT_362abd90;
  local_1c4 = local_1a4;
  local_1b8 = (undefined1 *)0x0;
  local_1ac = 0;
  DAT_36382d50 = 0;
  pfVar9 = local_1508;
  local_1bc = (short *)((int)&local_1a8 + 2);
  local_1c0 = 200;
  DAT_36382d4c = 0xfffffffe;
  ExceptionList = &local_10;
  local_1e0 = pfVar9;
LAB_361b8463:
  local_1bc = local_1bc + 1;
  *local_1bc = (short)local_1b8;
  pfVar10 = pfVar9;
  if (local_1c4 + local_1c0 + -1 <= local_1bc) {
    iVar11 = (int)local_1bc - (int)local_1c4 >> 1;
    local_1a8 = (char **)local_1c4;
    iVar12 = iVar11 + 1;
    local_1b4 = local_1e0;
    if (9999 < local_1c0) {
      FUN_361b83b0(s_parser_stack_overflow_36246d14);
      ExceptionList = local_10;
      return 2;
    }
    local_1c0 = local_1c0 * 2;
    if (10000 < local_1c0) {
      local_1c0 = 10000;
    }
    iVar3 = local_1c0 * -2;
    local_1c4 = (short *)((int)local_1508 + iVar3 + -0xc);
    *(undefined4 *)((int)local_1508 + iVar3 + -0x10) = 0x361b84e3;
    FUN_361b83d0((int)local_1508 + iVar3 + -0xc,iVar12 * 2);
    *(undefined4 *)((int)local_1508 + iVar3 + -0x10) = 0x361b84f4;
    local_1e0 = (float *)&stack0xffffeaec;
    FUN_361b83d0((int)&stack0xffffeaec,iVar12 * 0x18);
    local_1bc = local_1c4 + iVar11;
    pfVar10 = &fStack_152c + iVar12 * 6;
    if (local_1c4 + local_1c0 + -1 <= local_1bc) {
      ExceptionList = local_10;
      return 1;
    }
  }
  puVar18 = local_1b8;
  sVar2 = *(short *)(&DAT_36246a08 + (int)local_1b8 * 2);
  if (sVar2 != -0x8000) {
    if (DAT_36382d4c == 0xfffffffe) {
      DAT_36382d4c = FUN_361b9970();
    }
    if ((int)DAT_36382d4c < 1) {
      iVar11 = 0;
      DAT_36382d4c = 0;
    }
    else if (DAT_36382d4c < 0x116) {
      iVar11 = (int)(char)(&DAT_36246380)[DAT_36382d4c];
    }
    else {
      iVar11 = 0x39;
    }
    iVar12 = sVar2 + iVar11;
    if (((iVar12 < 0) || (0x71 < iVar12)) || (*(short *)(&DAT_36246c30 + iVar12 * 2) != iVar11))
    goto LAB_361b867d;
    iVar11 = (int)*(short *)(&DAT_36246b48 + iVar12 * 2);
    if (iVar11 < 0) {
      if (iVar11 == -0x8000) goto LAB_361b8690;
      local_1b0 = (short *)-iVar11;
      goto LAB_361b85b5;
    }
    if (iVar11 == 0) goto LAB_361b8690;
    if (iVar11 == 0x80) {
      ExceptionList = local_10;
      return 0;
    }
    if (DAT_36382d4c != 0) {
      DAT_36382d4c = 0xfffffffe;
    }
    pfVar9 = pfVar10 + 6;
    *pfVar9 = DAT_36382d34;
    pfVar10[7] = DAT_36382d38;
    pfVar10[8] = DAT_36382d3c;
    pfVar10[9] = DAT_36382d40;
    pfVar10[10] = DAT_36382d44;
    pfVar10[0xb] = DAT_36382d48;
    local_1b8 = (undefined1 *)iVar11;
    if (local_1ac != 0) {
      local_1ac = local_1ac + -1;
    }
    goto LAB_361b8463;
  }
LAB_361b867d:
  local_1b0 = (short *)(int)*(short *)(&DAT_362468c8 + (int)puVar18 * 2);
  if (local_1b0 == (short *)0x0) {
LAB_361b8690:
    if (local_1ac != 0) {
      if (local_1ac == 3) {
        if (DAT_36382d4c == 0) {
          ExceptionList = local_10;
          return 1;
        }
        DAT_36382d4c = 0xfffffffe;
      }
      goto LAB_361b889c;
    }
    local_1b0 = (short *)(int)*(short *)(&DAT_36246a08 + (int)puVar18 * 2);
    DAT_36382d50 = DAT_36382d50 + 1;
    if (((int)local_1b0 < -0x7fff) || (0x70 < (int)local_1b0)) {
      FUN_361b83b0(s_parse_error_36246d90);
      goto LAB_361b889c;
    }
    uVar13 = 0;
    pcVar16 = (char *)0x0;
    local_1ac = 0;
    if ((-1 < (int)local_1b0) || (uVar13 = -(int)local_1b0, uVar13 < 0x3a)) {
      local_1b4 = (float *)(&DAT_36246c30 + (int)((int)local_1b0 + uVar13) * 2);
      do {
        if ((int)*(short *)local_1b4 == uVar13) {
          pcVar5 = (&PTR_DAT_36246710)[uVar13];
          pcVar6 = pcVar5 + 1;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          pcVar16 = pcVar5 + (int)(pcVar16 + (0xf - (int)pcVar6));
          local_1ac = local_1ac + 1;
        }
        uVar13 = uVar13 + 1;
        local_1b4 = (float *)((int)local_1b4 + 2);
      } while (uVar13 < 0x3a);
    }
    psVar15 = MEM_MAlloc((uint)(pcVar16 + 0xf));
    local_1a8 = (char **)psVar15;
    if (psVar15 == (short *)0x0) {
      FUN_361b83b0(s_parse_error__also_virtual_memory_36246d64);
      puVar18 = local_1b8;
      goto LAB_361b889c;
    }
    *(undefined4 *)psVar15 = s_parse_error_36246d3c._0_4_;
    *(undefined4 *)(psVar15 + 2) = s_parse_error_36246d3c._4_4_;
    *(undefined4 *)(psVar15 + 4) = s_parse_error_36246d3c._8_4_;
    if (local_1ac < 5) {
      local_1ac = 0;
      if ((int)local_1b0 < 0) {
        local_1b4 = (float *)-(int)local_1b0;
        if ((float *)0x39 < local_1b4) goto LAB_361b8848;
      }
      else {
        local_1b4 = (float *)0x0;
      }
      local_1b0 = (short *)(&DAT_36246c30 + (int)((int)local_1b4 + (int)local_1b0) * 2);
      do {
        if ((float *)(int)*local_1b0 == local_1b4) {
          pcVar6 = s___expecting___36246d48;
          pcVar16 = pcVar6;
          if (local_1ac != 0) {
            pcVar6 = (char *)&DAT_36246d58;
            pcVar16 = pcVar6;
          }
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          pcVar5 = (char *)((int)psVar15 + -1);
          do {
            pcVar14 = pcVar5 + 1;
            pcVar5 = pcVar5 + 1;
          } while (*pcVar14 != '\0');
          pcVar14 = pcVar16;
          for (uVar13 = (uint)((int)pcVar6 - (int)pcVar16) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (uVar13 = (int)pcVar6 - (int)pcVar16 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar5 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar5 = pcVar5 + 1;
          }
          pcVar16 = (&PTR_DAT_36246710)[(int)local_1b4];
          pcVar6 = pcVar16;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          pcVar5 = (char *)((int)psVar15 + -1);
          do {
            pcVar14 = pcVar5 + 1;
            pcVar5 = pcVar5 + 1;
          } while (*pcVar14 != '\0');
          pcVar14 = pcVar16;
          for (uVar13 = (uint)((int)pcVar6 - (int)pcVar16) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (uVar13 = (int)pcVar6 - (int)pcVar16 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar5 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar5 = pcVar5 + 1;
          }
          puVar17 = (undefined2 *)((int)psVar15 + -1);
          do {
            pcVar16 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined2 *)((int)puVar17 + 1);
          } while (*pcVar16 != '\0');
          local_1ac = local_1ac + 1;
          *puVar17 = DAT_36246d60;
        }
        local_1b4 = (float *)((int)local_1b4 + 1);
        local_1b0 = local_1b0 + 1;
      } while (local_1b4 < (float *)0x3a);
    }
LAB_361b8848:
    FUN_361b83b0(psVar15);
    MEM_Free(psVar15);
    puVar18 = local_1b8;
LAB_361b889c:
    local_1ac = 3;
    do {
      if ((((*(short *)(&DAT_36246a08 + (int)puVar18 * 2) != -0x8000) &&
           (iVar11 = *(short *)(&DAT_36246a08 + (int)puVar18 * 2) + 1, -1 < iVar11)) &&
          (iVar11 < 0x72)) && (*(short *)(&DAT_36246c30 + iVar11 * 2) == 1)) {
        iVar11 = (int)*(short *)(&DAT_36246b48 + iVar11 * 2);
        if (iVar11 < 0) {
          if (iVar11 != -0x8000) goto code_r0x361b88e4;
        }
        else if (iVar11 != 0) {
          if (iVar11 == 0x80) {
            ExceptionList = local_10;
            return 0;
          }
          pfVar9 = pfVar10 + 6;
          *pfVar9 = DAT_36382d34;
          pfVar10[7] = DAT_36382d38;
          pfVar10[8] = DAT_36382d3c;
          pfVar10[9] = DAT_36382d40;
          pfVar10[10] = DAT_36382d44;
          pfVar10[0xb] = DAT_36382d48;
          local_1b8 = (undefined1 *)iVar11;
          goto LAB_361b8463;
        }
      }
      if (local_1bc == local_1c4) {
        ExceptionList = local_10;
        return 1;
      }
      puVar18 = (undefined1 *)(int)local_1bc[-1];
      pfVar10 = pfVar10 + -6;
      local_1bc = local_1bc + -1;
    } while( true );
  }
LAB_361b85b5:
  pCVar4 = DAT_362fdef4;
  psVar15 = (short *)(int)*(short *)(&DAT_36246860 + (int)local_1b0 * 2);
  if (0 < (int)psVar15) {
    local_1dc = pfVar10[(int)psVar15 * -6 + 6];
    local_1d8 = pfVar10[(int)psVar15 * -6 + 7];
    local_1d4 = pfVar10[(int)psVar15 * -6 + 8];
    local_1d0 = pfVar10[(int)psVar15 * -6 + 9];
    local_1cc = pfVar10[(int)psVar15 * -6 + 10];
    local_1c8 = pfVar10[(int)psVar15 * -6 + 0xb];
  }
  local_1a8 = (char **)psVar15;
  switch(local_1b0) {
  case (short *)0x1:
    if (DAT_362fdef4 == (CModelInstance *)0x0) {
      FUN_361b83b0(s__yy_mi___NULL_36246d2c);
    }
    local_1e8 = StringDuplicate((char *)pfVar10[-6]);
    local_8 = 0;
    CModelInstance::SetName(DAT_362fdef4,(CTString *)&local_1e8);
    local_8 = 0xffffffff;
    StringFree(local_1e8);
    CModelInstance::SetOffset(DAT_362fdef4,pfVar10 + -0x12);
    DAT_36382d54 = 0;
    if (DAT_362fdeec == 0) break;
    pcVar16 = (char *)FUN_361b90b0();
    psVar7 = (short *)StringDuplicate(pcVar16);
    local_8 = 1;
    goto LAB_361b8ca4;
  case (short *)0x16:
    local_240 = pfVar10[-0x30];
    local_248 = pfVar10[-0x48];
    local_244 = (char *)pfVar10[-0x3c];
    local_1fc = pfVar10[-0x24];
    local_1f4 = pfVar10[-0xc];
    local_1f8 = pfVar10[-0x18];
    fStack_152c = local_248;
    local_1a8 = &pcStack_1530;
    pcStack_1530 = local_244;
    pcStack_1530 = StringDuplicate((char *)pfVar10[-0x54]);
    CModelInstance::AddColisionBox(DAT_362fdef4);
    break;
  case (short *)0x19:
    local_208 = pfVar10[-0x42];
    local_204 = pfVar10[-0x36];
    local_200 = pfVar10[-0x2a];
    *(float *)(DAT_362fdef4 + 0x9c) = local_208;
    *(float *)(pCVar4 + 0xa0) = local_204;
    *(float *)(pCVar4 + 0xa4) = local_200;
    pCVar4 = DAT_362fdef4;
    local_21c = pfVar10[-0x1e];
    local_218 = pfVar10[-0x12];
    local_214 = pfVar10[-6];
    *(float *)(DAT_362fdef4 + 0xa8) = local_21c;
    *(float *)(pCVar4 + 0xac) = local_218;
    *(float *)(pCVar4 + 0xb0) = local_214;
    break;
  case (short *)0x1a:
    local_1dc = 0.0;
    local_1d8 = 0.0;
    local_1d4 = 0.0;
    local_1d0 = 0.0;
    local_1cc = 0.0;
    local_1c8 = 0.0;
    break;
  case (short *)0x1b:
    local_1dc = pfVar10[-6];
    local_1d8 = pfVar10[-5];
    local_1d4 = pfVar10[-4];
    local_1d0 = pfVar10[-3];
    local_1cc = pfVar10[-2];
    local_1c8 = pfVar10[-1];
    break;
  case (short *)0x1c:
    if (DAT_36382d54 == 0) {
      local_1dc = pfVar10[-0x42];
      local_1d8 = pfVar10[-0x36];
      local_1d4 = pfVar10[-0x2a];
      local_1d0 = pfVar10[-0x1e];
      local_1cc = pfVar10[-0x12];
      local_1c8 = pfVar10[-6];
      DAT_36382d54 = 1;
    }
    break;
  case (short *)0x1d:
    local_1f0 = StringDuplicate((char *)pfVar10[-0x1e]);
    local_8 = 2;
    iVar11 = CTString::operator!=((CTString *)&local_1f0,&DAT_36246d3a);
    local_8 = 0xffffffff;
    StringFree(local_1f0);
    if (iVar11 == 0) {
      local_1a8 = (char **)0xffffffff;
    }
    else {
      local_1ec = StringDuplicate((char *)pfVar10[-0x1e]);
      local_8 = 3;
      local_1a8 = (char **)ska_FindID((CTString *)&local_1ec);
      local_8 = 0xffffffff;
      StringFree(local_1ec);
    }
    pcVar16 = (char *)pfVar10[-6];
    local_1b4 = (float *)&stack0xffffeae8;
    pfVar10[-0x24] = (float)DAT_362fdef4;
    StringDuplicate(pcVar16);
    DAT_362fdef4 = CreateModelInstance();
    CModelInstance::AddChild((CModelInstance *)pfVar10[-0x24],DAT_362fdef4,-1);
    CModelInstance::SetOffset(DAT_362fdef4,pfVar10 + -0x12);
    CModelInstance::SetParentBone(DAT_362fdef4,(long)local_1a8);
    DAT_36382d54 = 0;
    if (DAT_362fdeec == 0) break;
    pcVar16 = (char *)FUN_361b90b0();
    psVar7 = (short *)StringDuplicate(pcVar16);
    local_8 = 4;
LAB_361b8ca4:
    local_1a8 = (char **)psVar7;
    CTFileName::operator=((CTFileName *)(DAT_362fdef4 + 0xf4),(CTString *)&local_1a8);
    local_8 = 0xffffffff;
    StringFree((char *)psVar7);
    break;
  case (short *)0x1e:
    DAT_362fdef4 = (CModelInstance *)pfVar10[-0x3c];
    break;
  case (short *)0x1f:
    psVar7 = (short *)StringDuplicate((char *)pfVar10[-6]);
    local_8 = 5;
    local_1a8 = (char **)psVar7;
    local_224 = StringDuplicate((char *)psVar7);
    local_220 = 0;
    local_8._0_1_ = 6;
    CModelInstance::AddMesh_t(DAT_362fdef4,(CTFileName *)&local_224);
    local_8 = CONCAT31(local_8._1_3_,5);
    pcVar16 = local_224;
    goto LAB_361b8e24;
  case (short *)0x21:
    psVar7 = (short *)StringDuplicate((char *)pfVar10[-6]);
    local_8 = 7;
    local_1a8 = (char **)psVar7;
    local_22c = StringDuplicate((char *)psVar7);
    local_228 = 0;
    local_8._0_1_ = 8;
    CModelInstance::AddBrush_t(DAT_362fdef4,(CTFileName *)&local_22c);
    local_8 = CONCAT31(local_8._1_3_,7);
    pcVar16 = local_22c;
    goto LAB_361b8e24;
  case (short *)0x22:
    psVar7 = (short *)StringDuplicate((char *)pfVar10[-6]);
    local_8 = 9;
    local_1a8 = (char **)psVar7;
    local_23c = StringDuplicate((char *)psVar7);
    local_238 = 0;
    local_8._0_1_ = 10;
    CModelInstance::AddSkeleton_t(DAT_362fdef4,(CTFileName *)&local_23c);
    local_8 = CONCAT31(local_8._1_3_,9);
    pcVar16 = local_23c;
    goto LAB_361b8e24;
  case (short *)0x27:
    psVar7 = (short *)StringDuplicate((char *)pfVar10[-6]);
    local_8 = 0xb;
    local_1a8 = (char **)psVar7;
    local_210 = StringDuplicate((char *)psVar7);
    local_20c = 0;
    local_8._0_1_ = 0xc;
    CModelInstance::AddAnimSet_t(DAT_362fdef4,(CTFileName *)&local_210);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    pcVar16 = local_210;
LAB_361b8e24:
    StringFree(pcVar16);
    local_8 = 0xffffffff;
    StringFree((char *)psVar7);
    break;
  case (short *)0x2a:
    CModelInstance::NewClearState(DAT_362fdef4,1.0);
    local_1e4 = StringDuplicate((char *)pfVar10[-6]);
    local_8 = 0xd;
    lVar8 = ska_StringToID((CTString *)&local_1e4);
    local_8 = 0xffffffff;
    StringFree(local_1e4);
    fStack_152c = 2.3179823e-06;
    CModelInstance::AddAnimation(DAT_362fdef4,lVar8,1,1.0,0,1.0);
    break;
  case (short *)0x30:
    pfVar9 = (float *)StringDuplicate((char *)pfVar10[-6]);
    local_8 = 0xe;
    local_1b4 = pfVar9;
    local_234 = StringDuplicate((char *)pfVar9);
    local_230 = 0;
    local_1b8 = &stack0xffffeae4;
    local_8._0_1_ = 0xf;
    StringDuplicate((char *)pfVar10[-0x12]);
    CModelInstance::AddTexture_t(DAT_362fdef4);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    StringFree(local_234);
    local_8 = 0xffffffff;
    StringFree((char *)pfVar9);
    psVar15 = (short *)local_1a8;
    break;
  case (short *)0x31:
    local_1dc = *pfVar10;
    break;
  case (short *)0x32:
    local_1dc = (float)(int)*pfVar10;
    break;
  case (short *)0x33:
    local_1dc = *pfVar10;
  }
  local_1bc = local_1bc + -(int)psVar15;
  pfVar9 = pfVar10 + (int)psVar15 * -6 + 6;
  *pfVar9 = local_1dc;
  pfVar9[1] = local_1d8;
  pfVar9[2] = local_1d4;
  pfVar9[3] = local_1d0;
  pfVar9[4] = local_1cc;
  pfVar9[5] = local_1c8;
  iVar11 = (int)*(short *)(&DAT_36246ad6 + *(short *)(&DAT_362467f8 + (int)local_1b0 * 2) * 2) +
           (int)*local_1bc;
  if (((iVar11 < 0) || (0x71 < iVar11)) || (*(short *)(&DAT_36246c30 + iVar11 * 2) != *local_1bc)) {
    local_1b8 = (undefined1 *)
                (int)*(short *)(&DAT_36246996 + *(short *)(&DAT_362467f8 + (int)local_1b0 * 2) * 2);
  }
  else {
    local_1b8 = (undefined1 *)(int)*(short *)(&DAT_36246b48 + iVar11 * 2);
  }
  goto LAB_361b8463;
code_r0x361b88e4:
  local_1b0 = (short *)-iVar11;
  goto LAB_361b85b5;
}

