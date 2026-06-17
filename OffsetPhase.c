
/* public: void __thiscall CAnimObject::OffsetPhase(float) */

void __thiscall CAnimObject::OffsetPhase(CAnimObject *this,float param_1)

{
                    /* 0x20030  2712  ?OffsetPhase@CAnimObject@@QAEXM@Z */
  *(float *)(this + 4) = param_1 + *(float *)(this + 4);
  return;
}

