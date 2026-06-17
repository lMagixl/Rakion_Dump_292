
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::FakeJump(class Vector<float,3> const &,class
   Vector<float,3> const &,float,float,float,float,float) */

void __thiscall
CMovableEntity::FakeJump
          (CMovableEntity *this,Vector<float,3> *param_1,Vector<float,3> *param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7)

{
  CEntity *pCVar1;
  CEntity *this_00;
  float fVar2;
  xEncryptMemory *pxVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
                    /* 0x1ae040  1604  ?FakeJump@CMovableEntity@@QAEXABV?$Vector@M$02@@0MMMMM@Z */
  *(float *)(this + 0x1a8) = (*(float *)(this + 0x234) - *(float *)(this + 0x1ac)) + param_7;
  FUN_361ab300((float *)param_1,&local_54);
  local_48 = local_48 * param_5;
  local_44 = local_44 * param_5;
  local_40 = local_40 * param_5;
  local_54 = local_54 * param_4 + local_48;
  local_50 = local_50 * param_4 + local_44;
  uVar6 = 3;
  local_4c = local_4c * param_4 + local_40;
  local_3c = local_54 + *(float *)param_2 * param_3;
  local_38 = local_50 + *(float *)(param_2 + 4) * param_3;
  pfVar5 = &local_3c;
  local_34 = local_4c + *(float *)(param_2 + 8) * param_3;
  uVar4 = *(uint *)(this + 0x254);
  pxVar3 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar3,uVar4,(int)pfVar5,uVar6);
  uVar4 = *(uint *)(this + 0x254);
  uVar6 = 3;
  pfVar5 = &local_30;
  pxVar3 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar3,uVar4,pfVar5,uVar6);
  local_4c = local_28;
  local_50 = local_2c;
  local_54 = local_30;
  fVar2 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  if (param_6 < fVar2) {
    uVar4 = *(uint *)(this + 0x254);
    uVar6 = 3;
    pfVar5 = &local_30;
    pxVar3 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600cdd0(pxVar3,uVar4,pfVar5,uVar6);
    fVar2 = _DAT_36223384 / fVar2;
    uVar6 = 3;
    local_54 = local_30 * fVar2;
    local_50 = local_2c * fVar2;
    local_4c = local_28 * fVar2;
    local_3c = local_54 * param_6;
    local_38 = local_50 * param_6;
    pfVar5 = &local_3c;
    local_34 = local_4c * param_6;
    uVar4 = *(uint *)(this + 0x254);
    pxVar3 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600ce60(pxVar3,uVar4,(int)pfVar5,uVar6);
  }
  this_00 = *(CEntity **)(this + 0x148);
  if (this_00 != (CEntity *)0x0) {
    pCVar1 = this_00 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(this_00);
    }
  }
  *(undefined4 *)(this + 0x148) = 0;
  local_3c = 0.0;
  *(undefined4 *)(this + 0x14c) = 0;
  local_38 = 0.0;
  *(undefined4 *)(this + 0x150) = 0;
  local_34 = 0.0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  AddToMovers(this);
  return;
}

