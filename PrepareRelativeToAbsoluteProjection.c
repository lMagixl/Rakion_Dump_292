
/* public: void __thiscall CBrush3D::PrepareRelativeToAbsoluteProjection(class
   CSimpleProjection3D_DOUBLE &) */

void __thiscall
CBrush3D::PrepareRelativeToAbsoluteProjection(CBrush3D *this,CSimpleProjection3D_DOUBLE *param_1)

{
  int iVar1;
  
                    /* 0x1359b0  2822
                       ?PrepareRelativeToAbsoluteProjection@CBrush3D@@QAEXAAVCSimpleProjection3D_DOUBLE@@@Z
                        */
  iVar1 = *(int *)(this + 0x668);
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  CSimpleProjection3D_DOUBLE::Prepare(param_1);
  return;
}

