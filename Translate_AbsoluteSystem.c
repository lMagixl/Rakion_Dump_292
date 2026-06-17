
/* public: void __thiscall CPlacement3D::Translate_AbsoluteSystem(class Vector<float,3> const &) */

void __thiscall CPlacement3D::Translate_AbsoluteSystem(CPlacement3D *this,Vector<float,3> *param_1)

{
                    /* 0x56c70  3848
                       ?Translate_AbsoluteSystem@CPlacement3D@@QAEXABV?$Vector@M$02@@@Z */
  *(float *)this = *(float *)param_1 + *(float *)this;
  *(float *)(this + 4) = *(float *)(param_1 + 4) + *(float *)(this + 4);
  *(float *)(this + 8) = *(float *)(param_1 + 8) + *(float *)(this + 8);
  return;
}

