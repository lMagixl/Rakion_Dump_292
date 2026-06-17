
/* public: void __thiscall CAnimData::SetFrame(long,long,long) */

void __thiscall CAnimData::SetFrame(CAnimData *this,long param_1,long param_2,long param_3)

{
                    /* 0x1fc80  3475  ?SetFrame@CAnimData@@QAEXJJJ@Z */
  *(long *)(*(int *)(param_1 * 0x2c + 0x28 + *(int *)(this + 0x18)) + param_2 * 4) = param_3;
  return;
}

