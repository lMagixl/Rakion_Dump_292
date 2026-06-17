
/* public: void __thiscall CModelObject::StretchModelRelative(class Vector<float,3> const &) */

void __thiscall CModelObject::StretchModelRelative(CModelObject *this,Vector<float,3> *param_1)

{
  int *piVar1;
  
                    /* 0xb61a0  3694  ?StretchModelRelative@CModelObject@@QAEXABV?$Vector@M$02@@@Z
                        */
  *(float *)(this + 0x84) = *(float *)param_1 * *(float *)(this + 0x84);
  *(float *)(this + 0x88) = *(float *)(param_1 + 4) * *(float *)(this + 0x88);
  *(float *)(this + 0x8c) = *(float *)(param_1 + 8) * *(float *)(this + 0x8c);
  for (piVar1 = *(int **)(this + 0x9c); *piVar1 != 0; piVar1 = (int *)*piVar1) {
    StretchModelRelative((CModelObject *)(piVar1 + 9),param_1);
  }
  return;
}

