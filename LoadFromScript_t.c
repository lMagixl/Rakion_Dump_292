
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEditModel::LoadFromScript_t(class CTFileName &) */

void __thiscall CEditModel::LoadFromScript_t(CEditModel *this,CTFileName *param_1)

{
  char cVar1;
  char *pcVar2;
  CTString *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  double *pdVar8;
  int iVar9;
  CTFileName *this_00;
  code *pcVar10;
  float *pfVar11;
  undefined4 *puVar12;
  char *pcVar13;
  float *pfVar14;
  CEditModel *pCVar15;
  bool bVar16;
  ulonglong uVar17;
  CTFileStream local_580 [116];
  CObject3D local_50c [20];
  char *local_4f8;
  undefined4 local_4f4;
  char *local_4f0;
  float local_4ec [4];
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  CObject3D local_4c8 [20];
  char *local_4b4;
  undefined4 local_4b0;
  char *local_4ac;
  undefined4 local_4a8;
  char *local_4a4;
  undefined4 local_4a0;
  char *local_49c;
  undefined4 local_498;
  int local_494;
  int local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  char *local_468;
  char *local_464;
  int local_460;
  char *local_45c;
  char *local_458;
  float local_454 [4];
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  char *local_42c;
  CEditModel *local_428;
  undefined1 local_424 [259];
  char acStack_321 [2];
  undefined4 uStack_31f;
  char local_21c [260];
  char local_118 [128];
  char local_98 [128];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xaf9d0  2547  ?LoadFromScript_t@CEditModel@@QAEXAAVCTFileName@@@Z */
  puStack_c = &LAB_36213b43;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffa70;
  local_18 = DAT_362abd90;
  local_8 = 0;
  ExceptionList = &local_10;
  local_428 = this;
  CObject3D::BatchLoading_t(1);
  CTFileStream::CTFileStream(local_580);
  local_8._0_1_ = 1;
  CObject3D::CObject3D(local_50c);
  local_8._0_1_ = 2;
  local_4ac = StringDuplicate(&DAT_36222fa0);
  local_4a8 = 0;
  local_8._0_1_ = 3;
  local_49c = StringDuplicate(&DAT_36222fa0);
  local_498 = 0;
  local_8._0_1_ = 4;
  local_4a4 = StringDuplicate(&DAT_36222fa0);
  local_4a0 = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_464 = StringDuplicate(&DAT_36222fa0);
  local_460 = 0;
  acStack_321[1] = 0;
  puVar12 = &uStack_31f;
  for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  *(undefined1 *)((int)puVar12 + 2) = 0;
  FUN_3604f120(local_454,0x3f800000);
  CTFileStream::Open_t(local_580,param_1,1);
  local_494 = 0;
  local_45c = (char *)0x0;
  pcVar10 = sscanf_exref;
LAB_360afb01:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            do {
              CTStream::GetLine_t((CTStream *)local_580,local_98,0x80,'\n');
              local_42c = local_98;
              do {
                cVar1 = *local_42c;
                local_42c = local_42c + 1;
              } while (cVar1 != '\0');
              local_42c = local_42c + -(int)(local_98 + 1);
            } while ((local_42c == (char *)0x0) || (local_98[0] == ';'));
            iVar9 = _strnicmp(local_98,s_DIRECTORY_36230e40,9);
            if (iVar9 != 0) break;
            _strupr(local_98);
            (*pcVar10)(local_98);
            pcVar13 = acStack_321;
            do {
              pcVar13 = pcVar13 + 1;
            } while (*pcVar13 != '\0');
            if (pcVar13[-1] != '\\') {
              pcVar13 = acStack_321;
              do {
                pcVar2 = pcVar13 + 1;
                pcVar13 = pcVar13 + 1;
              } while (*pcVar2 != '\0');
              *(undefined2 *)pcVar13 = DAT_36230e5c;
            }
          }
          iVar9 = _strnicmp(local_98,&DAT_36230e60,4);
          if (iVar9 != 0) break;
          _strupr(local_98);
          local_430 = 1.0;
          (*pcVar10)(local_98);
          local_454[0] = local_454[0] * local_430;
          local_454[1] = local_454[1] * local_430;
          local_454[2] = local_454[2] * local_430;
          local_454[3] = local_454[3] * local_430;
          local_444 = local_444 * local_430;
          local_440 = local_440 * local_430;
          local_43c = local_43c * local_430;
          local_438 = local_438 * local_430;
          local_434 = local_434 * local_430;
        }
        iVar9 = _strnicmp(local_98,s_TRANSFORM_36230e70,9);
        if (iVar9 != 0) break;
        _strupr(local_98);
        FUN_3604f120(&local_48c,0x3f800000);
        (*pcVar10)(local_98,s_TRANSFORM__g__g__g__g__g__g__g___36230e7c,&local_48c,&local_488,
                   &local_484,&local_480,&local_47c,&local_478);
        local_4ec[0] = local_48c * local_454[0] +
                       local_480 * local_454[1] + local_474 * local_454[2];
        local_4ec[1] = local_488 * local_454[0] +
                       local_47c * local_454[1] + local_470 * local_454[2];
        local_4ec[2] = local_484 * local_454[0] +
                       local_478 * local_454[1] + local_46c * local_454[2];
        local_4ec[3] = local_454[3] * local_48c + local_444 * local_480 + local_440 * local_474;
        local_4dc = local_454[3] * local_488 + local_444 * local_47c + local_440 * local_470;
        local_4d8 = local_454[3] * local_484 + local_444 * local_478 + local_440 * local_46c;
        local_4d4 = local_43c * local_48c + local_438 * local_480 + local_434 * local_474;
        local_4d0 = local_43c * local_488 + local_438 * local_47c + local_434 * local_470;
        local_4cc = local_43c * local_484 + local_438 * local_478 + local_434 * local_46c;
        pfVar11 = local_4ec;
        pfVar14 = local_454;
        for (iVar9 = 9; this = local_428, iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar14 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          pfVar14 = pfVar14 + 1;
        }
      }
      iVar9 = _strnicmp(local_98,&DAT_36230ea4,4);
      if (iVar9 != 0) break;
      _strupr(local_98);
      (*pcVar10)(local_98);
      iVar9 = 4;
      bVar16 = true;
      pcVar13 = local_118;
      pcVar2 = &DAT_36230eb4;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar16 = *pcVar13 == *pcVar2;
        pcVar13 = pcVar13 + 1;
        pcVar2 = pcVar2 + 1;
      } while (bVar16);
      this = local_428;
      if (bVar16) {
        *(uint *)(local_428 + 0x1278) = *(uint *)(local_428 + 0x1278) & 0xfffffff7 | 1;
      }
    }
    iVar9 = _strnicmp(local_98,s_HALF_FLAT_36230eb8,9);
    if (iVar9 != 0) {
      iVar9 = _strnicmp(local_98,s_STRETCH_DETAIL_36230ed8,0xe);
      if (iVar9 == 0) {
        _strupr(local_98);
        (*pcVar10)(local_98);
        iVar9 = 4;
        bVar16 = true;
        pcVar13 = local_118;
        pcVar2 = &DAT_36230efc;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar16 = *pcVar13 == *pcVar2;
          pcVar13 = pcVar13 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar16);
        this = local_428;
        if (bVar16) {
          *(uint *)(local_428 + 0x1278) = *(uint *)(local_428 + 0x1278) | 0x20;
        }
      }
      else {
        iVar9 = _strnicmp(local_98,s_HI_QUALITY_36230f00,10);
        if (iVar9 == 0) {
          _strupr(local_98);
          (*pcVar10)(local_98);
          iVar9 = 4;
          bVar16 = true;
          pcVar13 = local_118;
          pcVar2 = &DAT_36230f1c;
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            bVar16 = *pcVar13 == *pcVar2;
            pcVar13 = pcVar13 + 1;
            pcVar2 = pcVar2 + 1;
          } while (bVar16);
          this = local_428;
          if (bVar16) {
            *(uint *)(local_428 + 0x1278) = *(uint *)(local_428 + 0x1278) | 0x10;
          }
        }
        else {
          iVar9 = _strnicmp(local_98,s_REFLECTIONS_36230f20,0xb);
          if (iVar9 != 0) {
            iVar9 = _strnicmp(local_98,s_MAX_SHADOW_36230f2c,10);
            if (iVar9 != 0) {
              iVar9 = _strnicmp(local_98,s_MIP_MODELS_36230f48,10);
              if (iVar9 == 0) {
                (*pcVar10)();
                if ((local_490 < 1) || (0x1f < local_490)) {
                  ThrowF_t(s_Invalid_number_of_mip_models__Nu_36230f64);
                }
                if (_ProgresRoutines != (code *)0x0) {
                  (*_ProgresRoutines)();
                }
                if (DAT_362ca418 != (code *)0x0) {
                  (*DAT_362ca418)();
                }
                iVar9 = 0;
                pCVar15 = local_428;
                while (iVar9 < local_490) {
                  if (DAT_362ca41c != (code *)0x0) {
                    (*DAT_362ca41c)();
                  }
                  do {
                    CTStream::GetLine_t((CTStream *)local_580,local_98,0x80,'\n');
                    local_42c = local_98;
                    do {
                      cVar1 = *local_42c;
                      local_42c = local_42c + 1;
                    } while (cVar1 != '\0');
                    local_42c = local_42c + -(int)(local_98 + 1);
                  } while ((local_42c == (char *)0x0) || (local_98[0] == ';'));
                  _strupr(local_98);
                  sscanf(local_98,&DAT_36230fc8);
                  sprintf(local_21c,&DAT_36230fcc,acStack_321 + 1,local_424);
                  if (iVar9 == 0) {
                    pcVar13 = StringDuplicate(local_21c);
                    local_8._0_1_ = 7;
                    local_42c = pcVar13;
                    pcVar2 = StringDuplicate(pcVar13);
                    StringFree(local_464);
                    local_8 = CONCAT31(local_8._1_3_,6);
                    local_464 = pcVar2;
                    local_460 = iVar9;
                    StringFree(pcVar13);
                    pCVar15 = local_428;
                  }
                  CObject3D::Clear(local_50c);
                  pcVar13 = StringDuplicate(local_21c);
                  local_8._0_1_ = 8;
                  local_42c = pcVar13;
                  local_4b4 = StringDuplicate(pcVar13);
                  local_4b0 = 0;
                  local_8._0_1_ = 9;
                  CObject3D::LoadAny3DFormat_t
                            (local_50c,(CTFileName *)&local_4b4,(Matrix<float,3,3> *)local_454,0);
                  local_8._0_1_ = 8;
                  StringFree(local_4b4);
                  local_8 = CONCAT31(local_8._1_3_,6);
                  StringFree(pcVar13);
                  if (*(int *)(pCVar15 + 0x34) == 0) {
                    if (local_494 == 0) {
                      ThrowF_t(s_Found_key_word__MIP_MODELS__but_t_36230fd8);
                    }
                    NewModel(pCVar15,local_50c);
                    iVar9 = iVar9 + 1;
                  }
                  else {
                    FUN_3604a790(local_50c,0);
                    FUN_360502d0();
                    AddMipModel(pCVar15,local_50c);
                    FUN_3604a790(local_50c,0);
                    FUN_360502e0();
                    iVar9 = iVar9 + 1;
                  }
                }
                CModelData::SpreadMipSwitchFactors((CModelData *)(pCVar15 + 0x18),0,5.0);
                this = local_428;
                pcVar10 = sscanf_exref;
                goto LAB_360afb01;
              }
              iVar9 = _strnicmp(local_98,s_DEFINE_MAPPING_3623106c,0xe);
              if (iVar9 == 0) {
                if (*(int *)(this + 0x34) == 0) {
                  ThrowF_t(s_Found_key_word__DEFINE_MAPPING__b_3623107c);
                }
                CTStream::GetLine_t((CTStream *)local_580,local_98,0x80,'\n');
                (*pcVar10)();
                sprintf(local_21c,&DAT_362310c0,acStack_321 + 1,local_424);
                pcVar13 = StringDuplicate(local_21c);
                local_8._0_1_ = 10;
                local_42c = pcVar13;
                CTFileName::operator=((CTFileName *)&local_4ac,(CTString *)&local_42c);
                local_8._0_1_ = 6;
                StringFree(pcVar13);
                CTStream::GetLine_t((CTStream *)local_580,local_98,0x80,'\n');
                (*pcVar10)();
                sprintf(local_21c,&DAT_362310cc,acStack_321 + 1,local_424);
                pcVar13 = StringDuplicate(local_21c);
                local_8._0_1_ = 0xb;
                local_42c = pcVar13;
                CTFileName::operator=((CTFileName *)&local_49c,(CTString *)&local_42c);
                local_8._0_1_ = 6;
                StringFree(pcVar13);
                CTStream::GetLine_t((CTStream *)local_580,local_98,0x80,'\n');
                (*pcVar10)();
                sprintf(local_21c,&DAT_362310d8,acStack_321 + 1,local_424);
                pcVar13 = StringDuplicate(local_21c);
                local_8._0_1_ = 0xc;
                this_00 = (CTFileName *)&local_4a4;
              }
              else {
                iVar9 = _strnicmp(local_98,s_IMPORT_MAPPING_362310e0,0xe);
                if (iVar9 != 0) {
                  iVar9 = _strnicmp(local_98,s_TEXTURE_DIM_3623113c,0xb);
                  if (iVar9 == 0) {
                    _strupr(local_98);
                    (*pcVar10)(local_98,s_TEXTURE_DIM__f__f_36231148);
                    uVar17 = FUN_361bfd6c();
                    *(int *)(this + 0xcf0) = (int)uVar17;
                    uVar17 = FUN_361bfd6c();
                    *(int *)(this + 0xcf4) = (int)uVar17;
                    local_494 = 1;
                  }
                  else {
                    iVar9 = _strnicmp(local_98,s_ANIM_START_3623115c,10);
                    if (iVar9 == 0) {
                      LoadModelAnimationData_t
                                (this,(CTStream *)local_580,(Matrix<float,3,3> *)local_454);
                      FUN_360b2280(this + 0x12a8,1);
                      CreateEmptyAttachingSounds(this);
                      local_45c = (char *)0x1;
                    }
                    else {
                      iVar9 = _strnicmp(local_98,s_ORIGIN_TRI_36231168,10);
                      if (iVar9 == 0) {
                        (*pcVar10)(local_98,s_ORIGIN_TRI__d__d__d_36231174);
                      }
                      else {
                        iVar9 = _strnicmp(local_98,&DAT_36231188,3);
                        if (iVar9 == 0) {
                          if (local_45c != (char *)0x1) {
                            local_4f0 = s_There_are_no_animations_defined_f_36231208;
                    /* WARNING: Subroutine does not return */
                            _CxxThrowException(&local_4f0,(ThrowInfo *)&DAT_3624f688);
                          }
                          if (local_494 == 1) {
                            CModelData::LinkDataForSurfaces((CModelData *)(this + 0x18),1);
                            local_8._0_1_ = 0xe;
                            local_45c = StringDuplicate(&DAT_362312ec);
                            local_8._0_1_ = 0xf;
                            pCVar3 = (CTString *)CTFileName::NoExt(param_1);
                            local_8._0_1_ = 0x10;
                            pCVar3 = (CTString *)CTString::operator+(pCVar3,(CTString *)&local_458);
                            local_468 = &stack0xfffffa64;
                            local_8._0_1_ = 0x11;
                            CTFileName::CTFileName((CTFileName *)&stack0xfffffa64,pCVar3);
                            LoadMapping_t(local_428);
                            local_8._0_1_ = 0x10;
                            StringFree(local_458);
                            local_8._0_1_ = 0xf;
                            StringFree(local_4b4);
                            local_8 = CONCAT31(local_8._1_3_,0xe);
                            StringFree(local_45c);
                            pCVar15 = local_428;
                            local_8 = 6;
                            iVar9 = CTString::operator!=((CTString *)&local_464,&DAT_362312f1);
                            if ((iVar9 == 0) &&
                               (((iVar9 = CTString::operator!=((CTString *)&local_49c,&DAT_362312f2)
                                 , iVar9 == 0 ||
                                 (iVar9 = CTString::operator!=((CTString *)&local_4ac,&DAT_362312f3)
                                 , iVar9 == 0)) ||
                                (iVar9 = CTString::operator!=((CTString *)&local_4a4,&DAT_362312f4),
                                iVar9 == 0)))) {
                              ThrowF_t(s_ERROR__Mapping_not_defined__3623143c);
                            }
                            else {
                              CObject3D::CObject3D((CObject3D *)&local_47c);
                              local_8._0_1_ = 0x13;
                              CObject3D::CObject3D((CObject3D *)&local_4dc);
                              local_8._0_1_ = 0x14;
                              CObject3D::CObject3D(local_4c8);
                              local_8 = CONCAT31(local_8._1_3_,0x15);
                              CObject3D::Clear((CObject3D *)&local_47c);
                              CObject3D::Clear((CObject3D *)&local_4dc);
                              CObject3D::Clear(local_4c8);
                              iVar9 = CTString::operator!=((CTString *)&local_49c,&DAT_362312f5);
                              if (((iVar9 == 0) ||
                                  (iVar9 = CTString::operator!=
                                                     ((CTString *)&local_4ac,&DAT_362312f6),
                                  iVar9 == 0)) ||
                                 (iVar9 = CTString::operator!=((CTString *)&local_4a4,&DAT_362312f7)
                                 , iVar9 == 0)) {
                                CObject3D::LoadAny3DFormat_t
                                          ((CObject3D *)&local_47c,(CTFileName *)&local_464,
                                           (Matrix<float,3,3> *)local_454,0);
                                CObject3D::LoadAny3DFormat_t
                                          ((CObject3D *)&local_4dc,(CTFileName *)&local_464,
                                           (Matrix<float,3,3> *)local_454,1);
                                CObject3D::LoadAny3DFormat_t
                                          (local_4c8,(CTFileName *)&local_464,
                                           (Matrix<float,3,3> *)local_454,2);
                                iVar9 = FUN_3604a790(local_4c8,0);
                                iVar9 = FUN_3604aa70(iVar9);
                                for (iVar4 = 0; iVar4 < iVar9; iVar4 = iVar4 + 1) {
                                  iVar5 = iVar4;
                                  pvVar7 = (void *)FUN_3604a790(local_4c8,0);
                                  pdVar8 = (double *)FUN_3604a710(pvVar7,iVar5);
                                  *pdVar8 = (double)((float)*(int *)(pCVar15 + 0xcf0) *
                                                     _DAT_362265a4 * (float)*pdVar8);
                                  iVar5 = iVar4;
                                  pvVar7 = (void *)FUN_3604a790(local_4c8,0);
                                  iVar5 = FUN_3604a710(pvVar7,iVar5);
                                  *(double *)(iVar5 + 8) =
                                       (double)((float)*(int *)(pCVar15 + 0xcf4) * _DAT_362265a4 *
                                               (float)*(double *)(iVar5 + 8));
                                }
                              }
                              else {
                                CObject3D::LoadAny3DFormat_t
                                          ((CObject3D *)&local_47c,(CTFileName *)&local_4ac,
                                           (Matrix<float,3,3> *)local_454,0);
                                CObject3D::LoadAny3DFormat_t
                                          ((CObject3D *)&local_4dc,(CTFileName *)&local_49c,
                                           (Matrix<float,3,3> *)local_454,0);
                                CObject3D::LoadAny3DFormat_t
                                          (local_4c8,(CTFileName *)&local_4a4,
                                           (Matrix<float,3,3> *)local_454,0);
                              }
                              local_458 = *(char **)(local_428 + 0x34);
                              iVar9 = *(int *)(local_428 + 0xf0);
                              iVar4 = FUN_3604a790(&local_47c,0);
                              pcVar13 = (char *)FUN_3604aa70(iVar4);
                              iVar4 = FUN_3604a790(&local_47c,0);
                              iVar4 = FUN_3604a760(iVar4 + 0x50);
                              iVar5 = FUN_3604a790(&local_4dc,0);
                              local_468 = (char *)FUN_3604aa70(iVar5);
                              iVar5 = FUN_3604a790(&local_4dc,0);
                              iVar5 = FUN_3604a760(iVar5 + 0x50);
                              iVar6 = FUN_3604a790(local_4c8,0);
                              local_42c = (char *)FUN_3604aa70(iVar6);
                              iVar6 = FUN_3604a790(local_4c8,0);
                              iVar6 = FUN_3604a760(iVar6 + 0x50);
                              if (((iVar9 != iVar4) || (iVar9 != iVar5)) || (iVar9 != iVar6)) {
                                ThrowF_t(s_ERROR__Object_used_to_create_mod_362312f8);
                              }
                              if (local_458 != pcVar13) {
                                ThrowF_t(s_ERROR__Object_used_to_create_mod_36231370);
                              }
                              if (local_42c != local_468) {
                                ThrowF_t(s_ERROR__Objects_that_define_opene_362313e0);
                              }
                              pCVar15 = local_428;
                              CalculateUnwrappedMapping
                                        (local_428,(CObject3D *)&local_47c,(CObject3D *)&local_4dc,
                                         local_4c8);
                              CalculateMappingForMips(pCVar15);
                              local_8._0_1_ = 0x14;
                              CObject3D::~CObject3D(local_4c8);
                              local_8._0_1_ = 0x13;
                              CObject3D::~CObject3D((CObject3D *)&local_4dc);
                              local_8 = CONCAT31(local_8._1_3_,6);
                              CObject3D::~CObject3D((CObject3D *)&local_47c);
                            }
                            CTFileStream::Close(local_580);
                            iVar9 = FUN_360b0f50((undefined4 *)(pCVar15 + 0x1300));
                            if (iVar9 == 0) {
                              CreateEmptyAttachingSounds(pCVar15);
                            }
                            CObject3D::BatchLoading_t(0);
                            local_8._0_1_ = 5;
                            StringFree(local_464);
                            local_8._0_1_ = 4;
                            StringFree(local_4a4);
                            local_8._0_1_ = 3;
                            StringFree(local_49c);
                            local_8._0_1_ = 2;
                            StringFree(local_4ac);
                            local_8._0_1_ = 1;
                            CObject3D::~CObject3D(local_50c);
                            local_8 = (uint)local_8._1_3_ << 8;
                            CTFileStream::~CTFileStream(local_580);
                            ExceptionList = local_10;
                            return;
                          }
                          local_4f8 = s_Initial_mapping_not_done__and_th_36231288;
                    /* WARNING: Subroutine does not return */
                          _CxxThrowException(&local_4f8,(ThrowInfo *)&DAT_3624f688);
                        }
                        iVar9 = _strnicmp(local_98,s_MAPPING_3623118c,7);
                        if ((((iVar9 != 0) &&
                             (iVar9 = _strnicmp(local_98,s_TEXTURE_REFLECTION_36231194,0x12),
                             iVar9 != 0)) &&
                            (iVar9 = _strnicmp(local_98,s_TEXTURE_SPECULAR_362311a8,0x10),
                            iVar9 != 0)) &&
                           ((iVar9 = _strnicmp(local_98,s_TEXTURE_BUMP_362311bc,0xc), iVar9 != 0 &&
                            (iVar9 = _strnicmp(local_98,s_TEXTURE_362311cc,7), iVar9 != 0)))) {
                          ThrowF_t(s_Unrecognizible_key_word_found_in_362311d4);
                        }
                      }
                    }
                  }
                  goto LAB_360afb01;
                }
                if (*(int *)(this + 0x34) == 0) {
                  ThrowF_t(s_Found_key_word__IMPORT_MAPPING__b_362310f0);
                }
                CTStream::GetLine_t((CTStream *)local_580,local_98,0x80,'\n');
                (*pcVar10)();
                sprintf(local_21c,&DAT_36231134,acStack_321 + 1,local_424);
                pcVar13 = StringDuplicate(local_21c);
                local_8._0_1_ = 0xd;
                this_00 = (CTFileName *)&local_464;
              }
              local_42c = pcVar13;
              CTFileName::operator=(this_00,(CTString *)&local_42c);
              local_8 = CONCAT31(local_8._1_3_,6);
              StringFree(pcVar13);
              this = local_428;
              goto LAB_360afb01;
            }
            _strupr(local_98);
            (*pcVar10)(local_98);
            *(undefined4 *)(this + 0x127c) = local_4f4;
          }
        }
      }
      goto LAB_360afb01;
    }
    _strupr(local_98);
    (*pcVar10)(local_98);
    iVar9 = 4;
    bVar16 = true;
    pcVar13 = local_118;
    pcVar2 = &DAT_36230ed4;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar16 = *pcVar13 == *pcVar2;
      pcVar13 = pcVar13 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar16);
    this = local_428;
    if (bVar16) {
      *(uint *)(local_428 + 0x1278) = *(uint *)(local_428 + 0x1278) | 9;
    }
  } while( true );
}

