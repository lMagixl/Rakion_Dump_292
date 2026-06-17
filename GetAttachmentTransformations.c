
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelObject::GetAttachmentTransformations(long,class Matrix<float,3,3>
   &,class Vector<float,3> &,int) */

void __thiscall
CModelObject::GetAttachmentTransformations
          (CModelObject *this,long param_1,Matrix<float,3,3> *param_2,Vector<float,3> *param_3,
          int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CModelData *pCVar5;
  int *piVar6;
  CAttachmentModelObject *pCVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0xc69a0  1717
                       ?GetAttachmentTransformations@CModelObject@@QAEXJAAV?$Matrix@M$02$02@@AAV?$Vector@M$02@@H@Z
                        */
  pCVar5 = GetData(this);
  FUN_360b13d0();
  piVar6 = (int *)thunk_FUN_360b0e50(pCVar5 + 0x12a8,param_1);
  FUN_360b13e0();
  _DAT_362cbbf0 = *(float *)(this + 0x84) * *(float *)(pCVar5 + 0x1268);
  _DAT_362cbbf4 = *(float *)(this + 0x88) * *(float *)(pCVar5 + 0x126c);
  _DAT_362cbbf8 = *(float *)(this + 0x8c) * *(float *)(pCVar5 + 0x1270);
  _DAT_362cbbfc = *(undefined4 *)(pCVar5 + 0x1280);
  _DAT_362cbc00 = *(undefined4 *)(pCVar5 + 0x1284);
  _DAT_362cbc04 = *(undefined4 *)(pCVar5 + 0x1288);
  local_8c = _DAT_362cbbf0;
  local_88 = _DAT_362cbbf4;
  local_84 = _DAT_362cbbf8;
  CAnimObject::GetFrame((CAnimObject *)this,&local_28,&local_2c,(float *)&DAT_362cbbe8);
  iVar8 = *(int *)(pCVar5 + 0x1c);
  bVar10 = ((byte)pCVar5[0x1260] & 0x10) == 0;
  if (bVar10) {
    DAT_362cbbe4 = *(int *)(pCVar5 + 0x28) + iVar8 * local_28 * 4;
    DAT_362cbbdc = *(int *)(pCVar5 + 0x28) + iVar8 * local_2c * 4;
  }
  else {
    DAT_362cbbe0 = *(int *)(pCVar5 + 0x30) + iVar8 * local_28 * 8;
    DAT_362cbbd8 = *(int *)(pCVar5 + 0x30) + iVar8 * local_2c * 8;
  }
  DAT_362cbbec = (uint)!bVar10;
  FUN_360c5f30(*piVar6,&local_80);
  FUN_360c5f30(piVar6[1],&local_8c);
  FUN_360c5f30(piVar6[2],&local_5c);
  local_5c = local_5c - local_80;
  local_58 = local_58 - local_7c;
  local_54 = local_54 - local_78;
  local_8c = local_80 - local_8c;
  local_88 = local_7c - local_88;
  local_84 = local_78 - local_84;
  local_68 = local_80 * *(float *)param_2 +
             local_7c * *(float *)(param_2 + 4) + local_78 * *(float *)(param_2 + 8) +
             *(float *)param_3;
  local_64 = local_80 * *(float *)(param_2 + 0xc) +
             local_7c * *(float *)(param_2 + 0x10) + local_78 * *(float *)(param_2 + 0x14) +
             *(float *)(param_3 + 4);
  local_60 = local_80 * *(float *)(param_2 + 0x18) +
             local_7c * *(float *)(param_2 + 0x1c) + local_78 * *(float *)(param_2 + 0x20) +
             *(float *)(param_3 + 8);
  fVar1 = local_54 * *(float *)(param_2 + 8) +
          local_58 * *(float *)(param_2 + 4) + local_5c * *(float *)param_2;
  fVar2 = local_54 * *(float *)(param_2 + 0x14) +
          local_58 * *(float *)(param_2 + 0x10) + local_5c * *(float *)(param_2 + 0xc);
  fVar3 = local_54 * *(float *)(param_2 + 0x20) +
          local_58 * *(float *)(param_2 + 0x1c) + local_5c * *(float *)(param_2 + 0x18);
  local_98 = local_84 * *(float *)(param_2 + 8) +
             local_88 * *(float *)(param_2 + 4) + local_8c * *(float *)param_2;
  local_94 = local_84 * *(float *)(param_2 + 0x14) +
             local_88 * *(float *)(param_2 + 0x10) + local_8c * *(float *)(param_2 + 0xc);
  fVar4 = local_84 * *(float *)(param_2 + 0x20) +
          local_88 * *(float *)(param_2 + 0x1c) + local_8c * *(float *)(param_2 + 0x18);
  local_80 = fVar4 * fVar2 - local_94 * fVar3;
  local_7c = local_98 * fVar3 - fVar4 * fVar1;
  local_78 = local_94 * fVar1 - local_98 * fVar2;
  local_8c = local_94 * local_78 - fVar4 * local_7c;
  local_88 = fVar4 * local_80 - local_98 * local_78;
  local_84 = local_98 * local_7c - local_94 * local_80;
  fVar1 = SQRT(local_78 * local_78 + local_7c * local_7c + local_80 * local_80);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  local_7c = local_7c * fVar2;
  local_80 = local_80 * fVar2;
  local_78 = local_78 * fVar2;
  fVar1 = SQRT(local_84 * local_84 + local_88 * local_88 + local_8c * local_8c);
  local_6c = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    local_6c = _DAT_36223384 / fVar1;
  }
  local_70 = local_88 * local_6c;
  local_74 = local_8c * local_6c;
  local_6c = local_84 * local_6c;
  fVar1 = SQRT(fVar4 * fVar4 + local_94 * local_94 + local_98 * local_98);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  local_94 = local_94 * fVar2;
  local_98 = local_98 * fVar2;
  fVar4 = fVar4 * fVar2;
  local_c = local_78;
  local_24[2] = local_98;
  local_8 = local_6c;
  local_10 = local_94;
  local_4 = fVar4;
  local_24[0] = local_80;
  local_24[1] = local_74;
  local_24[3] = local_7c;
  local_14 = local_70;
  if (param_4 == 0) {
    pCVar7 = GetAttachmentModel(this,param_1);
    MakeRotationMatrixFast((Matrix<float,3,3> *)&local_50,(Vector<float,3> *)(pCVar7 + 0x18));
    fVar1 = *(float *)(pCVar7 + 0xc) * *(float *)(this + 0x84);
    fVar3 = *(float *)(pCVar7 + 0x10) * *(float *)(this + 0x88);
    fVar2 = *(float *)(pCVar7 + 0x14) * *(float *)(this + 0x8c);
    local_68 = local_68 + local_74 * fVar3 + fVar1 * local_80 + local_98 * fVar2;
    local_64 = local_64 + fVar1 * local_7c + local_70 * fVar3 + local_94 * fVar2;
    local_60 = local_60 + fVar1 * local_78 + local_6c * fVar3 + fVar4 * fVar2;
    local_24[0] = local_50 * local_80 + local_74 * local_44 + local_98 * local_38;
    local_24[1] = local_4c * local_80 + local_74 * local_40 + local_98 * local_34;
    local_24[2] = local_48 * local_80 + local_74 * local_3c + local_98 * local_30;
    local_24[3] = local_50 * local_7c + local_70 * local_44 + local_94 * local_38;
    local_14 = local_4c * local_7c + local_70 * local_40 + local_94 * local_34;
    local_10 = local_48 * local_7c + local_70 * local_3c + local_94 * local_30;
    local_c = local_50 * local_78 + local_6c * local_44 + fVar4 * local_38;
    local_8 = local_4c * local_78 + local_6c * local_40 + fVar4 * local_34;
    local_4 = local_48 * local_78 + local_6c * local_3c + fVar4 * local_30;
    pfVar9 = local_24;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(float *)param_2 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      param_2 = param_2 + 4;
    }
  }
  else {
    pfVar9 = local_24;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(float *)param_2 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      param_2 = param_2 + 4;
    }
  }
  *(float *)param_3 = local_68;
  *(float *)(param_3 + 4) = local_64;
  *(float *)(param_3 + 8) = local_60;
  return;
}

