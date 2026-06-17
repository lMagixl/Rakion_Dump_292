
/* public: void __thiscall CEntity::SetPlacement(class CPlacement3D const &) */

void __thiscall CEntity::SetPlacement(CEntity *this,CPlacement3D *param_1)

{
  CEntity *pCVar1;
  Matrix<float,3,3> local_24 [36];
  
                    /* 0x1266d0  3553  ?SetPlacement@CEntity@@QAEXABVCPlacement3D@@@Z */
  if (((*(float *)(param_1 + 0xc) == *(float *)(this + 0x48)) &&
      (*(float *)(param_1 + 0x10) == *(float *)(this + 0x4c))) &&
     (*(float *)(param_1 + 0x14) == *(float *)(this + 0x50))) {
    pCVar1 = this + 0x54;
  }
  else {
    MakeRotationMatrixFast(local_24,(Vector<float,3> *)(param_1 + 0xc));
    pCVar1 = (CEntity *)local_24;
  }
  (**(code **)(*(int *)this + 0x10))(param_1,pCVar1,0);
  if (*(int *)(this + 0xb8) != 0) {
    *(undefined4 *)(this + 0xd0) = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0xd8) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0xdc) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0x50);
    CPlacement3D::AbsoluteToRelativeSmooth
              ((CPlacement3D *)(this + 0xd0),(CPlacement3D *)(*(int *)(this + 0xb8) + 0x3c));
  }
  return;
}

