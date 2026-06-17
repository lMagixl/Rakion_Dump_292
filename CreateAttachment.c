
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CModelObject::CreateAttachment(class CRenderModel &,class
   CAttachmentModelObject &) */

int __thiscall
CModelObject::CreateAttachment
          (CModelObject *this,CRenderModel *param_1,CAttachmentModelObject *param_2)

{
  float fVar1;
  CRenderModel *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  long *plVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  ulonglong uVar11;
  int unaff_retaddr;
  float local_128;
  float local_124;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  long local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8 [4];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [6];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [3];
  long local_70;
  float local_6c;
  float local_68 [9];
  float afStack_44 [17];
  
                    /* 0xbdec0  1410
                       ?CreateAttachment@CModelObject@@QAEHAAVCRenderModel@@AAVCAttachmentModelObject@@@Z
                        */
  this_00 = *(CRenderModel **)(param_2 + 0xd0);
  *(uint *)(this_00 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0x206 | 1;
  FUN_360b13d0();
  plVar5 = (long *)thunk_FUN_360b0e50((void *)(*(int *)param_1 + 0x12a8),*(int *)(param_2 + 8));
  FUN_360b13e0();
  *(undefined4 *)(this_00 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this_00 + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this_00 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this_00 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this_00 + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this_00 + 200) = *(undefined4 *)(param_1 + 200);
  local_f8 = plVar5[1];
  local_70 = plVar5[2];
  UnpackVertex(this,param_1,*plVar5,(Vector<float,3> *)&local_11c);
  UnpackVertex(this,param_1,local_f8,(Vector<float,3> *)&local_104);
  UnpackVertex(this,param_1,local_70,(Vector<float,3> *)local_e8);
  local_e8[0] = local_e8[0] - local_11c;
  local_e8[1] = local_e8[1] - local_118;
  local_e8[2] = local_e8[2] - local_114;
  local_104 = local_11c - local_104;
  local_100 = local_118 - local_100;
  local_fc = local_114 - local_fc;
  local_f4 = local_118 * *(float *)(param_1 + 0x44) +
             local_11c * *(float *)(param_1 + 0x40) + local_114 * *(float *)(param_1 + 0x48) +
             *(float *)(param_1 + 0x34);
  local_f0 = local_114 * *(float *)(param_1 + 0x54) +
             local_118 * *(float *)(param_1 + 0x50) + local_11c * *(float *)(param_1 + 0x4c) +
             *(float *)(param_1 + 0x38);
  local_ec = local_11c * *(float *)(param_1 + 0x58) +
             local_114 * *(float *)(param_1 + 0x60) + local_118 * *(float *)(param_1 + 0x5c) +
             *(float *)(param_1 + 0x3c);
  fVar1 = local_e8[0] * *(float *)(param_1 + 0x40) +
          local_e8[2] * *(float *)(param_1 + 0x48) + local_e8[1] * *(float *)(param_1 + 0x44);
  fVar2 = local_e8[2] * *(float *)(param_1 + 0x54) +
          local_e8[1] * *(float *)(param_1 + 0x50) + local_e8[0] * *(float *)(param_1 + 0x4c);
  fVar3 = local_e8[2] * *(float *)(param_1 + 0x60) +
          local_e8[1] * *(float *)(param_1 + 0x5c) + local_e8[0] * *(float *)(param_1 + 0x58);
  local_128 = local_104 * *(float *)(param_1 + 0x40) +
              local_fc * *(float *)(param_1 + 0x48) + local_100 * *(float *)(param_1 + 0x44);
  local_124 = local_fc * *(float *)(param_1 + 0x54) +
              local_100 * *(float *)(param_1 + 0x50) + local_104 * *(float *)(param_1 + 0x4c);
  fVar4 = local_fc * *(float *)(param_1 + 0x60) +
          local_100 * *(float *)(param_1 + 0x5c) + local_104 * *(float *)(param_1 + 0x58);
  local_11c = fVar4 * fVar2 - local_124 * fVar3;
  local_118 = local_128 * fVar3 - fVar4 * fVar1;
  local_114 = local_124 * fVar1 - local_128 * fVar2;
  local_104 = local_114 * local_124 - local_118 * fVar4;
  local_100 = local_11c * fVar4 - local_114 * local_128;
  local_fc = local_118 * local_128 - local_11c * local_124;
  fVar1 = SQRT(local_114 * local_114 + local_118 * local_118 + local_11c * local_11c);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  local_114 = local_114 * fVar2;
  local_118 = local_118 * fVar2;
  local_11c = local_11c * fVar2;
  fVar1 = SQRT(local_fc * local_fc + local_100 * local_100 + local_104 * local_104);
  local_108 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    local_108 = _DAT_36223384 / fVar1;
  }
  local_10c = local_100 * local_108;
  local_110 = local_104 * local_108;
  local_108 = local_fc * local_108;
  fVar1 = SQRT(fVar4 * fVar4 + local_124 * local_124 + local_128 * local_128);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  local_124 = local_124 * fVar2;
  local_128 = local_128 * fVar2;
  fVar4 = fVar4 * fVar2;
  MakeRotationMatrixFast((Matrix<float,3,3> *)&local_c4,(Vector<float,3> *)(param_2 + 0x18));
  fVar1 = *(float *)(this + 0x84) * *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(this + 0x88) * *(float *)(param_2 + 0x10);
  fVar3 = *(float *)(this + 0x8c) * *(float *)(param_2 + 0x14);
  local_e8[0] = fVar2 * local_110 + fVar3 * local_128 + fVar1 * local_11c;
  local_e8[1] = fVar2 * local_10c + fVar3 * local_124 + fVar1 * local_118;
  local_e8[2] = fVar2 * local_108 + fVar3 * fVar4 + fVar1 * local_114;
  local_104 = local_f4 + local_e8[0];
  local_6c = local_104;
  local_100 = local_f0 + local_e8[1];
  local_68[0] = local_100;
  local_fc = local_ec + local_e8[2];
  local_68[1] = local_fc;
  local_a8[2] = local_b8 * local_110 + local_ac * local_128 + local_c4 * local_11c;
  local_a8[3] = local_b4 * local_110 + local_a8[0] * local_128 + local_c0 * local_11c;
  local_a8[4] = local_b0 * local_110 + local_a8[1] * local_128 + local_bc * local_11c;
  local_a8[5] = local_b8 * local_10c + local_ac * local_124 + local_c4 * local_118;
  local_90 = local_b4 * local_10c + local_a8[0] * local_124 + local_c0 * local_118;
  local_8c = local_b0 * local_10c + local_a8[1] * local_124 + local_bc * local_118;
  local_88 = local_b8 * local_108 + local_ac * fVar4 + local_c4 * local_114;
  local_84 = local_b4 * local_108 + local_a8[0] * fVar4 + local_c0 * local_114;
  local_80 = local_b0 * local_108 + local_a8[1] * fVar4 + local_bc * local_114;
  pfVar8 = local_a8 + 2;
  pfVar9 = local_e8;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  CRenderModel::SetObjectPlacement
            (this_00,(Vector<float,3> *)&local_6c,(Matrix<float,3,3> *)local_e8);
  if (DAT_362a40e4 < 1) {
    DAT_362a40e4 = 0;
    return 1;
  }
  (**(code **)(*DAT_362cabb8 + 0x18))(&local_6c,local_7c);
  FUN_360bd750();
  fVar1 = *(float *)(this_00 + 0xac);
  local_100 = SQRT(*(float *)(this_00 + 0xb4) * *(float *)(this_00 + 0xb4) +
                   *(float *)(this_00 + 0xb0) * *(float *)(this_00 + 0xb0) + fVar1 * fVar1);
  fVar1 = *(float *)(this_00 + 0xb8);
  fVar1 = SQRT(*(float *)(this_00 + 0xc0) * *(float *)(this_00 + 0xc0) +
               *(float *)(this_00 + 0xbc) * *(float *)(this_00 + 0xbc) + fVar1 * fVar1);
  if (local_100 < fVar1) {
    local_100 = fVar1;
  }
  local_a8[0] = local_e8[1] * (float)DAT_362cabb8[0x3f] +
                fStack_d8 * (float)DAT_362cabb8[0x40] + local_f0 * (float)DAT_362cabb8[0x3e];
  local_a8[1] = local_e8[2] * (float)DAT_362cabb8[0x3f] +
                fStack_d4 * (float)DAT_362cabb8[0x40] + local_ec * (float)DAT_362cabb8[0x3e];
  local_a8[2] = local_e8[3] * (float)DAT_362cabb8[0x3f] +
                fStack_d0 * (float)DAT_362cabb8[0x40] + local_e8[0] * (float)DAT_362cabb8[0x3e];
  local_a8[3] = local_f0 * (float)DAT_362cabb8[0x41] +
                local_e8[1] * (float)DAT_362cabb8[0x42] + fStack_d8 * (float)DAT_362cabb8[0x43];
  local_a8[4] = local_ec * (float)DAT_362cabb8[0x41] +
                local_e8[2] * (float)DAT_362cabb8[0x42] + fStack_d4 * (float)DAT_362cabb8[0x43];
  local_a8[5] = local_e8[0] * (float)DAT_362cabb8[0x41] +
                local_e8[3] * (float)DAT_362cabb8[0x42] + fStack_d0 * (float)DAT_362cabb8[0x43];
  local_90 = local_f0 * (float)DAT_362cabb8[0x44] +
             local_e8[1] * (float)DAT_362cabb8[0x45] + fStack_d8 * (float)DAT_362cabb8[0x46];
  local_8c = local_ec * (float)DAT_362cabb8[0x44] +
             local_e8[2] * (float)DAT_362cabb8[0x45] + fStack_d4 * (float)DAT_362cabb8[0x46];
  local_88 = local_e8[0] * (float)DAT_362cabb8[0x44] +
             local_e8[3] * (float)DAT_362cabb8[0x45] + fStack_d0 * (float)DAT_362cabb8[0x46];
  pfVar8 = local_a8;
  pfVar9 = local_68;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  pfVar8 = local_68;
  pfVar9 = &local_84;
  pfVar6 = FUN_360bef70(&local_f0,(float *)(this_00 + 0xac),(float *)(this_00 + 0xb8));
  FUN_360bf170(afStack_44,pfVar6,pfVar9,pfVar8);
  if (1 < DAT_362a40e4) {
    iVar7 = (**(code **)(*DAT_362cabb8 + 0x28))(&local_84,local_100);
    bVar10 = false;
    if (iVar7 == 0) {
      iVar7 = (**(code **)(*DAT_362cabb8 + 0x2c))(afStack_44);
      bVar10 = iVar7 == 0;
    }
    if (bVar10 || iVar7 < 0) {
      if (iVar7 < 0) goto LAB_360be9db;
    }
    else {
      *(uint *)(this_00 + 0xc4) = *(uint *)(this_00 + 0xc4) | 0x80;
    }
  }
  if ((DAT_362cabb8[0x1f] != 0) || (DAT_362cabb8[0x20] != 0)) {
    fVar1 = (local_84 * (float)DAT_362cabb8[0x25] +
            local_7c[0] * (float)DAT_362cabb8[0x27] + local_80 * (float)DAT_362cabb8[0x26]) -
            (float)DAT_362cabb8[0x28];
    if (fVar1 < -local_100) {
LAB_360be9db:
      iVar7 = CListHead::IsEmpty((CListHead *)(unaff_retaddr + 0xc0));
      return (uint)(iVar7 == 0);
    }
    if (fVar1 <= local_100) {
      FUN_36058b90(afStack_44,(float *)(DAT_362cabb8 + 0x25));
      uVar11 = FUN_361bfd6c();
      if ((int)uVar11 < 1) {
        if (-1 < (int)uVar11) {
          return 1;
        }
        goto LAB_360be9db;
      }
    }
    *(uint *)(this_00 + 0xc4) = *(uint *)(this_00 + 0xc4) | 0x100;
  }
  return 1;
}

