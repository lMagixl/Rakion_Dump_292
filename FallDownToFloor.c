
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::FallDownToFloor(void) */

void __thiscall CEntity::FallDownToFloor(CEntity *this)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  int local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  CCastRay aCStack_b8 [104];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  int iStack_34;
  float fStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1299b0  1605  ?FallDownToFloor@CEntity@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36218a2e;
  local_c = ExceptionList;
  iVar1 = *(int *)(this + 4);
  if ((((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 9)) || (iVar1 == 10)) {
    local_dc = *(float *)(this + 0x3c);
    local_d8 = *(float *)(this + 0x40);
    local_d4 = *(float *)(this + 0x44);
    local_d0 = *(undefined4 *)(this + 0x48);
    local_cc = *(undefined4 *)(this + 0x4c);
    local_c8 = *(undefined4 *)(this + 0x50);
    local_fc = -3e+38;
    local_108 = 3e+38;
    local_100 = 0xff61b1e6;
    local_10c = 0x7f61b1e6;
    local_104 = -3e+38;
    local_110 = 3e+38;
    if ((*(uint *)(this + 8) & 0x200) == 0) {
      if ((iVar1 == 9) || (iVar1 == 10)) {
        ExceptionList = &local_c;
        CModelInstance::GetCurrentColisionBox
                  (*(CModelInstance **)(this + 0x7c),(AABBox<float,3> *)&local_110);
      }
      else {
        ExceptionList = &local_c;
        CModelObject::GetCurrentFrameBBox
                  (*(CModelObject **)(this + 0x7c),(AABBox<float,3> *)&local_110);
      }
      FUN_3605cd80(&local_110,&local_124);
      local_110 = local_124;
      local_10c = local_100;
      local_108 = local_11c;
      local_104 = local_124;
      local_fc = local_11c;
      local_f8 = local_124;
      local_f4 = local_100;
      local_f0 = local_11c;
      local_ec = local_124;
      local_e8 = local_100;
    }
    else {
      iVar1 = *(int *)this;
      ExceptionList = &local_c;
      uVar2 = (**(code **)(iVar1 + 0xf4))(&local_110,&local_114);
      (**(code **)(iVar1 + 0xf8))(uVar2);
      local_11c = local_fc;
      local_f8 = local_104;
      local_f4 = local_100;
      local_10c = local_100;
      local_e8 = local_100;
      local_104 = local_110;
      local_f0 = local_108;
      local_ec = local_f8;
    }
    local_e4 = local_11c;
    local_118 = -9999999.0;
    local_114 = 0;
    pfVar3 = &local_108;
    local_e0 = 4;
    local_110 = local_104;
    local_10c = local_e8;
    local_108 = local_f0;
    local_100 = local_e8;
    local_fc = local_11c;
    local_f8 = local_ec;
    local_f4 = local_e8;
    do {
      local_124 = local_dc + pfVar3[-2];
      fStack_c4 = local_124;
      fStack_c0 = local_d8 + pfVar3[-1];
      local_11c = local_d4 + *pfVar3;
      local_120 = fStack_c0 - _DAT_36230188;
      fStack_bc = local_11c;
      CCastRay::CCastRay(aCStack_b8,this,(Vector<float,3> *)&fStack_c4,(Vector<float,3> *)&local_124
                        );
      uStack_4 = 0;
      uStack_4c = 0;
      uStack_50 = 1;
      uStack_3c = 1;
      CWorld::CastRay(*(CWorld **)(this + 0xa8),aCStack_b8);
      if ((iStack_34 != 0) && (local_118 < fStack_2c)) {
        local_118 = fStack_2c;
        local_114 = 1;
      }
      uStack_4 = 0xffffffff;
      CCastRay::~CCastRay(aCStack_b8);
      pfVar3 = pfVar3 + 3;
      local_e0 = local_e0 + -1;
    } while (local_e0 != 0);
    if (local_114 != 0) {
      local_d8 = (local_118 - local_d8) + local_d8 + _DAT_362280f0;
    }
    SetPlacement(this,(CPlacement3D *)&local_dc);
  }
  ExceptionList = local_c;
  return;
}

