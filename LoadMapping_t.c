
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CEditModel::LoadMapping_t(class CTFileName,long) */

void __thiscall
CEditModel::LoadMapping_t(CEditModel *this,char *param_2,undefined4 param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  CAttachedModel *this_00;
  CAttachedModelPosition *this_01;
  CModelCollisionBox *pCVar6;
  CEditModel *pCVar7;
  int iVar8;
  CEditModel *this_02;
  int iVar9;
  CEditModel *pCVar10;
  CTFileStream *pCVar11;
  MappingSurface local_134 [112];
  CTFileStream local_c4 [20];
  int *local_b0;
  char *local_4d;
  char *local_49 [2];
  undefined1 local_41;
  int local_40;
  undefined4 local_39;
  undefined1 local_35;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  CEditModel *local_24;
  undefined *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xaf450  2550  ?LoadMapping_t@CEditModel@@QAEXVCTFileName@@J@Z */
  puStack_c = &LAB_36213a68;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffebc;
  local_18 = DAT_362abd90;
  local_8 = 0;
  ExceptionList = &local_10;
  local_24 = this;
  CTFileStream::CTFileStream(local_c4);
  local_8._0_1_ = 1;
  local_30 = 0;
  local_34 = 0;
  local_40 = 0;
  CTFileStream::Open_t(local_c4,(CTFileName *)&param_2,1);
  local_39 = DAT_36231818;
  local_35 = DAT_3623181c;
  CTStream::ExpectID_t((CTStream *)local_c4,(CChunkID *)&local_39);
  CTStream::GetID_t((CTStream *)local_c4);
  local_28 = (CEditModel *)CONCAT13(DAT_36231824,(undefined3)local_28);
  if ((local_20 != DAT_36231820) &&
     (local_28 = (CEditModel *)CONCAT13(DAT_3623182c,(undefined3)local_28), local_20 != DAT_36231828
     )) {
    local_28 = (CEditModel *)CONCAT13(DAT_36231834,(undefined3)local_28);
    if (local_20 == DAT_36231830) {
      local_30 = 1;
    }
    else {
      local_28 = (CEditModel *)CONCAT13(DAT_3623183c,(undefined3)local_28);
      if (local_20 != DAT_36231838) {
        local_28 = (CEditModel *)CONCAT13(DAT_36231844,(undefined3)local_28);
        if ((local_20 != DAT_36231840) &&
           (local_28 = (CEditModel *)CONCAT13(DAT_3623184c,(undefined3)local_28),
           local_20 != PTR_DAT_36231848)) {
          local_49[0] = s_Invalid_version_of_mapping_file__36231850;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_49,(ThrowInfo *)&DAT_3624f688);
        }
        local_40 = 1;
      }
      local_30 = 1;
      local_34 = 1;
    }
  }
  iVar8 = param_4 + 1;
  iVar2 = param_4;
  iVar9 = DAT_36231874;
  iVar4 = DAT_3623187c;
  if (param_4 == -1) {
    iVar8 = *(int *)(this + 0x6c);
    iVar2 = 0;
  }
  for (; DAT_36231874 = iVar9, DAT_3623187c = iVar4, iVar2 < iVar8; iVar2 = iVar2 + 1) {
    local_28 = (CEditModel *)CONCAT13(DAT_36231878,(undefined3)local_28);
    piVar3 = (int *)CTStream::PeekID_t((CTStream *)local_c4);
    if (*piVar3 == iVar9) {
      ReadMipSettings_t(local_24,(CTStream *)local_c4,iVar2);
    }
    this = local_24;
    iVar9 = DAT_36231874;
    iVar4 = DAT_3623187c;
  }
  local_41 = DAT_36231880;
  piVar3 = (int *)CTStream::PeekID_t((CTStream *)local_c4);
  if (*piVar3 == iVar4) {
    do {
      MappingSurface::MappingSurface(local_134);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_39 = DAT_36231884;
      local_35 = DAT_36231888;
      CTStream::ExpectID_t((CTStream *)local_c4,(CChunkID *)&local_39);
      iVar8 = *local_b0;
      local_b0 = local_b0 + 1;
      if (0 < iVar8) {
        do {
          MappingSurface::ReadSettings_t(local_134,(CTStream *)local_c4);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      local_8._0_1_ = 1;
      MappingSurface::~MappingSurface(local_134);
      iVar8 = DAT_3623187c;
      local_41 = DAT_36231880;
      piVar3 = (int *)CTStream::PeekID_t((CTStream *)local_c4);
      this = local_24;
    } while (*piVar3 == iVar8);
  }
  pCVar7 = local_24;
  if (local_30 != 0) {
    iVar8 = *local_b0;
    local_b0 = local_b0 + 1;
    this_02 = local_24 + 0x1300;
    param_4 = iVar8;
    if (*(int *)this_02 != 0) {
      pvVar1 = *(void **)(local_24 + 0x1304);
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_
                  (pvVar1,0x14,*(int *)((int)pvVar1 + -4),CAttachedSound::~CAttachedSound);
        operator_delete__((void *)((int)pvVar1 + -4));
      }
      *(int *)this_02 = 0;
      *(undefined4 *)(pCVar7 + 0x1304) = 0;
    }
    FUN_360b0ec0(this_02,iVar8);
    iVar9 = 0;
    iVar2 = FUN_360b0f50((undefined4 *)this_02);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        CAttachedSound::Read_t
                  ((CAttachedSound *)(*(int *)(local_24 + 0x1304) + iVar2),(CTStream *)local_c4);
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 + 0x14;
        iVar4 = FUN_360b0f50((undefined4 *)this_02);
        iVar8 = param_4;
      } while (iVar9 < iVar4);
    }
    pCVar10 = local_24;
    lVar5 = CAnimData::GetAnimsCt((CAnimData *)(local_24 + 0x18));
    if (iVar8 != lVar5) {
      if (*(int *)this_02 != 0) {
        pvVar1 = *(void **)(pCVar7 + 0x1304);
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar1,0x14,*(int *)((int)pvVar1 + -4),CAttachedSound::~CAttachedSound);
          operator_delete__((void *)((int)pvVar1 + -4));
          pCVar10 = local_24;
        }
        *(int *)this_02 = 0;
        *(undefined4 *)(pCVar7 + 0x1304) = 0;
      }
      lVar5 = CAnimData::GetAnimsCt((CAnimData *)(pCVar10 + 0x18));
      FUN_360b0ec0(this_02,lVar5);
    }
    iVar8 = *local_b0;
    local_b0 = local_b0 + 1;
    pCVar10 = pCVar10 + 0x12ec;
    FUN_360b2430((undefined4 *)pCVar10);
    pCVar7 = local_24 + 0x12c0;
    FUN_360b2390((undefined4 *)pCVar7);
    this = local_24;
    if (iVar8 != 0) {
      FUN_360b23e0(pCVar10,iVar8);
      FUN_360b2340(pCVar7,iVar8);
      local_2c = 0;
      local_28 = pCVar10;
      while (iVar8 = local_2c, iVar2 = FUN_360b0ea0((int)pCVar10), iVar8 < iVar2) {
        pCVar11 = local_c4;
        local_8 = CONCAT31(local_8._1_3_,4);
        this_00 = (CAttachedModel *)FUN_360b0e90(pCVar10,iVar8);
        CAttachedModel::Read_t(this_00,(CTStream *)pCVar11);
        local_8._0_1_ = 3;
        local_8._1_3_ = 0;
        local_2c = iVar8 + 1;
      }
      pCVar7 = local_24 + 0x12c0;
      iVar2 = 0;
      local_2c = 0;
      local_8 = CONCAT31(local_8._1_3_,6);
      local_28 = pCVar7;
      iVar8 = FUN_360b0e60((int)pCVar7);
      if (0 < iVar8) {
        do {
          pCVar11 = local_c4;
          this_01 = (CAttachedModelPosition *)FUN_360b0e50(pCVar7,iVar2);
          CAttachedModelPosition::Read_t(this_01,(CTStream *)pCVar11);
          iVar2 = iVar2 + 1;
          local_2c = iVar2;
          iVar8 = FUN_360b0e60((int)pCVar7);
        } while (iVar2 < iVar8);
      }
      local_8._0_1_ = 1;
      this = local_24;
    }
  }
  if (local_34 != 0) {
    pCVar7 = this + 0x12a8;
    FUN_360b22d0((undefined4 *)pCVar7);
    iVar8 = *local_b0;
    local_b0 = local_b0 + 1;
    if (iVar8 < 1) {
      FUN_360b2280(pCVar7,1);
      local_4d = s_Trying_to_load_0_collision_boxes_362318d8;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_4d,(ThrowInfo *)&DAT_3624f688);
    }
    FUN_360b2280(pCVar7,iVar8);
    iVar2 = 0;
    local_2c = 0;
    local_8 = CONCAT31(local_8._1_3_,7);
    local_28 = pCVar7;
    iVar8 = FUN_360b0e40((int)pCVar7);
    if (0 < iVar8) {
      do {
        pCVar11 = local_c4;
        pCVar6 = (CModelCollisionBox *)FUN_360b0e00(pCVar7,iVar2);
        CModelCollisionBox::Read_t(pCVar6,(CTStream *)pCVar11);
        pCVar11 = local_c4;
        pCVar6 = (CModelCollisionBox *)FUN_360b0e00(pCVar7,iVar2);
        CModelCollisionBox::ReadName_t(pCVar6,(CTStream *)pCVar11);
        iVar2 = iVar2 + 1;
        local_2c = iVar2;
        iVar8 = FUN_360b0e40((int)pCVar7);
      } while (iVar2 < iVar8);
    }
    local_8._0_1_ = 1;
  }
  if (local_40 != 0) {
    EditRemoveAllPatches(this);
    pCVar7 = this + 0xcf8;
    iVar8 = 0x20;
    do {
      CModelPatch::Read_t((CModelPatch *)pCVar7,(CTStream *)local_c4);
      pCVar7 = pCVar7 + 0x28;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    CalculatePatchesPerPolygon(this);
  }
  local_8._0_1_ = 0;
  CTFileStream::~CTFileStream(local_c4);
  local_8 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_10;
  return;
}

