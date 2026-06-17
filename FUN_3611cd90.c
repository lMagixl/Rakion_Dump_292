
void __thiscall FUN_3611cd90(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  CBrushMip *pCVar4;
  int *piVar5;
  void *this_00;
  int iVar6;
  AABBox<float,3> *pAVar7;
  float local_8c;
  float local_7c [6];
  float local_64;
  float local_60;
  int local_5c;
  void *local_58;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  AABBox<float,3> local_3c [8];
  undefined4 auStack_34 [4];
  CTerrain local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621864f;
  local_c = ExceptionList;
  this_00 = (void *)(*(int *)((int)this + 4) + 0x15c);
  iVar6 = 0;
  local_5c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  local_58 = this_00;
  iVar2 = FUN_360caf20((int)this_00);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_360cafb0(this_00,iVar6);
      if ((*(int *)(iVar2 + 4) == 4) ||
         ((iVar2 = FUN_360cafb0(this_00,iVar6), *(int *)(iVar2 + 4) == 8 && (DAT_362fcb90 != 0)))) {
        iVar2 = FUN_360cafb0(this_00,iVar6);
        if ((*(byte *)(iVar2 + 0x10) & 2) == 0) {
          iVar2 = FUN_360cafb0(this_00,iVar6);
          pCVar4 = CBrush3D::GetFirstMip(*(CBrush3D **)(iVar2 + 0x7c));
          local_60 = *(float *)(pCVar4 + 0x30) - *param_1;
          if ((~(((uint)(param_1[5] - *(float *)(pCVar4 + 0x2c)) |
                 (uint)local_60 | (uint)(param_1[3] - *(float *)(pCVar4 + 0x24)) |
                 (uint)(*(float *)(pCVar4 + 0x34) - param_1[1]) |
                 (uint)(param_1[4] - *(float *)(pCVar4 + 0x28)) |
                 (uint)(*(float *)(pCVar4 + 0x38) - param_1[2])) >> 0x1f) & 1) != 0) {
            iVar2 = 0;
            piVar5 = (int *)FUN_360cafb0(this_00,iVar6);
            FUN_3611ca20(this,piVar5,iVar2);
          }
        }
      }
      else {
        iVar2 = FUN_360cafb0(this_00,iVar6);
        if ((*(int *)(iVar2 + 4) == 3) ||
           (iVar2 = FUN_360cafb0(this_00,iVar6), *(int *)(iVar2 + 4) == 5)) {
          iVar2 = 1;
          do {
            local_7c[iVar2 + -1] = 3e+38;
            local_7c[iVar2 + 2] = -3e+38;
            iVar2 = iVar2 + 1;
          } while (iVar2 < 4);
          pAVar7 = (AABBox<float,3> *)local_7c;
          iVar2 = FUN_360cafb0(this_00,iVar6);
          CModelObject::GetCurrentFrameBBox(*(CModelObject **)(iVar2 + 0x7c),pAVar7);
          local_8c = SQRT(local_7c[0] * local_7c[0] +
                          local_7c[1] * local_7c[1] + local_7c[2] * local_7c[2]);
          fVar1 = SQRT(local_7c[5] * local_7c[5] +
                       local_7c[4] * local_7c[4] + local_7c[3] * local_7c[3]);
          if (local_8c < fVar1) {
            local_8c = fVar1;
          }
          iVar2 = FUN_360cafb0(this_00,iVar6);
          local_50 = *(float *)(iVar2 + 0x40) - local_8c;
          local_44 = *(float *)(iVar2 + 0x40) + local_8c;
          local_4c = *(float *)(iVar2 + 0x44) - local_8c;
          local_40 = *(float *)(iVar2 + 0x44) + local_8c;
          local_64 = (*(float *)(iVar2 + 0x3c) + local_8c) - *param_1;
          if ((~(((uint)(param_1[5] - local_4c) |
                 (uint)local_64 | (uint)(param_1[3] - (*(float *)(iVar2 + 0x3c) - local_8c)) |
                 (uint)(local_44 - param_1[1]) | (uint)(param_1[4] - local_50) |
                 (uint)(local_40 - param_1[2])) >> 0x1f) & 1) != 0) {
            pfVar3 = (float *)FUN_360cafb0(this_00,iVar6);
            FUN_3611a760(this,pfVar3);
          }
        }
        else {
          iVar2 = FUN_360cafb0(this_00,iVar6);
          if ((*(int *)(iVar2 + 4) == 9) ||
             (iVar2 = FUN_360cafb0(this_00,iVar6), *(int *)(iVar2 + 4) == 10)) {
            iVar2 = 1;
            do {
              *(undefined4 *)(local_3c + iVar2 * 4 + -4) = 0x7f61b1e6;
              auStack_34[iVar2] = 0xff61b1e6;
              iVar2 = iVar2 + 1;
            } while (iVar2 < 4);
            pAVar7 = local_3c;
            iVar2 = FUN_360cafb0(this_00,iVar6);
            CModelInstance::GetCurrentColisionBox(*(CModelInstance **)(iVar2 + 0x7c),pAVar7);
            pfVar3 = (float *)FUN_360cafb0(this_00,iVar6);
            FUN_3611ab90(this,pfVar3);
          }
          else {
            iVar2 = FUN_360cafb0(this_00,iVar6);
            if (*(int *)(iVar2 + 4) == 0xb) {
              FUN_360cafb0(this_00,iVar6);
              TR_GetStretchedTerrainBBox(local_24);
              iVar2 = FUN_360cafb0(this_00,iVar6);
              FUN_3611afa0(this,iVar2);
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      local_5c = iVar6;
      iVar2 = FUN_360caf20((int)this_00);
    } while (iVar6 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

