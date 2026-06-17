
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelObject::UnpackVertex(class CRenderModel &,long,class
   Vector<float,3> &) */

void __thiscall
CModelObject::UnpackVertex
          (CModelObject *this,CRenderModel *param_1,long param_2,Vector<float,3> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CModelData *pCVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  char *pcVar8;
  short *psVar9;
  char *pcVar10;
  
                    /* 0xbc880  3892
                       ?UnpackVertex@CModelObject@@QAEXAAVCRenderModel@@JAAV?$Vector@M$02@@@Z */
  pCVar4 = GetData(this);
  if (((byte)pCVar4[0x1260] & 0x10) == 0) {
    pcVar8 = (char *)(*(int *)(param_1 + 0x20) + param_2 * 4);
    pcVar10 = (char *)(*(int *)(param_1 + 0x24) + param_2 * 4);
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = (float)(int)*pcVar8;
    fVar3 = fVar2;
    if ((fVar1 != _DAT_3622376c) && (fVar3 = (float)(int)*pcVar10, fVar1 != _DAT_36223384)) {
      fVar3 = ((float)(int)*pcVar10 - fVar2) * fVar1 + fVar2;
    }
    *(float *)param_3 = (fVar3 - *(float *)(param_1 + 0xa0)) * *(float *)(param_1 + 0x94);
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = (float)(int)pcVar8[1];
    fVar3 = fVar2;
    if ((fVar1 != _DAT_3622376c) && (fVar3 = (float)(int)pcVar10[1], fVar1 != _DAT_36223384)) {
      fVar3 = ((float)(int)pcVar10[1] - fVar2) * fVar1 + fVar2;
    }
    *(float *)(param_3 + 4) = (fVar3 - *(float *)(param_1 + 0xa4)) * *(float *)(param_1 + 0x98);
    param_2 = *(long *)(param_1 + 0x14);
    iVar7 = (int)pcVar8[2];
    iVar5 = (int)pcVar10[2];
  }
  else {
    psVar6 = (short *)(*(int *)(param_1 + 0x20) + param_2 * 8);
    psVar9 = (short *)(*(int *)(param_1 + 0x24) + param_2 * 8);
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = (float)(int)*psVar6;
    fVar3 = fVar2;
    if ((fVar1 != _DAT_3622376c) && (fVar3 = (float)(int)*psVar9, fVar1 != _DAT_36223384)) {
      fVar3 = ((float)(int)*psVar9 - fVar2) * fVar1 + fVar2;
    }
    *(float *)param_3 = (fVar3 - *(float *)(param_1 + 0xa0)) * *(float *)(param_1 + 0x94);
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = (float)(int)psVar6[1];
    fVar3 = fVar2;
    if ((fVar1 != _DAT_3622376c) && (fVar3 = (float)(int)psVar9[1], fVar1 != _DAT_36223384)) {
      fVar3 = ((float)(int)psVar9[1] - fVar2) * fVar1 + fVar2;
    }
    *(float *)(param_3 + 4) = (fVar3 - *(float *)(param_1 + 0xa4)) * *(float *)(param_1 + 0x98);
    param_2 = *(long *)(param_1 + 0x14);
    iVar7 = (int)psVar6[2];
    iVar5 = (int)psVar9[2];
  }
  fVar2 = (float)iVar5;
  fVar1 = (float)iVar7;
  if ((float)param_2 != _DAT_3622376c) {
    if ((float)param_2 != _DAT_36223384) {
      fVar2 = (fVar2 - fVar1) * (float)param_2 + fVar1;
    }
    *(float *)(param_3 + 8) = (fVar2 - *(float *)(param_1 + 0xa8)) * *(float *)(param_1 + 0x9c);
    return;
  }
  *(float *)(param_3 + 8) = (fVar1 - *(float *)(param_1 + 0xa8)) * *(float *)(param_1 + 0x9c);
  return;
}

