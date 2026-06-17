
/* public: void __thiscall CPlacement3D::Rotate_HPB(class Vector<float,3> const &) */

void __thiscall CPlacement3D::Rotate_HPB(CPlacement3D *this,Vector<float,3> *param_1)

{
                    /* 0x56b90  3181  ?Rotate_HPB@CPlacement3D@@QAEXABV?$Vector@M$02@@@Z */
  *(float *)(this + 0xc) = *(float *)(this + 0xc) + *(float *)param_1;
  *(float *)(this + 0x10) = *(float *)(param_1 + 4) + *(float *)(this + 0x10);
  *(float *)(this + 0x14) = *(float *)(param_1 + 8) + *(float *)(this + 0x14);
  return;
}

