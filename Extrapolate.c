
/* public: void __thiscall CPlacement3D::Extrapolate(class CPlacement3D const &,class CPlacement3D
   const &,float) */

void __thiscall
CPlacement3D::Extrapolate
          (CPlacement3D *this,CPlacement3D *param_1,CPlacement3D *param_2,float param_3)

{
                    /* 0x56830  1595  ?Extrapolate@CPlacement3D@@QAEXABV1@0M@Z */
  *(float *)this = param_3 * *(float *)param_2 + *(float *)param_1;
  *(float *)(this + 4) = param_3 * *(float *)(param_2 + 4) + *(float *)(param_1 + 4);
  *(float *)(this + 8) = param_3 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  *(float *)(this + 0xc) = param_3 * *(float *)(param_2 + 0xc) + *(float *)(param_1 + 0xc);
  *(float *)(this + 0x10) = param_3 * *(float *)(param_2 + 0x10) + *(float *)(param_1 + 0x10);
  *(float *)(this + 0x14) = param_3 * *(float *)(param_2 + 0x14) + *(float *)(param_1 + 0x14);
  return;
}

