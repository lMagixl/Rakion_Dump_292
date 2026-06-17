
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36046f50(CTString *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  CTString *pCVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *local_288;
  int local_284;
  char *local_280;
  char *local_27c;
  char *local_278;
  int local_274;
  int local_270;
  short local_26c;
  short local_26a;
  short local_268;
  short local_266;
  long local_264;
  uint local_260;
  int local_258;
  short local_252;
  undefined4 local_24c;
  int local_248;
  int local_244;
  short local_240;
  short local_23e;
  short local_23c;
  undefined4 local_232;
  undefined4 local_22c;
  char local_228 [524];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_36211534;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  ExceptionList = &local_14;
  FUN_36045f20((undefined4 *)param_1);
  uVar10 = *(int *)(param_1 + 0xc) - 0x14;
  iVar11 = *(int *)(param_1 + 0xc) + -0x20014;
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  for (; iVar11 < (int)uVar10; uVar10 = uVar10 - 1) {
    FUN_36046780(param_1,&local_274,uVar10,4);
    if (local_274 == 0x6054b50) {
      FUN_36046780(param_1,(undefined4 *)&local_26c,uVar10 + 4,0x12);
      if (((local_26c != 0) || (local_26a != 0)) || (local_268 != local_266)) {
        uVar17 = *(undefined4 *)param_1;
        pcVar15 = Translate(s_ETRS_s__Multi_volume_zips_are_no_36227a44,4);
        ThrowF_t(pcVar15,uVar17);
      }
      if (0 < local_266) goto LAB_36046fe5;
      uVar17 = *(undefined4 *)param_1;
      pcVar15 = s_ETRS_s__Empty_zip_36227a70;
      goto LAB_36046fd4;
    }
  }
  uVar17 = *(undefined4 *)param_1;
  pcVar15 = s_ETRS_s__Cannot_find__end_of_cent_36227a84;
LAB_36046fd4:
  pcVar15 = Translate(pcVar15,4);
  ThrowF_t(pcVar15,uVar17);
LAB_36046fe5:
  pcVar15 = StringDuplicate(s_Mods__36227ab4);
  local_c = 0;
  pCVar6 = (CTString *)CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_27c);
  bVar4 = false;
  bVar3 = false;
  local_c = 1;
  iVar11 = CTString::HasPrefix(param_1,pCVar6);
  if (iVar11 == 0) {
    local_280 = StringDuplicate(s_Mods__36227abc);
    local_c = 2;
    pCVar6 = (CTString *)CTString::operator+((CTString *)&_fnmCDPath,(CTString *)&local_278);
    local_c = 3;
    bVar4 = true;
    bVar3 = true;
    iVar11 = CTString::HasPrefix(param_1,pCVar6);
    local_274 = 0;
    if (iVar11 == 0) goto LAB_3604709a;
  }
  local_274 = 1;
LAB_3604709a:
  local_c = 2;
  if (bVar3) {
    StringFree(local_278);
  }
  local_c = 1;
  if (bVar4) {
    StringFree(local_280);
  }
  local_c = 0;
  StringFree(local_27c);
  local_c = 0xffffffff;
  StringFree(pcVar15);
  piVar7 = AllocMemory(local_264);
  FUN_36046780(param_1,piVar7,local_260,local_264);
  local_280 = (char *)0x0;
  local_278 = (char *)FUN_36047bd0(0x362bf3fc);
  iVar12 = (int)local_266;
  DAT_362bf404 = (char *)((int)DAT_362bf404 + iVar12);
  local_270 = iVar12;
  iVar11 = FUN_36047c20((undefined4 *)&DAT_362bf3fc);
  if (iVar11 < (int)DAT_362bf404) {
    local_27c = (char *)((iVar12 + -1) / DAT_362bf408 + 1);
    iVar11 = FUN_36047c20((undefined4 *)&DAT_362bf3fc);
    FUN_36048070(&DAT_362bf3fc,iVar11 + (int)local_27c * DAT_362bf408);
  }
  DAT_362bf404 = local_278;
  local_284 = 0;
  if (0 < iVar12) {
    local_27c = (char *)((int)&local_22c + 3);
    local_288 = piVar7;
    do {
      if (*local_288 != 0x2014b50) {
        FreeMemory(piVar7);
        uVar17 = *(undefined4 *)param_1;
        piVar7 = (int *)0x0;
        iVar11 = local_284;
        pcVar15 = Translate(s_ETRS_s__Wrong_signature_for__fil_36227ac4,4);
        ThrowF_t(pcVar15,uVar17,iVar11);
      }
      piVar14 = &local_258;
      piVar13 = local_288;
      for (iVar11 = 10; piVar13 = piVar13 + 1, iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar14 = *piVar13;
        piVar14 = piVar14 + 1;
      }
      *(short *)piVar14 = (short)*piVar13;
      sVar5 = local_240;
      pcVar15 = local_228;
      for (iVar11 = 0x80; iVar11 != 0; iVar11 = iVar11 + -1) {
        pcVar15[0] = '\0';
        pcVar15[1] = '\0';
        pcVar15[2] = '\0';
        pcVar15[3] = '\0';
        pcVar15 = pcVar15 + 4;
      }
      *pcVar15 = '\0';
      if (0x200 < local_240) {
        FreeMemory(piVar7);
        uVar17 = *(undefined4 *)param_1;
        piVar7 = (int *)0x0;
        pcVar15 = Translate(s_ETRS_s__Too_long_filepath_in_zip_36227afc,4);
        ThrowF_t(pcVar15,uVar17);
      }
      if (sVar5 < 1) {
        FreeMemory(piVar7);
        uVar17 = *(undefined4 *)param_1;
        piVar7 = (int *)0x0;
        pcVar15 = Translate(s_ETRS_s__Invalid_filepath_length_i_36227b20,4);
        ThrowF_t(pcVar15,uVar17);
      }
      uVar10 = (uint)sVar5;
      pcVar15 = (char *)((int)local_288 + 0x2e);
      pcVar8 = local_228;
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar8 = pcVar8 + 4;
      }
      local_288 = (int *)((char *)((int)local_288 + 0x2e) + uVar10);
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar8 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar8 = pcVar8 + 1;
      }
      if (0 < (int)local_23e + (int)local_23c) {
        local_288 = (int *)((int)local_288 + (int)local_23e + (int)local_23c);
      }
      pcVar15 = local_228;
      do {
        cVar2 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar2 != '\0');
      if (local_27c[(int)pcVar15 - (int)(local_228 + 1)] == '/') {
        if ((local_244 != 0) || (local_248 != 0)) {
          FreeMemory(piVar7);
          uVar17 = *(undefined4 *)param_1;
          pcVar15 = local_228;
          piVar7 = (int *)0x0;
          pcVar8 = Translate(s_ETRS_s__s__Invalid_directory_36227b48,4);
          ThrowF_t(pcVar8,uVar17,pcVar15);
        }
      }
      else {
        local_280 = (char *)((int)local_280 + 1);
        FUN_36046030(local_228);
        DAT_362bf404 = DAT_362bf404 + 1;
        iVar11 = FUN_36047c20((undefined4 *)&DAT_362bf3fc);
        if (iVar11 < (int)DAT_362bf404) {
          iVar11 = FUN_36047c20((undefined4 *)&DAT_362bf3fc);
          FUN_36048070(&DAT_362bf3fc,iVar11 + DAT_362bf408);
        }
        puVar1 = (undefined4 *)((int)DAT_362bf404 * 0x20 + -0x20 + DAT_362bf400);
        pcVar15 = StringDuplicate(local_228);
        local_c = 4;
        local_22c = pcVar15;
        local_278 = StringDuplicate(pcVar15);
        StringFree((char *)puVar1[1]);
        puVar1[1] = local_278;
        puVar1[2] = 0;
        local_c = 0xffffffff;
        StringFree(pcVar15);
        puVar1[3] = local_248;
        puVar1[6] = local_24c;
        *puVar1 = param_1;
        puVar1[4] = local_244;
        puVar1[5] = local_232;
        puVar1[7] = 4;
        if (local_274 != 0) {
          puVar1[7] = 6;
        }
        if (local_252 == 0) {
          puVar1[7] = puVar1[7] | 1;
        }
        else if (local_252 == 8) {
          puVar1[7] = puVar1[7] & 0xfffffffe;
        }
        else {
          FreeMemory(piVar7);
          uVar17 = puVar1[2];
          uVar18 = puVar1[1];
          uVar16 = *(undefined4 *)*puVar1;
          piVar7 = (int *)0x0;
          pcVar15 = Translate(s_ETRS_s__s__Only__deflate__compre_36227b68,4);
          ThrowF_t(pcVar15,uVar16,uVar18,uVar17);
        }
      }
      local_284 = local_284 + 1;
    } while (local_284 < local_270);
  }
  FreeMemory(piVar7);
  uVar17 = *(undefined4 *)param_1;
  pcVar15 = Translate(s_ETRS__s___d_files_36227b9c,4);
  CPrintF(pcVar15,uVar17,local_280);
  ExceptionList = local_14;
  return;
}

