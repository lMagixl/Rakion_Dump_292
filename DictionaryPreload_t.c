
/* public: void __thiscall CTStream::DictionaryPreload_t(void) */

void __thiscall CTStream::DictionaryPreload_t(CTStream *this)

{
  size_t sVar1;
  CTString *pCVar2;
  int iVar3;
  CTFileName *this_00;
  undefined4 *puVar4;
  CTextureData *pCVar5;
  CModelData *pCVar6;
  CModelInstanceSerial *pCVar7;
  CMesh *pCVar8;
  CSkeleton *pCVar9;
  CAnimSet *pCVar10;
  CEntityClass *pCVar11;
  CShader *pCVar12;
  CAnimData *pCVar13;
  CSoundData *pCVar14;
  int iVar15;
  int local_54;
  void *local_50;
  CTSingleLock local_44 [12];
  char *local_38;
  char *local_30 [3];
  CTFileName *local_24;
  int local_20;
  size_t local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x41770  1494  ?DictionaryPreload_t@CTStream@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36210e1d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  ExceptionList = &local_10;
  CTSingleLock::CTSingleLock(local_44,(CTCriticalSection *)&DAT_362bf07c,1);
  iVar15 = 0;
  local_8 = 0;
  sVar1 = FUN_360259d0((int)(this + 0x34));
  local_1c = sVar1;
  FUN_36043f10(&local_54);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (0 < (int)sVar1) {
    do {
      pCVar2 = (CTString *)FUN_360217c0(this + 0x34,iVar15);
      iVar3 = FUN_360469f0(pCVar2);
      *(int *)(pCVar2 + 4) = iVar3;
      FUN_36043f30(&local_54,pCVar2);
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)local_1c);
    if (0 < (int)local_1c) {
      qsort(local_50,local_1c,4,(_PtFuncCompare *)&LAB_3603eb00);
    }
  }
  iVar15 = 0;
  do {
    local_20 = iVar15;
    if ((int)local_1c <= iVar15) {
      FUN_360443e0(&local_54);
      local_8 = 0xffffffff;
      CTSingleLock::~CTSingleLock(local_44);
      ExceptionList = local_10;
      return;
    }
    this_00 = (CTFileName *)FUN_36043580(&local_54,iVar15);
    local_24 = this_00;
    puVar4 = (undefined4 *)CTFileName::FileExt(this_00);
    local_8._0_1_ = 2;
    local_18 = StringDuplicate((char *)*puVar4);
    local_8._0_1_ = 4;
    StringFree(local_38);
    CallProgressHook_t((float)local_20 / (float)(int)local_1c);
    local_8 = CONCAT31(local_8._1_3_,5);
    iVar3 = CTString::operator==((CTString *)&local_18,&DAT_36227080);
    if (iVar3 == 0) {
      iVar3 = CTString::operator==((CTString *)&local_18,&DAT_36227088);
      if (iVar3 == 0) {
        iVar3 = CTString::operator==((CTString *)&local_18,&DAT_36227090);
        if (iVar3 == 0) {
          iVar3 = CTString::operator==((CTString *)&local_18,&DAT_36227098);
          if (iVar3 == 0) {
            iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270a0);
            if (iVar3 == 0) {
              iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270a8);
              if (iVar3 == 0) {
                iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270ac);
                if (iVar3 == 0) {
                  iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270b0);
                  if (iVar3 == 0) {
                    iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270b4);
                    if (iVar3 == 0) {
                      iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270bc);
                      if (iVar3 == 0) {
                        iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270c4);
                        if (iVar3 == 0) {
                          iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270cc);
                          if (iVar3 == 0) {
                            iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270d4);
                            if (iVar3 == 0) {
                              iVar3 = CTString::operator==((CTString *)&local_18,&DAT_362270dc);
                              if (iVar3 == 0) goto LAB_36041a93;
                            }
                          }
                          CTFileName::CTFileName((CTFileName *)local_30);
                          local_8._0_1_ = 6;
                          ExpandFilePath(1,this_00,(CTFileName *)local_30);
                          pCVar14 = CStock_CSoundData::Obtain_t(_pSoundStock,(CTFileName *)local_30)
                          ;
                          *(CSoundData **)(this_00 + 4) = pCVar14;
                          local_8 = CONCAT31(local_8._1_3_,5);
                          StringFree(local_30[0]);
                        }
                        else {
                          pCVar13 = CStock_CAnimData::Obtain_t(_pAnimStock,this_00);
                          *(CAnimData **)(this_00 + 4) = pCVar13;
                        }
                      }
                      else {
                        pCVar12 = CStock_CShader::Obtain_t(_pShaderStock,this_00);
                        *(CShader **)(this_00 + 4) = pCVar12;
                      }
                    }
                    else {
                      pCVar11 = CStock_CEntityClass::Obtain_t(_pEntityClassStock,this_00);
                      *(CEntityClass **)(this_00 + 4) = pCVar11;
                    }
                  }
                  else {
                    pCVar10 = CStock_CAnimSet::Obtain_t(_pAnimSetStock,this_00);
                    *(CAnimSet **)(this_00 + 4) = pCVar10;
                  }
                }
                else {
                  pCVar9 = CStock_CSkeleton::Obtain_t(_pSkeletonStock,this_00);
                  *(CSkeleton **)(this_00 + 4) = pCVar9;
                }
              }
              else {
                pCVar8 = CStock_CMesh::Obtain_t(_pMeshStock,this_00);
                *(CMesh **)(this_00 + 4) = pCVar8;
              }
            }
            else {
              pCVar7 = CStock_CModelInstance::Obtain_t(_pModelInstanceStock,this_00);
              *(CModelInstanceSerial **)(this_00 + 4) = pCVar7;
            }
            goto LAB_36041a93;
          }
        }
        pCVar14 = CStock_CSoundData::Obtain_t(_pSoundStock,this_00);
        *(CSoundData **)(this_00 + 4) = pCVar14;
      }
      else {
        pCVar6 = CStock_CModelData::Obtain_t(_pModelStock,this_00);
        *(CModelData **)(this_00 + 4) = pCVar6;
      }
    }
    else {
      pCVar5 = CStock_CTextureData::Obtain_t(_pTextureStock,this_00);
      *(CTextureData **)(this_00 + 4) = pCVar5;
    }
LAB_36041a93:
    local_8 = 1;
    StringFree(local_18);
    iVar15 = iVar15 + 1;
  } while( true );
}

