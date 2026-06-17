
/* public: void __thiscall CCastRay::TestWholeWorld(class CWorld *) */

void __thiscall CCastRay::TestWholeWorld(CCastRay *this,CWorld *param_1)

{
  CBrush3D *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CEntity *pCVar5;
  CBrushMip *this_01;
  CBrushSector *pCVar6;
  CWorld *this_02;
  int iVar7;
  int local_34;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xddb70  3823  ?TestWholeWorld@CCastRay@@QAEXPAVCWorld@@@Z */
  puStack_8 = &LAB_36215344;
  local_c = ExceptionList;
  this_02 = param_1 + 0x15c;
  iVar7 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar4 = FUN_360caf20((int)this_02);
  if (0 < iVar4) {
    do {
      iVar4 = FUN_360cafb0(this_02,iVar7);
      if (((iVar4 != *(int *)(this + 0x28)) &&
          (iVar4 = FUN_360cafb0(this_02,iVar7), iVar4 != *(int *)(this + 0xc))) &&
         (((iVar4 = FUN_360cafb0(this_02,iVar7), *(int *)(iVar4 + 4) != 4 &&
           (iVar4 = FUN_360cafb0(this_02,iVar7), *(int *)(iVar4 + 4) != 8)) ||
          (*(int *)(this + 0x74) != 0)))) {
        iVar4 = FUN_360cafb0(this_02,iVar7);
        if ((((*(int *)(iVar4 + 4) == 3) ||
             ((iVar4 = FUN_360cafb0(this_02,iVar7), *(int *)(iVar4 + 4) == 5 && (DAT_362fcb8c != 0))
             )) && (iVar4 = *(int *)(this + 0x6c), iVar4 != 0)) &&
           (((iVar4 != 5 && (iVar4 != 2)) ||
            (iVar4 = FUN_360cafb0(this_02,iVar7), (*(byte *)(iVar4 + 0x10) & 0x40) == 0)))) {
LAB_360ddc48:
          pCVar5 = (CEntity *)FUN_360cafb0(this_02,iVar7);
          TestModel(this,pCVar5);
        }
        else {
          iVar4 = FUN_360cafb0(this_02,iVar7);
          if (((*(int *)(iVar4 + 4) == 9) ||
              ((iVar4 = FUN_360cafb0(this_02,iVar7), *(int *)(iVar4 + 4) == 10 &&
               (DAT_362fcb8c != 0)))) &&
             ((iVar4 = *(int *)(this + 0x6c), iVar4 != 0 &&
              (((iVar4 != 5 && (iVar4 != 2)) ||
               (iVar4 = FUN_360cafb0(this_02,iVar7), (*(byte *)(iVar4 + 0x10) & 0x40) == 0)))))) {
            pCVar5 = (CEntity *)FUN_360cafb0(this_02,iVar7);
            TestSkaModel(this,pCVar5);
          }
          else {
            iVar4 = FUN_360cafb0(this_02,iVar7);
            if (*(int *)(iVar4 + 4) == 0xb) {
              pCVar5 = (CEntity *)FUN_360cafb0(this_02,iVar7);
              TestTerrain(this,pCVar5);
            }
            else {
              iVar4 = FUN_360cafb0(this_02,iVar7);
              if ((*(int *)(iVar4 + 4) == 4) ||
                 (((iVar4 = FUN_360cafb0(this_02,iVar7), *(int *)(iVar4 + 4) == 8 &&
                   (DAT_362fcb90 != 0)) && (*(int *)(this + 0x70) != 0)))) {
                iVar4 = FUN_360cafb0(this_02,iVar7);
                this_00 = *(CBrush3D **)(iVar4 + 0x7c);
                iVar4 = FUN_360cafb0(this_02,iVar7);
                fVar1 = *(float *)(iVar4 + 0x3c) - *(float *)(this + 0x2c);
                fVar2 = *(float *)(iVar4 + 0x40) - *(float *)(this + 0x30);
                fVar3 = *(float *)(iVar4 + 0x44) - *(float *)(this + 0x34);
                this_01 = CBrush3D::GetBrushMipByDistance
                                    (this_00,SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3));
                if (this_01 != (CBrushMip *)0x0) {
                  iVar4 = FUN_36043600((int)this_01);
                  if (iVar4 == 0) goto LAB_360ddc48;
                  local_34 = 0;
                  local_4 = CONCAT31(local_4._1_3_,1);
                  iVar4 = FUN_36043600((int)this_01);
                  if (0 < iVar4) {
                    do {
                      iVar4 = FUN_36043710(this_01,local_34);
                      if ((*(byte *)(iVar4 + 0x44) & 2) == 0) {
                        pCVar6 = (CBrushSector *)FUN_36043710(this_01,local_34);
                        TestBrushSector(this,pCVar6);
                      }
                      local_34 = local_34 + 1;
                      iVar4 = FUN_36043600((int)this_01);
                    } while (local_34 < iVar4);
                  }
                  local_4 = local_4 & 0xffffff00;
                }
              }
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = FUN_360caf20((int)this_02);
    } while (iVar7 < iVar4);
  }
  ExceptionList = local_c;
  return;
}

