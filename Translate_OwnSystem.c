
/* public: void __thiscall CPlacement3D::Translate_OwnSystem(class Vector<float,3> const &) */

void __thiscall CPlacement3D::Translate_OwnSystem(CPlacement3D *this,Vector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x56bc0  3849  ?Translate_OwnSystem@CPlacement3D@@QAEXABV?$Vector@M$02@@@Z */
  MakeRotationMatrix((Matrix<float,3,3> *)&local_24,(Vector<float,3> *)(this + 0xc));
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  *(float *)this =
       local_1c * *(float *)(param_1 + 8) +
       local_24 * *(float *)param_1 + local_20 * *(float *)(param_1 + 4) + *(float *)this;
  *(float *)(this + 4) =
       local_10 * fVar3 + local_14 * fVar2 + local_18 * fVar1 + *(float *)(this + 4);
  *(float *)(this + 8) = local_4 * fVar6 + local_8 * fVar5 + local_c * fVar4 + *(float *)(this + 8);
  return;
}

