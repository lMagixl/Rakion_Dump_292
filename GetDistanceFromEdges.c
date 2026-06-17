
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CBrushPolygon::GetDistanceFromEdges(class Vector<float,3> const &) */

float __thiscall CBrushPolygon::GetDistanceFromEdges(CBrushPolygon *this,Vector<float,3> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float local_a8;
  int *local_44;
  int local_34;
  int local_30;
  
                    /* 0x13b650  1844  ?GetDistanceFromEdges@CBrushPolygon@@QAEMABV?$Vector@M$02@@@Z
                        */
  local_34 = FUN_3600be20((undefined4 *)(this + 4));
  local_a8 = 1e+20;
  if (0 < local_34) {
    iVar1 = *(int *)(this + 4);
    do {
      if (0 < iVar1) {
        local_44 = *(int **)(this + 8);
        local_30 = iVar1;
        do {
          iVar2 = *(int *)*local_44;
          iVar3 = ((int *)*local_44)[1];
          fVar4 = *(float *)param_1 - *(float *)(iVar2 + 4);
          pfVar10 = (float *)(iVar3 + 4);
          fVar5 = *(float *)(param_1 + 4) - *(float *)(iVar2 + 8);
          fVar6 = *(float *)(param_1 + 8) - *(float *)(iVar2 + 0xc);
          fVar7 = *pfVar10 - *(float *)(iVar2 + 4);
          fVar8 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
          fVar9 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
          fVar7 = (fVar7 * fVar4 + fVar8 * fVar5 + fVar9 * fVar6) /
                  (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
          if (_DAT_3622376c <= fVar7) {
            if (fVar7 <= _DAT_36223384) {
              fVar4 = fVar4 + ((*(float *)param_1 - *pfVar10) - fVar4) * fVar7;
              fVar5 = fVar5 + ((*(float *)(param_1 + 4) - *(float *)(iVar3 + 8)) - fVar5) * fVar7;
              fVar6 = fVar6 + ((*(float *)(param_1 + 8) - *(float *)(iVar3 + 0xc)) - fVar6) * fVar7;
              fVar5 = fVar5 * fVar5 + fVar6 * fVar6;
              fVar4 = fVar4 * fVar4;
            }
            else {
              fVar4 = *(float *)(param_1 + 4) - *(float *)(iVar3 + 8);
              fVar5 = *(float *)(param_1 + 8) - *(float *)(iVar3 + 0xc);
              fVar5 = fVar4 * fVar4 + fVar5 * fVar5;
              fVar4 = (*(float *)param_1 - *pfVar10) * (*(float *)param_1 - *pfVar10);
            }
          }
          else {
            fVar5 = fVar5 * fVar5 + fVar6 * fVar6;
            fVar4 = fVar4 * fVar4;
          }
          if (fVar4 + fVar5 < local_a8) {
            local_a8 = fVar4 + fVar5;
          }
          local_44 = local_44 + 2;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      local_34 = local_34 + -1;
    } while (local_34 != 0);
    if (local_a8 < _DAT_3622376c) {
      return SQRT(_DAT_3622376c);
    }
  }
  return SQRT(local_a8);
}

