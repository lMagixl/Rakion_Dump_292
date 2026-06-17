
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CPlacement3D __thiscall CMovableEntity::Debug_GetLerpedPlacement(void) */

void __thiscall CMovableEntity::Debug_GetLerpedPlacement(CMovableEntity *this)

{
  float fVar1;
  undefined4 *in_stack_00000004;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x1aad70  1453
                       ?Debug_GetLerpedPlacement@CMovableEntity@@QAE?AVCPlacement3D@@XZ */
  if ((~(*(uint *)(this + 0x10) >> 0x1c) & 1) == 0) {
    if (*(int *)(this + 0x280) != 0) {
      fVar1 = (CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc)) -
              *(float *)(this + 0x284);
      if (*(float *)(this + 0x354) < _DAT_362253e4 != (*(float *)(this + 0x354) == _DAT_362253e4)) {
        *(undefined4 *)(this + 0x354) = 0x3dcccccd;
      }
      local_1c = fVar1 / *(float *)(this + 0x354);
      if (fVar1 < _DAT_36227cf0) goto LAB_361aadf0;
    }
    local_1c = 1.0;
  }
  else {
    local_1c = *(float *)(_pTimer + 0x10);
  }
LAB_361aadf0:
  if (DAT_363826e8 == 0) {
    DAT_363826e8 = 1;
    _DAT_363826e4 =
         CreateFileA(s___LastPosition_txt_36243ac8,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0,
                     (HANDLE)0x0);
  }
  (**(code **)(*(int *)_pRakionWorldNet + 8))();
  CPlacement3D::Lerp((CPlacement3D *)&uStack_18,(CPlacement3D *)(this + 0x288),
                     (CPlacement3D *)(this + 0x3c),local_1c);
  *in_stack_00000004 = uStack_18;
  in_stack_00000004[1] = uStack_14;
  in_stack_00000004[2] = uStack_10;
  in_stack_00000004[3] = uStack_c;
  in_stack_00000004[4] = uStack_8;
  in_stack_00000004[5] = uStack_4;
  return;
}

