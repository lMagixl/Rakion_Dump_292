
/* WARNING: Removing unreachable block (ram,0x3615dde6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelInstance::AddCombinationShadow(class CEntity &,class
   Vector<float,3>,int) */

void __thiscall
CModelInstance::AddCombinationShadow
          (CModelInstance *this,CEntity *param_1,float param_3,float param_4,float param_5,
          int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulong uVar5;
  float local_140;
  float local_13c;
  float local_138;
  int local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  CCastRay local_b8 [108];
  undefined4 local_4c;
  int local_34;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15db10  967
                       ?AddCombinationShadow@CModelInstance@@QAEXAAVCEntity@@V?$Vector@M$02@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a1a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_3615fda0((int)(this + 0xc));
  if (0 < iVar4) {
    RM_SetObjectMatrices(this);
    local_10c = FUN_3611f610((undefined4 *)(this + 0x2c));
    if (0 < local_10c) {
      iVar4 = 0;
      do {
        RM_GetBoneAbsPosition
                  (this,*(long *)(iVar4 + 4 + *(int *)(this + 0x30)),(Vector<float,3> *)&local_108,
                   (Vector<float,3> *)&local_e0);
        local_fc = *(undefined4 *)(iVar4 + 8 + *(int *)(this + 0x30));
        if (param_6 == 0) {
          local_140 = param_3;
          local_13c = param_4;
          local_138 = param_5;
        }
        else {
          local_140 = local_108 - param_3;
          local_13c = local_104 - param_4;
          local_138 = local_100 - param_5;
        }
        local_ec = local_108;
        local_e8 = local_104;
        local_e4 = local_100;
        fVar2 = SQRT(local_140 * local_140 + local_13c * local_13c + local_138 * local_138);
        fVar3 = _DAT_3622376c;
        if ((float)_DAT_36223438 <= fVar2) {
          fVar3 = _DAT_36223384 / fVar2;
        }
        local_138 = local_138 * fVar3;
        local_13c = local_13c * fVar3;
        local_140 = local_140 * fVar3;
        local_f8 = local_140 * _DAT_3623ccb8;
        local_f4 = local_13c * _DAT_3623ccb8;
        local_f0 = local_138 * _DAT_3623ccb8;
        local_d4 = local_108 + local_f8;
        local_d0 = local_104 + local_f4;
        local_cc = local_100 + local_f0;
        CCastRay::CCastRay(local_b8,param_1,(Vector<float,3> *)&local_ec,
                           (Vector<float,3> *)&local_d4);
        local_4 = 0;
        local_4c = 0;
        CWorld::CastRay(*(CWorld **)(param_1 + 0xa8),local_b8);
        if ((local_34 != 0) && (*(int *)(local_34 + 4) == 4)) {
          iVar1 = *local_14;
          local_c8 = *(undefined4 *)(iVar1 + 4);
          local_c4 = *(undefined4 *)(iVar1 + 8);
          local_c0 = *(undefined4 *)(iVar1 + 0xc);
          local_bc = *(undefined4 *)(iVar1 + 0x10);
        }
        uVar5 = GetModelColor(this);
        RM_AddOneShadowOnPlane
                  (&local_c8,param_3,param_4,param_5,local_108,local_104,local_100,local_e0,local_dc
                   ,local_d8,local_fc,param_6,(float)(uVar5 & 0xff) * _DAT_3623ccb4);
        local_4 = 0xffffffff;
        CCastRay::~CCastRay(local_b8);
        iVar4 = iVar4 + 0xc;
        local_10c = local_10c + -1;
      } while (local_10c != 0);
    }
  }
  ExceptionList = local_c;
  return;
}

