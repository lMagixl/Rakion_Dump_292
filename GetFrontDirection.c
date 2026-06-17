
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class Vector<float,3> __thiscall CEntity::GetFrontDirection(void) */

void __thiscall CEntity::GetFrontDirection(CEntity *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000004;
  
                    /* 0x128f00  1893  ?GetFrontDirection@CEntity@@QAE?AV?$Vector@M$02@@XZ */
  fVar1 = (*(float *)(this + 100) + *(float *)(this + 0x60)) * _DAT_3622376c;
  fVar2 = *(float *)(this + 0x68) * _DAT_36223384;
  fVar3 = (*(float *)(this + 0x70) + *(float *)(this + 0x6c)) * _DAT_3622376c;
  fVar4 = *(float *)(this + 0x74) * _DAT_36223384;
  *in_stack_00000004 =
       (*(float *)(this + 0x58) + *(float *)(this + 0x54)) * _DAT_3622376c -
       *(float *)(this + 0x5c) * _DAT_36223384;
  in_stack_00000004[1] = fVar1 - fVar2;
  in_stack_00000004[2] = fVar3 - fVar4;
  return;
}

