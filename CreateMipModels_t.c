
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEditModel::CreateMipModels_t(class CObject3D &,class CObject3D
   &,long,long) */

void __thiscall
CEditModel::CreateMipModels_t
          (CEditModel *this,CObject3D *param_1,CObject3D *param_2,long param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CEditModel *this_00;
  int iVar4;
  CObject3D aCStack_74 [20];
  CListHead local_60 [40];
  undefined1 local_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xaec70  1424  ?CreateMipModels_t@CEditModel@@QAEXAAVCObject3D@@0JJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362139e0;
  pvStack_c = ExceptionList;
  iVar4 = 1;
  ExceptionList = &pvStack_c;
  if (1 < *(int *)(this + 0x6c)) {
    this_00 = this + 0x150;
    ExceptionList = &pvStack_c;
    do {
      ModelMipInfo::Clear((ModelMipInfo *)this_00);
      iVar4 = iVar4 + 1;
      this_00 = this_00 + 0x60;
    } while (iVar4 < *(int *)(this + 0x6c));
  }
  *(undefined4 *)(this + 0x6c) = 1;
  FUN_360b2ad0(local_60);
  iVar4 = 0;
  local_4 = 0;
  FUN_360b2fe0(local_60,param_1,param_2);
  if (_ProgresRoutines != (code *)0x0) {
    (*_ProgresRoutines)(s_Calculating_mip_models_____36231604);
  }
  iVar2 = FUN_360b0fc0((int)local_38);
  if (DAT_362ca418 != (code *)0x0) {
    (*DAT_362ca418)(iVar2);
  }
  do {
    iVar3 = FUN_360b3990(local_60,param_3,param_4);
    pcVar1 = DAT_362ca41c;
    if (iVar3 == 0) break;
    if (DAT_362ca41c != (code *)0x0) {
      iVar3 = FUN_360b0fc0((int)local_38);
      (*pcVar1)(iVar2 - iVar3);
    }
    CObject3D::CObject3D(aCStack_74);
    local_4._0_1_ = 1;
    FUN_360b2da0(local_60,aCStack_74);
    FUN_3604a790(aCStack_74,0);
    FUN_360502d0();
    AddMipModel(this,aCStack_74);
    FUN_3604a790(aCStack_74,0);
    FUN_360502e0();
    local_4 = (uint)local_4._1_3_ << 8;
    CObject3D::~CObject3D(aCStack_74);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1f);
  (*DAT_362ca41c)(iVar2);
  CModelData::SpreadMipSwitchFactors((CModelData *)(this + 0x18),0,5.0);
  CModelData::LinkDataForSurfaces((CModelData *)(this + 0x18),0);
  CalculateMappingForMips(this);
  local_4 = 0xffffffff;
  FUN_360b35b0((undefined4 *)local_60);
  ExceptionList = pvStack_c;
  return;
}

