
/* public: void __thiscall CAnimData::SetSpeed(long,float) */

void __thiscall CAnimData::SetSpeed(CAnimData *this,long param_1,float param_2)

{
                    /* 0x1fc40  3598  ?SetSpeed@CAnimData@@QAEXJM@Z */
  *(float *)(param_1 * 0x2c + 0x20 + *(int *)(this + 0x18)) = param_2;
  return;
}

