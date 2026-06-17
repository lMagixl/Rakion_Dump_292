
/* public: void __thiscall CWorld::WriteBrushes_t(class CTStream *) */

void __thiscall CWorld::WriteBrushes_t(CWorld *this,CTStream *param_1)

{
  char *pcVar1;
  char *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xd8e50  3957  ?WriteBrushes_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215114;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WriteInfo_t(this,param_1);
  pcVar1 = StringDuplicate(&DAT_362323f9);
  local_4 = 0;
  local_14 = StringDuplicate(pcVar1);
  local_10 = 0;
  local_4._0_1_ = 1;
  CTStream::DictionaryWriteBegin_t(param_1,(CTFileName *)&local_14,0);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_14);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  (**(code **)(**(int **)(this + 0x34) + 0x10))(param_1);
  (**(code **)(**(int **)(this + 0x38) + 0x10))(param_1);
  CTStream::DictionaryWriteEnd_t(param_1);
  ExceptionList = local_14;
  return;
}

