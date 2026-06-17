
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class CPlacement3D __thiscall CMovableEntity::GetLerpedPlacement(void) */

void __thiscall CMovableEntity::GetLerpedPlacement(CMovableEntity *this)

{
  float fVar1;
  int iVar2;
  undefined4 *in_stack_00000004;
  float local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1aac60  1941  ?GetLerpedPlacement@CMovableEntity@@UAE?AVCPlacement3D@@XZ */
  if ((~(*(uint *)(this + 0x10) >> 0x1c) & 1) == 0) {
    if (*(int *)(this + 0x280) == 0) {
      local_20 = 1.0;
    }
    else {
      local_20 = (CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc)) -
                 *(float *)(this + 0x284);
      if (*(float *)(this + 0x354) < _DAT_362253e4 != (*(float *)(this + 0x354) == _DAT_362253e4)) {
        *(undefined4 *)(this + 0x354) = 0x3dcccccd;
      }
      iVar2 = (**(code **)(*(int *)this + 0x70))();
      fVar1 = _DAT_36237a78;
      if (iVar2 == 0) {
        fVar1 = 0.2;
      }
      if (local_20 < fVar1) {
        local_20 = local_20 / *(float *)(this + 0x354);
        *(float *)(this + 0x358) = local_20;
      }
      else {
        local_20 = *(float *)(this + 0x358);
      }
    }
  }
  else {
    local_20 = *(float *)(_pTimer + 0x10);
  }
  CPlacement3D::Lerp((CPlacement3D *)&local_18,(CPlacement3D *)(this + 0x288),
                     (CPlacement3D *)(this + 0x3c),local_20);
  *in_stack_00000004 = local_18;
  in_stack_00000004[1] = local_14;
  in_stack_00000004[2] = local_10;
  in_stack_00000004[3] = local_c;
  in_stack_00000004[4] = local_8;
  in_stack_00000004[5] = local_4;
  return;
}

