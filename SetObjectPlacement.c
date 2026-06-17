
/* public: void __thiscall CRenderModel::SetObjectPlacement(class Vector<float,3> const &,class
   Matrix<float,3,3> const &) */

void __thiscall
CRenderModel::SetObjectPlacement
          (CRenderModel *this,Vector<float,3> *param_1,Matrix<float,3,3> *param_2)

{
  int iVar1;
  CRenderModel *pCVar2;
  
                    /* 0xbc710  3535
                       ?SetObjectPlacement@CRenderModel@@QAEXABV?$Vector@M$02@@ABV?$Matrix@M$02$02@@@Z
                        */
  *(undefined4 *)(this + 0x34) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 8);
  pCVar2 = this + 0x40;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return;
}

