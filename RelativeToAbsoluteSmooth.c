
/* public: void __thiscall CPlacement3D::RelativeToAbsoluteSmooth(class CPlacement3D const &) */

void __thiscall CPlacement3D::RelativeToAbsoluteSmooth(CPlacement3D *this,CPlacement3D *param_1)

{
  undefined **local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  
                    /* 0x56f00  3080  ?RelativeToAbsoluteSmooth@CPlacement3D@@QAEXABV1@@Z */
  CProjection3D::CProjection3D((CProjection3D *)&local_184);
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  local_180 = *(undefined4 *)param_1;
  local_148 = 0;
  local_17c = *(undefined4 *)(param_1 + 4);
  local_178 = *(undefined4 *)(param_1 + 8);
  local_174 = *(undefined4 *)(param_1 + 0xc);
  local_170 = *(undefined4 *)(param_1 + 0x10);
  local_16c = *(undefined4 *)(param_1 + 0x14);
  local_184 = &CSimpleProjection3D::_vftable_;
  CSimpleProjection3D::Prepare((CSimpleProjection3D *)&local_184);
  CSimpleProjection3D::ProjectPlacementSmooth((CSimpleProjection3D *)&local_184,this,this);
  return;
}

