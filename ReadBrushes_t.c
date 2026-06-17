
/* public: void __thiscall CWorld::ReadBrushes_t(class CTStream *) */

void __thiscall CWorld::ReadBrushes_t(CWorld *this,CTStream *param_1)

{
  int iVar1;
  CTStream *this_00;
  char *pcVar2;
  int *piVar3;
  CSetFPUPrecision aCStack_18 [4];
  CSetFPUPrecision local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xd8c70  2951  ?ReadBrushes_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362150fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CSetFPUPrecision::CSetFPUPrecision(local_14,1);
  this_00 = param_1;
  local_4 = 0;
  ReadInfo_t(this,param_1,0);
  pcVar2 = Translate(s_ETRSloading_list_of_textures_3623238c,4);
  param_1 = (CTStream *)StringDuplicate(pcVar2);
  local_4._0_1_ = 1;
  SetProgressDescription((CTString *)&param_1);
  local_4._0_1_ = 0;
  StringFree((char *)param_1);
  CallProgressHook_t(0.0);
  DAT_362cbf0c = this;
  CTStream::DictionaryReadBegin_t(this_00);
  CallProgressHook_t(1.0);
  pcVar2 = Translate(s_ETRSloading_world_textures_362323ac,4);
  param_1 = (CTStream *)StringDuplicate(pcVar2);
  local_4._0_1_ = 2;
  SetProgressDescription((CTString *)&param_1);
  local_4._0_1_ = 0;
  StringFree((char *)param_1);
  CallProgressHook_t(0.0);
  CTStream::DictionaryPreload_t(this_00);
  CallProgressHook_t(1.0);
  pcVar2 = Translate(s_ETRSloading_brushes_362323c8,4);
  param_1 = (CTStream *)StringDuplicate(pcVar2);
  local_4._0_1_ = 3;
  SetProgressDescription((CTString *)&param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree((char *)param_1);
  CallProgressHook_t(0.0);
  (**(code **)(**(int **)(this + 0x34) + 0xc))(this_00);
  CallProgressHook_t(1.0);
  iVar1 = DAT_362323dc;
  piVar3 = (int *)CTStream::PeekID_t(this_00);
  if (*piVar3 == iVar1) {
    pcVar2 = Translate(s_ETRSloading_terrains_362323e4,4);
    pcVar2 = StringDuplicate(pcVar2);
    puStack_8._0_1_ = 4;
    SetProgressDescription((CTString *)&stack0x00000000);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    StringFree(pcVar2);
    CallProgressHook_t(0.0);
    (**(code **)(**(int **)(this + 0x38) + 0xc))(this_00);
    CallProgressHook_t(1.0);
  }
  CTStream::DictionaryReadEnd_t(this_00);
  DAT_362cbf0c = (CWorld *)0x0;
  puStack_8 = (undefined1 *)0xffffffff;
  CSetFPUPrecision::~CSetFPUPrecision(aCStack_18);
  ExceptionList = pvStack_10;
  return;
}

