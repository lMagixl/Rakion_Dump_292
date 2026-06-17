
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_3611b530(void *this,undefined4 *param_1)

{
  void *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  bool bVar13;
  float10 fVar14;
  float afStack_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  this_00 = (void *)((int)this + 0xd94);
  iVar7 = FUN_3611f840((int)this_00);
  if (iVar7 - *(int *)((int)this + 0xda8) < 1) {
    FUN_36122b30(this_00,*(int *)((int)this + 0xdac));
  }
  iVar7 = *(int *)((int)this + 0xda8);
  *(int *)((int)this + 0xda8) = iVar7 + 1;
  pfVar8 = (float *)FUN_3611fd70(this_00,iVar7);
  param_1[100] = pfVar8;
  iVar7 = *(int *)((int)this + 0xd90);
  iVar2 = *(int *)((int)this + 0xd8c);
  pfVar11 = pfVar8 + 3;
  pfVar8[0x39] = (float)param_1;
  pfVar8[4] = 0.0;
  pfVar8[5] = 0.0;
  pfVar8[6] = 0.0;
  pfVar8[7] = 0.0;
  pfVar8[0x3b] = 1.4013e-45;
  *(undefined1 *)((int)pfVar8 + 0x101) = 0;
  pfVar8[0x3a] = (float)param_1;
  *(undefined1 *)(pfVar8 + 0x40) = *(undefined1 *)((int)param_1 + 0x189);
  if (*(int *)(iVar2 + 0x66c) != 0) {
    CAnimObject::SetData
              ((CAnimObject *)(param_1 + 7),*(CAnimData **)(*(int *)(iVar2 + 0x66c) + 0x14));
    param_1[0x14] = *(undefined4 *)(*(int *)(iVar2 + 0x66c) + 0x18);
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)((int)param_1 + 0x4e) = 0;
    *(undefined1 *)((int)param_1 + 0x4d) = 2;
    CAnimObject::SetData((CAnimObject *)(param_1 + 0x15),(CAnimData *)0x0);
    CAnimObject::SetData((CAnimObject *)(param_1 + 0x23),(CAnimData *)0x0);
    param_1[0x32] = 0x60c040;
  }
  iVar3 = *(int *)*param_1;
  *pfVar8 = *(float *)(iVar3 + 0x68);
  pfVar8[1] = *(float *)(iVar3 + 0x6c);
  pfVar8[2] = *(float *)(iVar3 + 0x70);
  fVar9 = DAT_362fcbc4;
  if (DAT_362fcbc0 != 1) {
    if (DAT_362fcbc0 == 3) {
      fVar9 = *(float *)(iVar7 + 0x3c);
    }
    else {
      fVar9 = (float)param_1[0x31];
    }
  }
  pfVar8[0x36] = fVar9;
  pfVar8[0x34] = 0.0;
  if ((DAT_362fcbc8 != 0) && ((param_1[0x32] & 0x4000) == 0)) {
    pfVar8[0x34] = (float)(param_1 + 0x34);
  }
  local_8 = (float)(int)-param_1[0x3c] * _DAT_362265a4;
  local_18 = 0x3f800000;
  local_14 = 0;
  local_10 = 0;
  local_4 = (float)(int)-param_1[0x3d] * _DAT_362265a4;
  local_c = 0x3f800000;
  CMappingDefinition::MakeMappingVectors
            ((CMappingDefinition *)&local_18,(CMappingVectors *)(iVar3 + 0x44),
             (CMappingVectors *)(pfVar8 + 0x23));
  bVar1 = *(byte *)((int)param_1 + 0x18a);
  iVar3 = *(int *)(*(int *)((int)this + 4) + 0xc);
  *(byte *)((int)pfVar8 + 0xc3) = *(byte *)(iVar3 + 4 + (uint)bVar1 * 0xc) | 3;
  fVar9 = (float)MulColors(param_1[0x33],*(ulong *)(iVar3 + (uint)bVar1 * 0xc + 8));
  pfVar8[0x2f] = fVar9;
  FUN_36121130(this,param_1,(int)pfVar11,0);
  FUN_36121130(this,param_1,(int)pfVar11,1);
  FUN_36121130(this,param_1,(int)pfVar11,2);
  pfVar8[0x37] = 0.0;
  if (DAT_362fcbc0 != 4) {
    pfVar8[0x31] = 0.0;
    pfVar8[0x32] = 0.0;
    pfVar8[0x33] = 0.0;
  }
  if (*(int *)((int)this + 0xd64) != 0) {
    pfVar8[0x37] = 7.17465e-43;
  }
  if (*(int *)((int)this + 0xd68) != 0) {
    pfVar8[0x37] = (float)((uint)pfVar8[0x37] | 0x400);
  }
  if (DAT_362fcbf8 == 0) {
LAB_3611b7b2:
    bVar13 = false;
  }
  else {
    if (DAT_362fcbf8 == 2) {
      bVar13 = (param_1[0x32] & 0x100) == 0;
LAB_3611b7b0:
      if (bVar13) goto LAB_3611b7b2;
    }
    else {
      if (DAT_362fcbf8 == 3) {
        bVar13 = (*(byte *)(iVar7 + 0x44) & 1) == 0;
        goto LAB_3611b7b0;
      }
      if ((DAT_362fcbf8 != 1) || ((*(byte *)(iVar2 + 0x670) & 1) == 0)) goto LAB_3611b7b2;
    }
    pfVar8[0x37] = (float)((uint)pfVar8[0x37] | 1);
    bVar13 = true;
  }
  if ((*(byte *)(param_1 + 0x32) & 0x20) != 0) {
    pfVar8[0x37] = (float)((uint)pfVar8[0x37] | 2);
  }
  if ((*(int *)((int)this + 0x6c0) == 0) ||
     ((*(uint *)(*(int *)(*(int *)(*(int *)(param_1[0x6b] + 0x38) + 0x14) + 0x668) + 0x10) & 0x200)
      == 0)) {
    bVar5 = false;
    if ((*(char *)((int)this + 0xd5c) == '\0') ||
       (*(char *)((int)this + 0xd5c) != *(char *)((int)param_1 + 0x189))) goto LAB_3611b852;
  }
  else {
    bVar5 = true;
  }
  pfVar8[0x37] = (float)((uint)pfVar8[0x37] | 0x80000000);
  *pfVar8 = *pfVar8 - _DAT_36228798;
LAB_3611b852:
  pfVar8[0x3e] = 0.0;
  pfVar8[0x3f] = 0.0;
  fVar14 = (float10)(**(code **)(**(int **)(iVar2 + 0x668) + 0x48))();
  if ((float10)_DAT_36223384 <= fVar14) {
    bVar6 = false;
  }
  else {
    iVar7 = (int)ROUND((float)fVar14 * 255.0);
    if ((*(byte *)(pfVar8 + 0x30) & 0x70) == 0) {
      *(byte *)(pfVar8 + 0x30) = *(byte *)(pfVar8 + 0x30) | 0x10;
      pfVar8[0x2c] = (float)((uint)pfVar8[0x2c] | 0xff);
    }
    if (((uint)pfVar8[0x30] & 0x10) != 0) {
      fVar9 = pfVar8[0x2c];
      *(undefined1 *)(pfVar8 + 0x2c) = 0;
      pfVar8[0x2c] = (float)((uint)pfVar8[0x2c] | (int)(((uint)fVar9 & 0xff) * iVar7) >> 8);
    }
    if ((*(byte *)((int)pfVar8 + 0xc1) & 0x70) == 0) {
      *(byte *)((int)pfVar8 + 0xc1) = *(byte *)((int)pfVar8 + 0xc1) | 0x10;
      pfVar8[0x2d] = (float)((uint)pfVar8[0x2d] | 0xff);
    }
    if ((*(byte *)((int)pfVar8 + 0xc1) & 0x10) != 0) {
      fVar9 = pfVar8[0x2d];
      *(undefined1 *)(pfVar8 + 0x2d) = 0;
      pfVar8[0x2d] = (float)((uint)pfVar8[0x2d] | (int)(((uint)fVar9 & 0xff) * iVar7) >> 8);
    }
    if ((*(byte *)((int)pfVar8 + 0xc2) & 0x70) == 0) {
      *(byte *)((int)pfVar8 + 0xc2) = *(byte *)((int)pfVar8 + 0xc2) | 0x10;
      pfVar8[0x2e] = (float)((uint)pfVar8[0x2e] | 0xff);
    }
    if ((*(byte *)((int)pfVar8 + 0xc2) & 0x10) != 0) {
      fVar9 = pfVar8[0x2e];
      *(undefined1 *)(pfVar8 + 0x2e) = 0;
      pfVar8[0x2e] = (float)((uint)pfVar8[0x2e] | (int)(((uint)fVar9 & 0xff) * iVar7) >> 8);
    }
    bVar6 = true;
  }
  uVar4 = param_1[0x32];
  uVar10 = uVar4 & 0xfff7ffff;
  param_1[0x32] = uVar10;
  if ((bVar6) || (((uVar4 & 0x40) != 0 && (((char)(uVar10 >> 8) < '\0' || (bVar13)))))) {
    if (*(int *)((int)this + 0xd40) == 0) {
      param_1[0x32] = uVar10 | 0x80000;
      if (bVar5) {
        *pfVar11 = *(float *)((int)this + 0x18);
        *(float **)((int)this + 0x18) = pfVar11;
      }
      else {
        *pfVar11 = *(float *)((int)this + 0x10);
        *(float **)((int)this + 0x10) = pfVar11;
      }
      if ((-1 < (char)((uint)param_1[0x32] >> 8)) && (!bVar6)) {
        if (DAT_362fcbf0 != 0) {
          pfVar8[0x31] = (float)(DAT_362fcbf0 + 0x24);
          pfVar8[0x2c] = -NAN;
          *(undefined1 *)(pfVar8 + 0x30) = 0x10;
        }
        pfVar11 = pfVar8 + 0x23;
        pfVar12 = pfVar8 + 8;
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar12 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          pfVar12 = pfVar12 + 1;
        }
        pfVar11 = (float *)FUN_3605ccc0(param_1 + 0x65,afStack_24);
        fVar9 = SQRT(pfVar11[2] * pfVar11[2] + pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11) *
                _DAT_362253e4;
        pfVar8[0xb] = fVar9 * pfVar8[0xb];
        pfVar8[0xc] = fVar9 * pfVar8[0xc];
        pfVar8[0xd] = fVar9 * pfVar8[0xd];
        pfVar8[0xe] = fVar9 * pfVar8[0xe];
        pfVar8[0xf] = fVar9 * pfVar8[0xf];
        pfVar8[0x10] = fVar9 * pfVar8[0x10];
        return pfVar8;
      }
    }
  }
  else {
    if (!bVar5) {
      *pfVar11 = *(float *)((int)this + 0xc);
      *(float **)((int)this + 0xc) = pfVar11;
      return pfVar8;
    }
    *pfVar11 = *(float *)((int)this + 0x14);
    *(float **)((int)this + 0x14) = pfVar11;
  }
  return pfVar8;
}

