
/* public: __thiscall CEditModel::CEditModel(class CEditModel &) */

CEditModel * __thiscall CEditModel::CEditModel(CEditModel *this,CEditModel *param_1)

{
  CEditModel *pCVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb2980  80  ??0CEditModel@@QAE@AAV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213cc9;
  local_c = ExceptionList;
  if (param_1 == (CEditModel *)0x0) {
    pCVar1 = (CEditModel *)0x0;
  }
  else {
    pCVar1 = param_1 + 4;
  }
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = *(undefined4 *)pCVar1;
  *(undefined ***)this = &CSerial::_vftable_;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0xc));
  *(char **)(this + 0xc) = pcVar2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  local_4 = 0;
  CModelData::CModelData((CModelData *)(this + 0x18),(CModelData *)(param_1 + 0x18));
  local_4._0_1_ = 1;
  FUN_360b2810(this + 0x12ec,param_1 + 0x12ec);
  *(undefined4 *)(this + 0x1300) = *(undefined4 *)(param_1 + 0x1300);
  *(undefined4 *)(this + 0x1304) = *(undefined4 *)(param_1 + 0x1304);
  local_4._0_1_ = 3;
  CThumbnailSettings::CThumbnailSettings
            ((CThumbnailSettings *)(this + 0x1308),(CThumbnailSettings *)(param_1 + 0x1308));
  *(undefined4 *)(this + 0x13b4) = *(undefined4 *)(param_1 + 0x13b4);
  local_4._0_1_ = 4;
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0x13b8));
  *(char **)(this + 0x13b8) = pcVar2;
  *(undefined4 *)(this + 0x13bc) = *(undefined4 *)(param_1 + 0x13bc);
  local_4._0_1_ = 5;
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0x13c0));
  *(char **)(this + 0x13c0) = pcVar2;
  *(undefined4 *)(this + 0x13c4) = *(undefined4 *)(param_1 + 0x13c4);
  local_4 = CONCAT31(local_4._1_3_,6);
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0x13c8));
  *(char **)(this + 0x13c8) = pcVar2;
  *(undefined4 *)(this + 0x13cc) = *(undefined4 *)(param_1 + 0x13cc);
  ExceptionList = local_c;
  return this;
}

