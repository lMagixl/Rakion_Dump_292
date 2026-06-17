
/* public: class CEntity * __thiscall CWorld::CopyEntityInWorld(class CEntity &,class CPlacement3D
   const &,int,unsigned long,int) */

CEntity * __thiscall
CWorld::CopyEntityInWorld
          (CWorld *this,CEntity *param_1,CPlacement3D *param_2,int param_3,ulong param_4,int param_5
          )

{
  CEntity *this_00;
  CEntityEvent *pCVar1;
  CBrushMip *pCVar2;
  CLightSource *this_01;
  CEntity *this_02;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  EVoid local_20 [8];
  CWorld *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1316b0  1385
                       ?CopyEntityInWorld@CWorld@@QAEPAVCEntity@@AAV2@ABVCPlacement3D@@HKH@Z */
  puStack_c = &LAB_36218e98;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  this_00 = CreateEntity_t(this,param_2,(CTFileName *)(*(int *)(param_1 + 0x78) + 0xc),param_4,0);
  local_8 = 0xffffffff;
  if ((*(int *)(_pNetwork + 0x14) != 0) && (param_5 != 0)) {
    if (DAT_362cced0 != 0) {
      CPrintF(s_Copied_entity__ID__0x_X__Target__362384c4,*(undefined4 *)(param_1 + 0x1c),
              *(undefined4 *)(this_00 + 0x1c),*(undefined4 *)(*(int *)(param_1 + 0x78) + 0xc),
              *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10));
    }
    CEntityMessage::WriteEntityCopy
              ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(param_1 + 0x1c),(ulong *)(this_00 + 0x1c),
               param_2,param_3 != 0);
    CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
  }
  (**(code **)(*(int *)this_00 + 0x14))(param_1,2);
  if ((*(int *)(param_1 + 4) == 4) || (*(int *)(param_1 + 4) == 8)) {
    CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(this_00 + 0x7c));
  }
  CEntity::End(this_00);
  pCVar1 = (CEntityEvent *)EVoid::EVoid(local_20);
  local_8 = 2;
  CEntity::Initialize(this_00,pCVar1,0);
  local_8 = 0xffffffff;
  if ((*(int *)(this_00 + 4) == 4) || (*(int *)(this_00 + 4) == 8)) {
    iVar5 = 1;
    iVar4 = 0;
    pCVar2 = CBrush3D::GetFirstMip(*(CBrush3D **)(this_00 + 0x7c));
    FindShadowLayers(this,(AABBox<float,3> *)(pCVar2 + 0x24),iVar4,iVar5);
  }
  this_01 = (CLightSource *)(**(code **)(*(int *)this_00 + 0xa4))();
  if (this_01 != (CLightSource *)0x0) {
    CLightSource::FindShadowLayers(this_01,0);
  }
  if (param_3 != 0) {
    for (piVar3 = *(int **)(param_1 + 0xc4); *piVar3 != 0; piVar3 = (int *)*piVar3) {
      local_38 = piVar3[5];
      local_34 = piVar3[6];
      local_30 = piVar3[7];
      local_2c = piVar3[8];
      local_28 = piVar3[9];
      local_24 = piVar3[10];
      CPlacement3D::RelativeToAbsoluteSmooth
                ((CPlacement3D *)&local_38,(CPlacement3D *)(this_00 + 0x3c));
      this_02 = CopyEntityInWorld(this,(CEntity *)(piVar3 + -0x2f),(CPlacement3D *)&local_38,1,
                                  0xffffffff,(uint)(param_5 != 0));
      CEntity::SetParent(this_02,this_00);
    }
  }
  ExceptionList = local_10;
  return this_00;
}

