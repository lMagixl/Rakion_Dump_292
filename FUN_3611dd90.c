
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_3611dd90(void *param_1)

{
  float fVar1;
  void *this;
  int iVar2;
  int iVar3;
  CEntity *pCVar4;
  CSelection<class_CBrushSector,1> *this_00;
  int iVar5;
  undefined4 uStack_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621868d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_1 + 0xd6c) = 0;
  *(undefined4 *)((int)param_1 + 0xd70) = 0;
  *(undefined4 *)((int)param_1 + 0xd74) = 0;
  this_00 = _pselbscVisTweaks;
  if ((DAT_362fcb98 != 0) && (_pselbscVisTweaks != (CSelection<class_CBrushSector,1> *)0x0)) {
    iVar3 = FUN_360cb790((int)_pselbscVisTweaks);
    if (0 < iVar3) {
      *(undefined4 *)((int)param_1 + 0xd70) = 0xffff;
      this_00 = _pselbscVisTweaks;
    }
    iVar5 = 0;
    iVar3 = FUN_360cb790((int)this_00);
    if (0 < iVar3) {
      do {
        iVar3 = FUN_360cb0d0(this_00,iVar5);
        if ((*(uint *)(iVar3 + 0x48) & 0x100) == 0) {
          iVar3 = FUN_360cb0d0(this_00,iVar5);
          *(uint *)((int)param_1 + 0xd70) =
               *(uint *)((int)param_1 + 0xd70) & *(uint *)(iVar3 + 0x50) & 0xffff;
        }
        else {
          iVar3 = FUN_360cb0d0(this_00,iVar5);
          *(uint *)((int)param_1 + 0xd74) = *(uint *)(iVar3 + 0x50) & 0xffff;
        }
        iVar5 = iVar5 + 1;
        iVar3 = FUN_360cb790((int)this_00);
      } while (iVar5 < iVar3);
    }
  }
  *(undefined4 *)((int)param_1 + 0x6c0) = 0;
  if (((*(int *)((int)param_1 + 0xd40) == 0) && (DAT_362fcb94 != 0)) &&
     (pCVar4 = CWorld::GetBackgroundViewer(*(CWorld **)((int)param_1 + 4)), pCVar4 != (CEntity *)0x0
     )) {
    *(undefined4 *)((int)param_1 + 0x6c0) = 1;
    *(CEntity **)((int)param_1 + 0x6c4) = pCVar4;
    CAnyProjection3D::operator=
              ((CAnyProjection3D *)((int)param_1 + 0x6c8),(CAnyProjection3D *)((int)param_1 + 0x3c))
    ;
    iVar3 = *(int *)((int)param_1 + 0x694);
    local_30 = *(float *)(iVar3 + 0x34);
    local_2c = *(float *)(iVar3 + 0x38);
    local_28 = *(float *)(iVar3 + 0x3c);
    local_38 = 0.0;
    local_3c = 0.0;
    local_34 = 0.0;
    (**(code **)(*(int *)pCVar4 + 100))(local_24);
    if (*(int *)(*(int *)((int)param_1 + 0x694) + 0x7c) != 0) {
      FUN_36058d60((float *)(*(int *)((int)param_1 + 0x694) + 0x84),&local_28);
    }
    CPlacement3D::RelativeToAbsoluteSmooth((CPlacement3D *)&uStack_40,(CPlacement3D *)&local_28);
    iVar3 = *(int *)((int)param_1 + 0xd20);
    *(undefined4 *)(iVar3 + 0x28) = uStack_40;
    *(float *)(iVar3 + 0x2c) = local_3c;
    *(float *)(iVar3 + 0x30) = local_38;
    *(float *)(iVar3 + 0x34) = local_34;
    *(float *)(iVar3 + 0x38) = local_30;
    *(float *)(iVar3 + 0x3c) = local_2c;
    iVar3 = *(int *)((int)param_1 + 0xd20);
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0xd20) + 0x50) = 0xbf800000;
    *(undefined4 *)(*(int *)((int)param_1 + 0xd20) + 0x13c) = 0x3f666666;
    *(undefined4 *)(*(int *)((int)param_1 + 0xd20) + 0x140) = 0x3f800000;
    *(undefined4 *)(*(int *)((int)param_1 + 0xd20) + 0x80) = 0;
    (**(code **)**(undefined4 **)((int)param_1 + 0xd20))();
  }
  if (*(int *)((int)param_1 + 0x34) == 0) {
    this = *(void **)((int)param_1 + 0x38);
    if (this == (void *)0x0) {
      if (*(int *)((int)param_1 + 0xd40) == 0) {
        iVar3 = *(int *)((int)param_1 + 0x694);
        local_3c = *(float *)(iVar3 + 0x28) - _DAT_362fcbe8;
        local_30 = _DAT_362fcbe8 + *(float *)(iVar3 + 0x28);
        local_38 = *(float *)(iVar3 + 0x2c) - _DAT_362fcbe8;
        local_2c = _DAT_362fcbe8 + *(float *)(iVar3 + 0x2c);
        local_34 = *(float *)(iVar3 + 0x30) - _DAT_362fcbe8;
        local_28 = _DAT_362fcbe8 + *(float *)(iVar3 + 0x30);
        *(float *)((int)param_1 + 0x1c) = local_3c;
        *(float *)((int)param_1 + 0x20) = local_38;
        *(float *)((int)param_1 + 0x24) = local_34;
        *(float *)((int)param_1 + 0x28) = local_30;
        *(float *)((int)param_1 + 0x2c) = local_2c;
        *(float *)((int)param_1 + 0x30) = local_28;
      }
      FUN_3611d190(param_1,(float *)((int)param_1 + 0x1c));
      if (DAT_362fcb8c != 0) {
        FUN_3611cd90(param_1,(float *)((int)param_1 + 0x1c));
      }
    }
    else {
      iVar5 = 0;
      uStack_4 = 0;
      iVar3 = FUN_3611f700((int)this);
      if (0 < iVar3) {
        do {
          iVar3 = FUN_3611f3b0(this,iVar5);
          iVar3 = *(int *)(*(int *)(iVar3 + 0xe8) + 0x1ac);
          iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x14) + 0x668);
          if ((*(byte *)(iVar2 + 0x10) & 2) == 0) {
            FUN_3611da40(param_1,iVar2,(float *)(iVar2 + 0x3c));
          }
          else {
            FUN_3611d130(param_1,iVar3);
          }
          iVar5 = iVar5 + 1;
          iVar3 = FUN_3611f700((int)this);
        } while (iVar5 < iVar3);
      }
      uStack_4 = 0xffffffff;
    }
  }
  else {
    FUN_3611da40(param_1,*(int *)((int)param_1 + 0x34),
                 (float *)(*(int *)((int)param_1 + 0x694) + 0x28));
    fVar1 = (*(float **)((int)param_1 + 0x34))[1];
    if ((fVar1 == 4.2039e-45) || (fVar1 == 7.00649e-45)) {
      FUN_3611a760(param_1,*(float **)((int)param_1 + 0x34));
    }
  }
  if ((DAT_362c5450 != 0) ||
     ((*(int *)((int)param_1 + 0xd40) == 0 &&
      (iVar3 = CListHead::IsEmpty((CListHead *)((int)param_1 + 0xe40)), iVar3 != 0)))) {
    FUN_3611cc50(param_1);
  }
  if (*(int *)((int)param_1 + 0x6c0) != 0) {
    FUN_3611da40(param_1,*(int *)((int)param_1 + 0x6c4),
                 (float *)(*(int *)((int)param_1 + 0x6c4) + 0x3c));
  }
  ExceptionList = pvStack_c;
  return;
}

