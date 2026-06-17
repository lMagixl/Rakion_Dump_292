
/* public: void __thiscall CTStream::DictionaryReadEnd_t(void) */

void __thiscall CTStream::DictionaryReadEnd_t(CTStream *this)

{
  CTStream *this_00;
  CTFileName *this_01;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  CSoundData *pCVar4;
  char *local_28;
  int local_24;
  char *local_20;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x41060  1496  ?DictionaryReadEnd_t@CTStream@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210d2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  if (*(int *)(this + 0x24) == 1) {
    SetPos_t(this,*(long *)(this + 0x28));
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    FUN_360e4640(*(undefined4 **)(this + 0x30));
    this_00 = this + 0x34;
    local_24 = FUN_360259d0((int)this_00);
    if (0 < local_24) {
      iVar3 = 0;
      do {
        this_01 = (CTFileName *)FUN_360217c0(this_00,iVar3);
        if (*(int *)(this_01 + 4) != 0) {
          puVar1 = (undefined4 *)CTFileName::FileExt(this_01);
          local_4._0_1_ = 1;
          local_28 = StringDuplicate((char *)*puVar1);
          local_4 = CONCAT31(local_4._1_3_,3);
          StringFree(local_20);
          iVar2 = CTString::operator==((CTString *)&local_28,&DAT_3622701c);
          if (iVar2 == 0) {
            iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227024);
            if (iVar2 == 0) {
              iVar2 = CTString::operator==((CTString *)&local_28,&DAT_3622702c);
              if ((iVar2 == 0) &&
                 (iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227034), iVar2 == 0)) {
                iVar2 = CTString::operator==((CTString *)&local_28,&DAT_3622703c);
                if (iVar2 == 0) {
                  iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227044);
                  if (iVar2 == 0) {
                    iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227048);
                    if (iVar2 == 0) {
                      iVar2 = CTString::operator==((CTString *)&local_28,&DAT_3622704c);
                      if (iVar2 == 0) {
                        iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227050);
                        if (iVar2 == 0) {
                          iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227058);
                          if (iVar2 == 0) {
                            iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227060);
                            if (iVar2 == 0) {
                              iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227068);
                              if (((iVar2 != 0) ||
                                  (iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227070)
                                  , iVar2 != 0)) ||
                                 (iVar2 = CTString::operator==((CTString *)&local_28,&DAT_36227078),
                                 iVar2 != 0)) {
                                pCVar4 = *(CSoundData **)(this_01 + 4);
                                goto LAB_360412d0;
                              }
                            }
                            else {
                              CStock_CAnimData::Release(_pAnimStock,*(CAnimData **)(this_01 + 4));
                            }
                          }
                          else {
                            CStock_CShader::Release(_pShaderStock,*(CShader **)(this_01 + 4));
                          }
                        }
                        else {
                          CStock_CEntityClass::Release
                                    (_pEntityClassStock,*(CEntityClass **)(this_01 + 4));
                        }
                      }
                      else {
                        CStock_CAnimSet::Release(_pAnimSetStock,*(CAnimSet **)(this_01 + 4));
                      }
                    }
                    else {
                      CStock_CSkeleton::Release(_pSkeletonStock,*(CSkeleton **)(this_01 + 4));
                    }
                  }
                  else {
                    CStock_CMesh::Release(_pMeshStock,*(CMesh **)(this_01 + 4));
                  }
                }
                else {
                  CStock_CModelInstance::Release
                            (_pModelInstanceStock,*(CModelInstanceSerial **)(this_01 + 4));
                }
              }
              else {
                pCVar4 = *(CSoundData **)(this_01 + 4);
LAB_360412d0:
                CStock_CSoundData::Release(_pSoundStock,pCVar4);
              }
            }
            else {
              CStock_CModelData::Release(_pModelStock,*(CModelData **)(this_01 + 4));
            }
          }
          else {
            CStock_CTextureData::Release(_pTextureStock,*(CTextureData **)(this_01 + 4));
          }
          local_4 = local_4 & 0xffffff00;
          StringFree(local_28);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_24);
    }
    FUN_36021ad0((undefined4 *)this_00);
    *(undefined4 *)(this + 0x48) = 0;
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

