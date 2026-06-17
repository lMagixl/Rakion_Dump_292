
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CMovableEntity::GetRelativeHeading(class Vector<float,3> const &) */

float __thiscall CMovableEntity::GetRelativeHeading(CMovableEntity *this,Vector<float,3> *param_1)

{
  float10 fVar1;
  
                    /* 0x1ab020  2074  ?GetRelativeHeading@CMovableEntity@@QAEMABV?$Vector@M$02@@@Z
                        */
  fVar1 = (float10)fpatan((-((float10)*(float *)(this + 0x54) * (float10)*(float *)param_1) -
                          (float10)*(float *)(this + 0x60) * (float10)*(float *)(param_1 + 4)) -
                          (float10)*(float *)(this + 0x6c) * (float10)*(float *)(param_1 + 8),
                          (-((float10)*(float *)(this + 0x5c) * (float10)*(float *)param_1) -
                          (float10)*(float *)(this + 0x68) * (float10)*(float *)(param_1 + 4)) -
                          (float10)*(float *)(this + 0x74) * (float10)*(float *)(param_1 + 8));
  return (float)(fVar1 * (float10)_DAT_36227d14);
}

