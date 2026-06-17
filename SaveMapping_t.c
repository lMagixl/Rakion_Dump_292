
/* public: void __thiscall CEditModel::SaveMapping_t(class CTFileName,long) */

void __thiscall
CEditModel::SaveMapping_t(CEditModel *this,char *param_2,undefined4 param_3,int param_4)

{
  CEditModel *pCVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  CAttachedModel *this_00;
  CAttachedModelPosition *this_01;
  CModelCollisionBox *this_02;
  int iVar5;
  CModelPatch *this_03;
  CTFileStream *pCVar6;
  undefined *local_88;
  CEditModel *local_84;
  CTFileStream local_80 [20];
  int *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xac100  3197  ?SaveMapping_t@CEditModel@@QAEXVCTFileName@@J@Z */
  puStack_8 = &LAB_362137bb;
  local_c = ExceptionList;
  iVar5 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = CONCAT31(local_4._1_3_,1);
  CTFileStream::Create_t(local_80,(CTFileName *)&param_2,2);
  local_88 = (undefined *)DAT_362317d4;
  local_84._0_1_ = DAT_362317d8;
  CTStream::WriteID_t((CTStream *)local_80,(CChunkID *)&local_88);
  local_88 = PTR_DAT_362317dc;
  local_84 = (CEditModel *)CONCAT31(local_84._1_3_,DAT_362317e0);
  CTStream::WriteID_t((CTStream *)local_80,(CChunkID *)&local_88);
  iVar4 = param_4 + 1;
  iVar2 = param_4;
  if (param_4 == -1) {
    iVar4 = *(int *)(this + 0x6c);
    iVar2 = 0;
  }
  for (; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    WriteMipSettings_t(this,(CTStream *)local_80,iVar2);
  }
  pCVar1 = this + 0x1300;
  uVar3 = FUN_360b0f50((undefined4 *)pCVar1);
  *local_6c = uVar3;
  local_6c = local_6c + 1;
  iVar4 = FUN_360b0f50((undefined4 *)pCVar1);
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      CAttachedSound::Write_t
                ((CAttachedSound *)(*(int *)(this + 0x1304) + iVar4),(CTStream *)local_80);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x14;
      iVar2 = FUN_360b0f50((undefined4 *)pCVar1);
    } while (iVar5 < iVar2);
  }
  pCVar1 = this + 0x12ec;
  uVar3 = FUN_360b0ea0((int)pCVar1);
  *local_6c = uVar3;
  local_6c = local_6c + 1;
  iVar2 = 0;
  local_88 = (undefined *)0x0;
  local_4 = CONCAT31(local_4._1_3_,2);
  local_84 = pCVar1;
  iVar4 = FUN_360b0ea0((int)pCVar1);
  if (0 < iVar4) {
    do {
      pCVar6 = local_80;
      this_00 = (CAttachedModel *)FUN_360b0e90(pCVar1,iVar2);
      CAttachedModel::Write_t(this_00,(CTStream *)pCVar6);
      iVar2 = iVar2 + 1;
      local_88 = (undefined *)iVar2;
      iVar4 = FUN_360b0ea0((int)pCVar1);
    } while (iVar2 < iVar4);
  }
  pCVar1 = this + 0x12c0;
  iVar2 = 0;
  local_88 = (undefined *)0x0;
  local_4 = CONCAT31(local_4._1_3_,3);
  local_84 = pCVar1;
  iVar4 = FUN_360b0e60((int)pCVar1);
  if (0 < iVar4) {
    do {
      pCVar6 = local_80;
      this_01 = (CAttachedModelPosition *)FUN_360b0e50(pCVar1,iVar2);
      CAttachedModelPosition::Write_t(this_01,(CTStream *)pCVar6);
      iVar2 = iVar2 + 1;
      local_88 = (undefined *)iVar2;
      iVar4 = FUN_360b0e60((int)pCVar1);
    } while (iVar2 < iVar4);
  }
  pCVar1 = this + 0x12a8;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar4 = FUN_360b0e40((int)pCVar1);
  if (iVar4 == 0) {
    WarningMessage(s_Trying_to_save_0_collision_boxes_362317e4);
  }
  *local_6c = iVar4;
  local_6c = local_6c + 1;
  iVar2 = 0;
  local_88 = (undefined *)0x0;
  local_4 = CONCAT31(local_4._1_3_,4);
  local_84 = pCVar1;
  iVar4 = FUN_360b0e40((int)pCVar1);
  if (0 < iVar4) {
    do {
      pCVar6 = local_80;
      this_02 = (CModelCollisionBox *)FUN_360b0e00(pCVar1,iVar2);
      CModelCollisionBox::Write_t(this_02,(CTStream *)pCVar6);
      iVar2 = iVar2 + 1;
      local_88 = (undefined *)iVar2;
      iVar4 = FUN_360b0e40((int)pCVar1);
    } while (iVar2 < iVar4);
  }
  local_4._0_1_ = 1;
  this_03 = (CModelPatch *)(this + 0xcf8);
  iVar4 = 0x20;
  do {
    CModelPatch::Write_t(this_03,(CTStream *)local_80);
    this_03 = this_03 + 0x28;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_4 = (uint)local_4._1_3_ << 8;
  CTFileStream::~CTFileStream(local_80);
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

