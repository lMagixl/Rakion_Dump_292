
/* public: void __thiscall CEntity::Teleport(class CPlacement3D const &,int) */

void __thiscall CEntity::Teleport(CEntity *this,CPlacement3D *param_1,int param_2)

{
  CEntity *pCVar1;
  xEncryptMemory *pxVar2;
  CEntityEvent *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  CEntity *pCVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12def0  3796  ?Teleport@CEntity@@QAEXABVCPlacement3D@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218c41;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_2 != 0) && (ExceptionList = &local_c, *(int *)(this + 0x84) != 0)) {
    ExceptionList = &local_c;
    MakeRotationMatrixFast((Matrix<float,3,3> *)local_3c,(Vector<float,3> *)(param_1 + 0xc));
  }
  pCVar1 = this + 0x54;
  pCVar6 = pCVar1;
  pfVar7 = local_60;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *(float *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pfVar7 = pfVar7 + 1;
  }
  SetPlacement(this,param_1);
  if ((*(uint *)(this + 8) & 0x200) != 0) {
    CMovableEntity::ClearTemporaryData((CMovableEntity *)this);
    *(float *)(this + 0x288) = *(float *)(this + 0x3c);
    *(undefined4 *)(this + 0x28c) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x290) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0x294) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x298) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x29c) = *(undefined4 *)(this + 0x50);
    local_3c[0] = local_60[0];
    local_3c[1] = local_60[3];
    local_3c[2] = local_48;
    local_3c[3] = local_60[1];
    local_2c = local_50;
    local_28 = local_44;
    local_24 = local_60[2];
    local_20 = local_4c;
    local_1c = local_40;
    pfVar7 = local_3c;
    pfVar8 = local_60;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    local_3c[0] = local_48 * *(float *)(this + 0x5c) +
                  local_60[3] * *(float *)(this + 0x58) + local_60[0] * *(float *)pCVar1;
    local_3c[1] = local_44 * *(float *)(this + 0x5c) +
                  local_50 * *(float *)(this + 0x58) + local_60[1] * *(float *)pCVar1;
    local_3c[2] = local_40 * *(float *)(this + 0x5c) +
                  local_4c * *(float *)(this + 0x58) + local_60[2] * *(float *)pCVar1;
    local_3c[3] = local_48 * *(float *)(this + 0x68) +
                  local_60[3] * *(float *)(this + 100) + local_60[0] * *(float *)(this + 0x60);
    uVar9 = *(uint *)(this + 0x254);
    local_2c = local_44 * *(float *)(this + 0x68) +
               local_50 * *(float *)(this + 100) + local_60[1] * *(float *)(this + 0x60);
    local_28 = local_40 * *(float *)(this + 0x68) +
               local_4c * *(float *)(this + 100) + local_60[2] * *(float *)(this + 0x60);
    local_24 = local_48 * *(float *)(this + 0x74) +
               local_60[3] * *(float *)(this + 0x70) + local_60[0] * *(float *)(this + 0x6c);
    local_20 = local_44 * *(float *)(this + 0x74) +
               local_50 * *(float *)(this + 0x70) + local_60[1] * *(float *)(this + 0x6c);
    local_1c = local_40 * *(float *)(this + 0x74) +
               local_4c * *(float *)(this + 0x70) + local_60[2] * *(float *)(this + 0x6c);
    pfVar7 = local_3c;
    pfVar8 = local_60;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar7 = local_3c;
    uVar10 = 3;
    pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600cdd0(pxVar2,uVar9,pfVar7,uVar10);
    local_78 = local_3c[0] * local_60[0] + local_3c[1] * local_60[1] + local_3c[2] * local_60[2];
    local_74 = local_60[3] * local_3c[0] + local_50 * local_3c[1] + local_4c * local_3c[2];
    local_70 = local_48 * local_3c[0] + local_44 * local_3c[1] + local_40 * local_3c[2];
    pfVar7 = &local_78;
    uVar9 = *(uint *)(this + 0x254);
    uVar10 = 3;
    local_6c = local_78;
    local_68 = local_74;
    local_64 = local_70;
    pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600ce60(pxVar2,uVar9,(int)pfVar7,uVar10);
    pCVar1 = *(CEntity **)(this + 0x148);
    if (pCVar1 != (CEntity *)0x0) {
      pCVar6 = pCVar1 + 0x18;
      *(int *)pCVar6 = *(int *)pCVar6 + -1;
      if (*(int *)pCVar6 == 0) {
        DeleteSelf(pCVar1);
      }
    }
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x2a8) = 0;
    pCVar3 = (CEntityEvent *)ETeleport::ETeleport((ETeleport *)&local_78);
    local_4 = 0;
    SendEvent(this,pCVar3,0);
    local_4 = 0xffffffff;
    CMovableEntity::AddToMovers((CMovableEntity *)this);
    if ((DAT_362ccf00 != 0) &&
       ((((iVar5 = *(int *)(this + 4), iVar5 == 3 || (iVar5 == 5)) || (iVar5 == 9)) || (iVar5 == 10)
        ))) {
      iVar5 = CMovableModelEntity::CheckForCollisionNow
                        ((CMovableModelEntity *)this,*(long *)(this + 0x35c),(CEntity **)&param_2);
      if (iVar5 != 0) {
        puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x80))();
        CPrintF(s_Entity___s__was_teleported_insid_36237b48,*puVar4,(double)*(float *)(this + 0x3c),
                (double)*(float *)(this + 0x40),(double)*(float *)(this + 0x44));
      }
    }
  }
  ExceptionList = local_c;
  return;
}

