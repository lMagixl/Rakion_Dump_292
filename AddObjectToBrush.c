
/* public: void __thiscall CWorld::AddObjectToBrush(class CObject3D &,class CEntity &) */

void __thiscall CWorld::AddObjectToBrush(CWorld *this,CObject3D *param_1,CEntity *param_2)

{
  CBrushMip *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xd3960  992  ?AddObjectToBrush@CWorld@@QAEXAAVCObject3D@@AAVCEntity@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36214c00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = GetBrushMip(this,param_2);
  local_8 = 0;
  CBrushMip::AddFromObject3D_t(this_00,param_1);
  local_8 = 0xffffffff;
  CBrushMip::UpdateBoundingBox(this_00);
  FindShadowLayers(this,(AABBox<float,3> *)(this_00 + 0x24),0,1);
  ExceptionList = local_10;
  return;
}

