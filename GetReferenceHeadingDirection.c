
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::GetReferenceHeadingDirection(class Vector<float,3> const
   &,float,class Vector<float,3> &) */

void __thiscall
CMovableEntity::GetReferenceHeadingDirection
          (CMovableEntity *this,Vector<float,3> *param_1,float param_2,Vector<float,3> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_1c;
  
                    /* 0x1ac410  2072
                       ?GetReferenceHeadingDirection@CMovableEntity@@QAEXABV?$Vector@M$02@@MAAV2@@Z
                        */
  fVar1 = *(float *)(this + 0x58);
  fVar2 = *(float *)(this + 100);
  fVar3 = *(float *)(this + 0x70);
  local_24 = fVar2 * *(float *)(param_1 + 8) - fVar3 * *(float *)(param_1 + 4);
  local_20 = fVar3 * *(float *)param_1 - fVar1 * *(float *)(param_1 + 8);
  local_1c = fVar1 * *(float *)(param_1 + 4) - fVar2 * *(float *)param_1;
  fVar4 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
  fVar5 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar4) {
    fVar5 = _DAT_36223384 / fVar4;
  }
  local_1c = local_1c * fVar5;
  local_20 = local_20 * fVar5;
  local_24 = local_24 * fVar5;
  fVar4 = Cos(param_2);
  fVar5 = Sin(param_2);
  *(float *)param_3 = -local_24 * fVar5 + (local_1c * fVar2 - local_20 * fVar3) * fVar4;
  *(float *)(param_3 + 4) = -local_20 * fVar5 + (local_24 * fVar3 - local_1c * fVar1) * fVar4;
  *(float *)(param_3 + 8) = -local_1c * fVar5 + (local_20 * fVar1 - local_24 * fVar2) * fVar4;
  return;
}

