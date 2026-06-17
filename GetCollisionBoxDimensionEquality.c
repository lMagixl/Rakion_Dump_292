
/* public: long __thiscall CModelInstance::GetCollisionBoxDimensionEquality(long) */

long __thiscall CModelInstance::GetCollisionBoxDimensionEquality(CModelInstance *this,long param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
                    /* 0x15c890  1770  ?GetCollisionBoxDimensionEquality@CModelInstance@@QAEJJ@Z */
  iVar2 = FUN_36035f90((undefined4 *)(this + 0x1c));
  if (iVar2 <= param_1) {
    iVar2 = FUN_36035f90((undefined4 *)(this + 0x1c));
    param_1 = iVar2 + -1;
  }
  pfVar3 = (float *)(param_1 * 0x20 + *(int *)(this + 0x20));
  fVar1 = *(float *)(param_1 * 0x20 + 0x10 + *(int *)(this + 0x20)) - pfVar3[1];
  if (fVar1 == pfVar3[5] - pfVar3[2]) {
    return 2;
  }
  if (fVar1 == pfVar3[3] - *pfVar3) {
    return 0;
  }
  return 1;
}

