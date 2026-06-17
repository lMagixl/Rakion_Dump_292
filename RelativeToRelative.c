
/* public: void __thiscall CPlacement3D::RelativeToRelative(class CPlacement3D const &,class
   CPlacement3D const &) */

void __thiscall
CPlacement3D::RelativeToRelative(CPlacement3D *this,CPlacement3D *param_1,CPlacement3D *param_2)

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
  
                    /* 0x564f0  3081  ?RelativeToRelative@CPlacement3D@@QAEXABV1@0@Z */
  CProjection3D::CProjection3D((CProjection3D *)&local_184);
  local_15c = *(undefined4 *)param_2;
  local_158 = *(undefined4 *)(param_2 + 4);
  local_154 = *(undefined4 *)(param_2 + 8);
  local_150 = *(undefined4 *)(param_2 + 0xc);
  local_14c = *(undefined4 *)(param_2 + 0x10);
  local_148 = *(undefined4 *)(param_2 + 0x14);
  local_180 = *(undefined4 *)param_1;
  local_17c = *(undefined4 *)(param_1 + 4);
  local_178 = *(undefined4 *)(param_1 + 8);
  local_174 = *(undefined4 *)(param_1 + 0xc);
  local_170 = *(undefined4 *)(param_1 + 0x10);
  local_16c = *(undefined4 *)(param_1 + 0x14);
  local_184 = &CSimpleProjection3D::_vftable_;
  CSimpleProjection3D::Prepare((CSimpleProjection3D *)&local_184);
  CSimpleProjection3D::ProjectPlacement((CSimpleProjection3D *)&local_184,this,this);
  return;
}

