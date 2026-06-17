
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CEntity::SetPlacement_special(class CPlacement3D const &,class
   Matrix<float,3,3> const &,unsigned long) */

void __thiscall
CEntity::SetPlacement_special
          (CEntity *this,CPlacement3D *param_1,Matrix<float,3,3> *param_2,ulong param_3)

{
  Vector<float,3> *pVVar1;
  CBrushPolygon *this_00;
  CTerrain *pCVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  CBrushMip *pCVar6;
  CBrushSector *this_01;
  CLightSource *this_02;
  int iVar7;
  int *piVar8;
  int *piVar9;
  CEntity *pCVar10;
  int iStack_7c;
  int *piStack_78;
  int iStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float afStack_3c [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x12b950  3555
                       ?SetPlacement_special@CEntity@@UAEXABVCPlacement3D@@ABV?$Matrix@M$02$02@@K@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36218af8;
  pvStack_c = ExceptionList;
  pVVar1 = (Vector<float,3> *)(this + 0x3c);
  if ((_DAT_362a604c <=
       ABS(*(float *)param_1 - *(float *)pVVar1) +
       ABS(*(float *)(param_1 + 8) - *(float *)(this + 0x44)) +
       ABS(*(float *)(param_1 + 4) - *(float *)(this + 0x40))) ||
     (ExceptionList = &pvStack_c,
     _DAT_362a6050 <
     ABS(*(float *)(param_1 + 0xc) - *(float *)(this + 0x48)) +
     ABS(*(float *)(param_1 + 0x14) - *(float *)(this + 0x50)) +
     ABS(*(float *)(param_1 + 0x10) - *(float *)(this + 0x4c)))) {
    ExceptionList = &pvStack_c;
    if ((*(int *)(_pNetwork + 0x14) != 0) &&
       ((ExceptionList = &pvStack_c, iVar5 = (**(code **)(*(int *)this + 0x90))(), iVar5 != 0 &&
        (iVar5 = (**(code **)(*(int *)this + 0x70))(), iVar5 == 0)))) {
      CEntityMessage::WritePlacementNotify
                ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(this + 0x1c),'\0');
      CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x2000000;
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffdf;
  local_54 = *(int *)pVVar1;
  local_50 = *(int *)(this + 0x40);
  local_4c = *(int *)(this + 0x44);
  local_48 = *(int *)(this + 0x48);
  local_44 = *(int *)(this + 0x4c);
  local_40 = *(int *)(this + 0x50);
  *(undefined4 *)pVVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x14);
  iVar5 = *(int *)(this + 4);
  pCVar10 = this + 0x54;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pCVar10 = pCVar10 + 4;
  }
  if ((iVar5 == 4) || (iVar5 == 8)) {
    DAT_362fcc40 = 1;
    CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(this + 0x7c));
    DAT_362fcc40 = 0;
    bVar3 = false;
    piVar8 = *(int **)(*(int *)(this + 0x7c) + 0x674);
    while (*piVar8 != 0) {
      piVar9 = piVar8 + -6;
      iVar7 = 0;
      iStack_7c = 0;
      uStack_4 = 0;
      piStack_78 = piVar9;
      iVar5 = FUN_36043600((int)piVar9);
      if (0 < iVar5) {
        do {
          iVar5 = FUN_36043710(piVar9,iVar7);
          piVar9 = (int *)(iVar5 + 0x18);
          iStack_74 = 0;
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          piStack_70 = piVar9;
          if (0 < *piVar9) {
            do {
              iVar4 = iStack_74;
              this_00 = (CBrushPolygon *)(iStack_74 * 0x1d0 + *(int *)(iVar5 + 0x1c));
              if ((*(uint *)(this_00 + 200) & 0x4000) == 0) {
                CBrushPolygon::DiscardShadows(this_00);
                bVar3 = true;
              }
              iStack_74 = iVar4 + 1;
            } while (iStack_74 < *piVar9);
          }
          iVar7 = iVar7 + 1;
          iStack_74 = 0xffffffff;
          iStack_7c = iVar7;
          iVar5 = FUN_36043600((int)piStack_78);
          piVar9 = piStack_78;
        } while (iVar7 < iVar5);
      }
      piVar8 = (int *)*piVar8;
      uStack_4 = 0xffffffff;
      iStack_7c = 0xffffffff;
    }
    if (bVar3) {
      DAT_362fdb44 = ~-(uint)((*(uint *)(this + 0x10) & 0x2000) != 0) & (uint)this;
      iVar7 = 0;
      iVar5 = 0;
      pCVar6 = CBrush3D::GetFirstMip(*(CBrush3D **)(this + 0x7c));
      CWorld::FindShadowLayers
                (*(CWorld **)(this + 0xa8),(AABBox<float,3> *)(pCVar6 + 0x24),iVar5,iVar7);
      DAT_362fdb44 = 0;
    }
    if (((byte)this[0x10] & 2) != 0) {
      CSetFPUPrecision::CSetFPUPrecision((CSetFPUPrecision *)&iStack_7c,1);
      piVar8 = *(int **)(*(int *)(this + 0x7c) + 0x674);
      uStack_4 = 0;
      while (*piVar8 != 0) {
        piVar9 = piVar8 + -6;
        iVar7 = 0;
        iStack_74 = 0;
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
        piStack_70 = piVar9;
        iVar5 = FUN_36043600((int)piVar9);
        if (0 < iVar5) {
          do {
            this_01 = (CBrushSector *)FUN_36043710(piVar9,iVar7);
            CBrushSector::FindEntitiesInSector(this_01);
            iVar7 = iVar7 + 1;
            iStack_74 = iVar7;
            iVar5 = FUN_36043600((int)piVar9);
          } while (iVar7 < iVar5);
        }
        piVar8 = (int *)*piVar8;
        iStack_74 = 0xffffffff;
      }
      uStack_4 = 0xffffffff;
      CSetFPUPrecision::~CSetFPUPrecision((CSetFPUPrecision *)&iStack_7c);
    }
  }
  else if (iVar5 == 0xb) {
    pCVar2 = *(CTerrain **)(this + 0x7c);
    TR_GetMatrixFromEntity(afStack_3c,pCVar2);
    uStack_6c = 0x7f61b1e6;
    uStack_68 = 0x7f61b1e6;
    uStack_64 = 0x7f61b1e6;
    uStack_60 = 0xff61b1e6;
    uStack_5c = 0xff61b1e6;
    uStack_58 = 0xff61b1e6;
    TR_UpdateShadowMap(pCVar2,afStack_3c,0x7f61b1e6,0x7f61b1e6,0x7f61b1e6,0xff61b1e6,0xff61b1e6,
                       0xff61b1e6,1);
  }
  if ((param_3 & 1) == 0) {
    FindSectorsAroundEntity(this);
  }
  else {
    FindSectorsAroundEntityNear(this);
  }
  this_02 = (CLightSource *)(**(code **)(*(int *)this + 0xa4))();
  if (this_02 != (CLightSource *)0x0) {
    CLightSource::FindShadowLayers(this_02,0);
    CLightSource::UpdateTerrains
              (this_02,local_54,local_50,local_4c,local_48,local_44,local_40,*(undefined4 *)pVVar1,
               *(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44),
               *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
               *(undefined4 *)(this + 0x50));
  }
  if (*(CCollisionInfo **)(this + 0x84) != (CCollisionInfo *)0x0) {
    uStack_6c = 0x7f61b1e6;
    uStack_60 = 0xff61b1e6;
    uStack_68 = 0x7f61b1e6;
    uStack_5c = 0xff61b1e6;
    uStack_64 = 0x7f61b1e6;
    uStack_58 = 0xff61b1e6;
    CCollisionInfo::MakeBoxAtPlacement
              (*(CCollisionInfo **)(this + 0x84),pVVar1,(Matrix<float,3,3> *)(this + 0x54),
               (AABBox<float,3> *)&uStack_6c);
    if ((*(int *)(this + 4) != 4) && (*(int *)(this + 4) != 8)) {
      CWorld::MoveEntityInCollisionGrid
                (*(CWorld **)(this + 0xa8),this,(AABBox<float,3> *)(*(int *)(this + 0x84) + 0x18),
                 (AABBox<float,3> *)&uStack_6c);
    }
    iVar5 = *(int *)(this + 0x84);
    *(undefined4 *)(iVar5 + 0x18) = uStack_6c;
    *(undefined4 *)(iVar5 + 0x1c) = uStack_68;
    *(undefined4 *)(iVar5 + 0x20) = uStack_64;
    *(undefined4 *)(iVar5 + 0x24) = uStack_60;
    *(undefined4 *)(iVar5 + 0x28) = uStack_5c;
    *(undefined4 *)(iVar5 + 0x2c) = uStack_58;
  }
  for (piVar8 = *(int **)(this + 0xc4); *piVar8 != 0; piVar8 = (int *)*piVar8) {
    if ((((param_3 & 1) == 0) || ((piVar8[-0x2d] & 0x200U) == 0)) &&
       ((*(int *)(_pNetwork + 0x14) != 0 || ((piVar8[-0x2d] & 0x200U) == 0)))) {
      local_54 = piVar8[5];
      local_50 = piVar8[6];
      local_4c = piVar8[7];
      local_48 = piVar8[8];
      local_44 = piVar8[9];
      local_40 = piVar8[10];
      CPlacement3D::RelativeToAbsoluteSmooth((CPlacement3D *)&local_54,(CPlacement3D *)pVVar1);
      SetPlacement((CEntity *)(piVar8 + -0x2f),(CPlacement3D *)&local_54);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

