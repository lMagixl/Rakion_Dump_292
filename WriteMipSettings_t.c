
/* public: void __thiscall CEditModel::WriteMipSettings_t(class CTStream *,long) */

void __thiscall CEditModel::WriteMipSettings_t(CEditModel *this,CTStream *param_1,long param_2)

{
  CEditModel *pCVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  CEditModel *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xac050  3973  ?WriteMipSettings_t@CEditModel@@QAEXPAVCTStream@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213780;
  local_c = ExceptionList;
  local_10 = (CEditModel *)CONCAT31(local_10._1_3_,DAT_362317c8);
  local_14 = DAT_362317c4;
  ExceptionList = &local_c;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_14);
  pCVar1 = this + param_2 * 0x60 + 0x110;
  uVar3 = FUN_3600c0e0((undefined4 *)pCVar1);
  **(undefined4 **)(param_1 + 0x14) = uVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  local_14 = 0;
  local_4 = 0;
  local_10 = pCVar1;
  if (0 < *(int *)pCVar1) {
    do {
      iVar2 = local_14;
      MappingSurface::WriteSettings_t
                ((MappingSurface *)(local_14 * 0x70 + *(int *)(pCVar1 + 4)),param_1);
      local_14 = iVar2 + 1;
    } while (local_14 < *(int *)pCVar1);
  }
  ExceptionList = local_c;
  return;
}

