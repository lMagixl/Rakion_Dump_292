
/* public: void __thiscall CWorld::CopySourceBrushSectorsToObject(class CEntity &,class
   CSelection<class CBrushSector,4> &,class CPlacement3D const &,class CObject3D &,class
   CPlacement3D const &,class AABBox<double,3> &) */

void __thiscall
CWorld::CopySourceBrushSectorsToObject
          (CWorld *this,CEntity *param_1,CSelection<class_CBrushSector,4> *param_2,
          CPlacement3D *param_3,CObject3D *param_4,CPlacement3D *param_5,AABBox<double,3> *param_6)

{
  CBrushMip *this_00;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  CObject3D local_1f0 [20];
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd3a30  1399
                       ?CopySourceBrushSectorsToObject@CWorld@@QAEXAAVCEntity@@AAV?$CSelection@VCBrushSector@@$03@@ABVCPlacement3D@@AAVCObject3D@@2AAV?$AABBox@N$02@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214c15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = GetBrushMip(this,param_1);
  local_220 = *(undefined4 *)(param_1 + 0x3c);
  local_21c = *(undefined4 *)(param_1 + 0x40);
  local_218 = *(undefined4 *)(param_1 + 0x44);
  local_214 = *(undefined4 *)(param_1 + 0x48);
  local_210 = *(undefined4 *)(param_1 + 0x4c);
  local_20c = *(undefined4 *)(param_1 + 0x50);
  CPlacement3D::RelativeToAbsolute((CPlacement3D *)&local_220,param_3);
  CBrushMip::ToObject3D(this_00,param_4,param_2);
  CObject3D::CObject3D(local_1f0);
  local_4 = 0;
  CObject3D::operator=(local_1f0,param_4);
  CSimpleProjection3D_DOUBLE::CSimpleProjection3D_DOUBLE((CSimpleProjection3D_DOUBLE *)&local_1dc);
  local_1d4 = local_218;
  local_1dc = local_220;
  local_1d8 = local_21c;
  local_1c8 = local_20c;
  local_1f8 = 0;
  local_1d0 = local_214;
  local_1cc = local_210;
  local_208 = 0;
  local_204 = 0;
  local_200 = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_1c0 = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  CSimpleProjection3D_DOUBLE::Prepare((CSimpleProjection3D_DOUBLE *)&local_1dc);
  CObject3D::Project(local_1f0,(CSimpleProjection3D_DOUBLE *)&local_1dc);
  CObject3D::GetBoundingBox(local_1f0,param_6);
  CSimpleProjection3D_DOUBLE::CSimpleProjection3D_DOUBLE((CSimpleProjection3D_DOUBLE *)&local_f4);
  local_f4 = local_220;
  local_e8 = local_214;
  local_f0 = local_21c;
  local_ec = local_218;
  local_e4 = local_210;
  local_dc = *(undefined4 *)param_5;
  local_e0 = local_20c;
  local_d8 = *(undefined4 *)(param_5 + 4);
  local_d4 = *(undefined4 *)(param_5 + 8);
  local_d0 = *(undefined4 *)(param_5 + 0xc);
  local_cc = *(undefined4 *)(param_5 + 0x10);
  local_c8 = *(undefined4 *)(param_5 + 0x14);
  CSimpleProjection3D_DOUBLE::Prepare((CSimpleProjection3D_DOUBLE *)&local_f4);
  CObject3D::Project(param_4,(CSimpleProjection3D_DOUBLE *)&local_f4);
  local_4 = 0xffffffff;
  CObject3D::~CObject3D(local_1f0);
  ExceptionList = local_c;
  return;
}

