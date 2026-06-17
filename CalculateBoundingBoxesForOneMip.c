
/* public: void __thiscall CBrush3D::CalculateBoundingBoxesForOneMip(class CBrushMip *) */

void __thiscall CBrush3D::CalculateBoundingBoxesForOneMip(CBrush3D *this,CBrushMip *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  CSetFPUPrecision local_fc [8];
  CSimpleProjection3D_DOUBLE local_f4 [232];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x135aa0  1127
                       ?CalculateBoundingBoxesForOneMip@CBrush3D@@QAEXPAVCBrushMip@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621921a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSetFPUPrecision::CSetFPUPrecision(local_fc,1);
  local_4 = 0;
  CSimpleProjection3D_DOUBLE::CSimpleProjection3D_DOUBLE(local_f4);
  PrepareRelativeToAbsoluteProjection(this,local_f4);
  for (piVar3 = *(int **)(this + 0x674); *piVar3 != 0; piVar3 = (int *)*piVar3) {
    if ((param_1 == (CBrushMip *)0x0) || ((CBrushMip *)(piVar3 + -6) == param_1)) {
      CBrushMip::CalculateBoundingBoxes((CBrushMip *)(piVar3 + -6),local_f4);
    }
  }
  iVar1 = *(int *)(this + 0x668);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x10) & 2) != 0)) {
    if ((DAT_362fd6d4 == 0) && (DAT_362fcc40 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0x158) = uVar2;
  }
  CEntity::UpdateSpatialRange(*(CEntity **)(this + 0x668));
  local_4 = 0xffffffff;
  CSetFPUPrecision::~CSetFPUPrecision(local_fc);
  ExceptionList = local_c;
  return;
}

