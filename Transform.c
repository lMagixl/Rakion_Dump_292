
/* public: void __thiscall CMappingDefinition::Transform(class Plane<float,3> const &,class
   CPlacement3D const &,class CPlacement3D const &) */

void __thiscall
CMappingDefinition::Transform
          (CMappingDefinition *this,Plane<float,3> *param_1,CPlacement3D *param_2,
          CPlacement3D *param_3)

{
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  
                    /* 0x5f480  3843
                       ?Transform@CMappingDefinition@@QAEXABV?$Plane@M$02@@ABVCPlacement3D@@1@Z */
  CSimpleProjection3D_DOUBLE::CSimpleProjection3D_DOUBLE((CSimpleProjection3D_DOUBLE *)&local_e8);
  local_e8 = *(undefined4 *)param_2;
  local_e4 = *(undefined4 *)(param_2 + 4);
  local_e0 = *(undefined4 *)(param_2 + 8);
  local_dc = *(undefined4 *)(param_2 + 0xc);
  local_d8 = *(undefined4 *)(param_2 + 0x10);
  local_d4 = *(undefined4 *)(param_2 + 0x14);
  local_d0 = *(undefined4 *)param_3;
  local_cc = *(undefined4 *)(param_3 + 4);
  local_c8 = *(undefined4 *)(param_3 + 8);
  local_c4 = *(undefined4 *)(param_3 + 0xc);
  local_c0 = *(undefined4 *)(param_3 + 0x10);
  local_bc = *(undefined4 *)(param_3 + 0x14);
  CSimpleProjection3D_DOUBLE::Prepare((CSimpleProjection3D_DOUBLE *)&local_e8);
  local_138 = 0x3f800000;
  local_120 = (double)*(float *)param_1;
  local_118 = (double)*(float *)(param_1 + 4);
  local_110 = (double)*(float *)(param_1 + 8);
  local_f0 = (double)*(float *)(param_1 + 0xc);
  local_134 = 0;
  local_130 = 0;
  local_12c = 0x3f800000;
  local_128 = 0;
  local_124 = 0;
  local_108 = local_120;
  local_100 = local_118;
  local_f8 = local_110;
  CSimpleProjection3D_DOUBLE::ProjectMapping
            ((CSimpleProjection3D_DOUBLE *)&local_e8,this,(Plane<double,3> *)&local_108,
             (CMappingDefinition *)&local_138);
  *(undefined4 *)this = local_138;
  *(undefined4 *)(this + 4) = local_134;
  *(undefined4 *)(this + 8) = local_130;
  *(undefined4 *)(this + 0xc) = local_12c;
  *(undefined4 *)(this + 0x10) = local_128;
  *(undefined4 *)(this + 0x14) = local_124;
  return;
}

