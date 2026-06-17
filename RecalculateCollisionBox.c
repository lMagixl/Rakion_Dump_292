
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class AABBox<float,3> __thiscall CModelInstance::RecalculateCollisionBox(void) */

void * __thiscall CModelInstance::RecalculateCollisionBox(CModelInstance *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ColisionBox *pCVar5;
  ColisionBox *pCVar6;
  void *in_stack_00000004;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x15df60  3055
                       ?RecalculateCollisionBox@CModelInstance@@QAE?AV?$AABBox@M$02@@XZ */
  iVar4 = FUN_360de540((undefined4 *)(this + 0x24));
  if (iVar4 == 0) {
    pCVar5 = GetCurrentColisionBox(this);
    pCVar6 = pCVar5 + 0xc;
  }
  else {
    local_30 = 666666.0;
    local_2c = 666666.0;
    local_28 = 666666.0;
    local_24 = -666666.0;
    local_20 = -666666.0;
    local_1c = -666666.0;
    iVar4 = FUN_360de540((undefined4 *)(this + 0x24));
    if (1 < iVar4) {
      iVar4 = iVar4 + -1;
      do {
        GetBonePositionRel(this,(long)&local_18);
        if (local_18 < local_30) {
          local_30 = local_18;
        }
        if (local_24 < local_18) {
          local_24 = local_18;
        }
        if (local_14 < local_2c) {
          local_2c = local_14;
        }
        if (local_20 < local_14) {
          local_20 = local_14;
        }
        if (local_10 < local_28) {
          local_28 = local_10;
        }
        if (local_1c < local_10) {
          local_1c = local_10;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    fVar1 = _DAT_362287a8 * 1.0;
    fVar2 = _DAT_362287a8 * 1.0;
    fVar3 = _DAT_362287a8 * 1.0;
    local_18 = _DAT_362287a8 * 1.0;
    local_14 = _DAT_362287a8 * 1.0;
    local_10 = _DAT_362287a8 * 1.0;
    local_24 = local_18 + local_24;
    local_20 = local_14 + local_20;
    local_1c = local_10 + local_1c;
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    pCVar5 = GetCurrentColisionBox(this);
    *(float *)pCVar5 = local_30 - fVar1;
    *(float *)(pCVar5 + 4) = local_2c - fVar2;
    *(float *)(pCVar5 + 8) = local_28 - fVar3;
    pCVar6 = pCVar5 + 0xc;
    *(float *)pCVar6 = local_24;
    *(float *)(pCVar5 + 0x10) = local_20;
    *(float *)(pCVar5 + 0x14) = local_1c;
  }
  FUN_360bef70(in_stack_00000004,(float *)pCVar5,(float *)pCVar6);
  return in_stack_00000004;
}

