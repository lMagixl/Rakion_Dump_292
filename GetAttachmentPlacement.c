
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CPlacement3D __thiscall CModelObject::GetAttachmentPlacement(class
   CAttachmentModelObject &) */

void __thiscall
CModelObject::GetAttachmentPlacement(CModelObject *this,CAttachmentModelObject *param_1)

{
  CModelData *pCVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  int in_stack_00000008;
  float local_94;
  float local_90;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  Vector<float,3> local_c [12];
  
                    /* 0xb78a0  1716
                       ?GetAttachmentPlacement@CModelObject@@QAE?AVCPlacement3D@@AAVCAttachmentModelObject@@@Z
                        */
  pCVar1 = GetData(this);
  iVar4 = *(int *)(in_stack_00000008 + 8);
  pCVar1 = pCVar1 + 0x12a8;
  pfVar2 = (float *)FUN_360b0e50(pCVar1,iVar4);
  fVar8 = *pfVar2;
  iVar3 = FUN_360b0e50(pCVar1,iVar4);
  local_7c = *(float *)(iVar3 + 4);
  iVar4 = FUN_360b0e50(pCVar1,iVar4);
  fVar7 = *(float *)(iVar4 + 8);
  lVar5 = CAnimObject::GetFrame((CAnimObject *)this);
  if (((fVar8 == local_7c) || (fVar8 == fVar7)) || (local_7c == fVar7)) {
    pCVar1 = GetData(this);
    pcVar6 = StringDuplicate(*(char **)(pCVar1 + 0xc));
    fVar8 = 0.0;
    local_7c = 1.4013e-45;
    fVar7 = 2.8026e-45;
    StringFree(pcVar6);
  }
  UnpackVertex(this,lVar5,(long)fVar8,(Vector<float,3> *)&local_88);
  UnpackVertex(this,lVar5,(long)local_7c,(Vector<float,3> *)&local_48);
  UnpackVertex(this,lVar5,(long)fVar7,(Vector<float,3> *)&local_6c);
  local_48 = local_88 - local_48;
  local_44 = local_84 - local_44;
  local_40 = local_80 - local_40;
  local_94 = local_40 * (local_68 - local_84) - local_44 * (local_64 - local_80);
  local_90 = local_48 * (local_64 - local_80) - (local_6c - local_88) * local_40;
  local_24 = (local_6c - local_88) * local_44 - local_48 * (local_68 - local_84);
  local_78 = local_24 * local_44 - local_90 * local_40;
  local_68 = local_94 * local_40 - local_24 * local_48;
  local_70 = local_90 * local_48 - local_94 * local_44;
  fVar8 = SQRT(local_24 * local_24 + local_90 * local_90 + local_94 * local_94);
  fVar7 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar8) {
    fVar7 = _DAT_36223384 / fVar8;
  }
  local_90 = local_90 * fVar7;
  local_94 = local_94 * fVar7;
  local_24 = local_24 * fVar7;
  fVar8 = SQRT(local_68 * local_68 + local_70 * local_70 + local_78 * local_78);
  local_38 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar8) {
    local_7c = _DAT_36223384 / fVar8;
    local_38 = local_7c;
  }
  local_74 = local_68 * local_38;
  local_20 = local_70 * local_38;
  local_38 = local_78 * local_38;
  fVar8 = SQRT(local_40 * local_40 + local_44 * local_44 + local_48 * local_48);
  local_34 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar8) {
    local_7c = _DAT_36223384 / fVar8;
    local_34 = local_7c;
  }
  local_1c = local_40 * local_34;
  local_28 = local_44 * local_34;
  local_34 = local_48 * local_34;
  local_3c = local_94;
  local_30 = local_90;
  local_18 = local_88;
  local_14 = local_84;
  local_2c = local_74;
  local_10 = local_80;
  local_88 = local_48;
  local_84 = local_44;
  local_80 = local_1c;
  local_6c = local_78;
  local_64 = local_70;
  DecomposeRotationMatrixNoSnap(local_c,(Matrix<float,3,3> *)&local_3c);
  local_60 = *(undefined4 *)(in_stack_00000008 + 0xc);
  local_5c = *(undefined4 *)(in_stack_00000008 + 0x10);
  local_58 = *(undefined4 *)(in_stack_00000008 + 0x14);
  local_54 = *(undefined4 *)(in_stack_00000008 + 0x18);
  local_50 = *(undefined4 *)(in_stack_00000008 + 0x1c);
  local_4c = *(undefined4 *)(in_stack_00000008 + 0x20);
  CPlacement3D::RelativeToAbsoluteSmooth((CPlacement3D *)&local_60,(CPlacement3D *)&local_18);
  *(undefined4 *)param_1 = local_60;
  *(undefined4 *)(param_1 + 4) = local_5c;
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)(param_1 + 0xc) = local_54;
  *(undefined4 *)(param_1 + 0x10) = local_50;
  *(undefined4 *)(param_1 + 0x14) = local_4c;
  return;
}

