
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3611d190(void *this,float *param_1)

{
  CBrush3D *this_00;
  float fVar1;
  int iVar2;
  float *pfVar3;
  CBrushMip *this_01;
  void *this_02;
  int iVar4;
  float10 fVar5;
  float fVar6;
  double *pdVar7;
  double dVar8;
  int local_64;
  float local_3c;
  float local_38;
  float local_34;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_36218669;
  local_14 = ExceptionList;
  fVar1 = SQRT((param_1[3] - *param_1) * (param_1[3] - *param_1) +
               (param_1[4] - param_1[1]) * (param_1[4] - param_1[1]) +
               (param_1[5] - param_1[2]) * (param_1[5] - param_1[2])) * _DAT_36227cf0;
  ExceptionList = &local_14;
  FUN_3605cd80(param_1,&local_3c);
  this_02 = (void *)(*(int *)((int)this + 4) + 0x15c);
  *(double *)((int)this + 0x6b0) =
       (double)(*(float *)(*(int *)((int)this + 0x694) + 0x4c) * _DAT_362350bc);
  local_64 = 0;
  *(double *)((int)this + 0x698) = (double)local_3c;
  *(double *)((int)this + 0x6a0) = (double)local_38;
  *(double *)((int)this + 0x6a8) = (double)local_34;
  local_c = 0;
  iVar2 = FUN_360caf20((int)this_02);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_360cafb0(this_02,local_64);
      if ((((*(int *)(iVar2 + 4) != 8) || (DAT_362fcb90 != 0)) &&
          ((iVar2 = FUN_360cafb0(this_02,local_64), *(int *)(iVar2 + 4) == 4 ||
           (iVar2 = FUN_360cafb0(this_02,local_64), *(int *)(iVar2 + 4) == 8)))) &&
         (iVar2 = FUN_360cafb0(this_02,local_64), (*(byte *)(iVar2 + 0x10) & 2) != 0)) {
        pfVar3 = (float *)FUN_360cafb0(this_02,local_64);
        this_00 = (CBrush3D *)pfVar3[0x1f];
        FUN_3611bd10(this,pfVar3);
        fVar5 = (float10)(**(code **)(**(int **)(this_00 + 0x664) + 0x40))();
        fVar6 = CWorldRenderPrefs::GetCurrentMipBrushingFactor(&_wrpWorldRenderPrefs,(float)fVar5);
        this_01 = CBrush3D::GetBrushMipByDistance(this_00,fVar6);
        if (this_01 != (CBrushMip *)0x0) {
          iVar4 = 0;
          local_c = CONCAT31(local_c._1_3_,1);
          iVar2 = FUN_36043600((int)this_01);
          if (0 < iVar2) {
            do {
              iVar2 = FUN_36043710(this_01,iVar4);
              if (((~(((uint)(*(float *)(iVar2 + 0x60) - *param_1) |
                       (uint)(param_1[3] - *(float *)(iVar2 + 0x54)) |
                       (uint)(*(float *)(iVar2 + 100) - param_1[1]) |
                       (uint)(param_1[4] - *(float *)(iVar2 + 0x58)) |
                       (uint)(*(float *)(iVar2 + 0x68) - param_1[2]) |
                      (uint)(param_1[5] - *(float *)(iVar2 + 0x5c))) >> 0x1f) & 1) != 0) &&
                 ((iVar2 = FUN_36043710(this_01,iVar4), (*(byte *)(iVar2 + 0x44) & 2) == 0 ||
                  (*(int *)((int)this + 0xd40) != 0)))) {
                pdVar7 = &dStack_30;
                dStack_30 = (double)local_3c;
                dStack_28 = (double)local_38;
                dStack_20 = (double)local_34;
                dVar8 = (double)fVar1;
                iVar2 = FUN_36043710(this_01,iVar4);
                fVar5 = FUN_360e0680(*(int *)(iVar2 + 0x8c),pdVar7,dVar8);
                if ((float10)_DAT_3622376c <= fVar5) {
                  iVar2 = FUN_36043710(this_01,iVar4);
                  FUN_3611c7e0(this,iVar2);
                  iVar2 = FUN_36043710(this_01,iVar4);
                  if ((DAT_362fcb98 == 0) ||
                     (_pselbscVisTweaks == (CSelection<class_CBrushSector,1> *)0x0)) {
                    if ((*(uint *)(iVar2 + 0x48) & 0x100) == 0) {
                      *(uint *)((int)this + 0xd70) =
                           *(uint *)((int)this + 0xd70) | *(uint *)(iVar2 + 0x50) & 0xffff;
                    }
                    else {
                      *(uint *)((int)this + 0xd74) = *(uint *)(iVar2 + 0x50) & 0xffff;
                    }
                  }
                }
              }
              iVar4 = iVar4 + 1;
              iVar2 = FUN_36043600((int)this_01);
            } while (iVar4 < iVar2);
          }
          local_c = local_c & 0xffffff00;
        }
      }
      local_64 = local_64 + 1;
      iVar2 = FUN_360caf20((int)this_02);
    } while (local_64 < iVar2);
  }
  ExceptionList = local_14;
  return;
}

