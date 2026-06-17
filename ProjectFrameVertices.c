
/* public: void __thiscall CModelObject::ProjectFrameVertices(class CProjection3D *,long) */

void __thiscall
CModelObject::ProjectFrameVertices(CModelObject *this,CProjection3D *param_1,long param_2)

{
  CProjection3D *pCVar1;
  int iVar2;
  int iVar3;
  CProjection3D *pCVar4;
  CModelData *pCVar5;
  long lVar6;
  uint uVar7;
  short *psVar8;
  char *pcVar9;
  int iVar10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0xb5810  2861  ?ProjectFrameVertices@CModelObject@@QAEXPAVCProjection3D@@J@Z
                        */
  pCVar4 = param_1;
  pCVar5 = GetData(this);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(pCVar5 + 0x1280);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(pCVar5 + 0x1284);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(pCVar5 + 0x1288);
  pCVar1 = param_1 + 0x68;
  *(float *)pCVar1 = *(float *)(pCVar5 + 0x1268);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(pCVar5 + 0x126c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(pCVar5 + 0x1270);
  *(float *)pCVar1 = *(float *)(this + 0x84) * *(float *)pCVar1;
  *(float *)(param_1 + 0x6c) = *(float *)(this + 0x88) * *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x70) = *(float *)(this + 0x8c) * *(float *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x74) = *(uint *)(pCVar5 + 0x1260) & 9;
  *(uint *)(param_1 + 0x78) = *(uint *)(pCVar5 + 0x1260) & 8;
  (*(code *)**(undefined4 **)param_1)();
  lVar6 = CAnimObject::GetFrame((CAnimObject *)this);
  uVar7 = 1 << ((byte)param_2 & 0x1f);
  iVar10 = 0;
  iVar3 = *(int *)(pCVar5 + 0x1c);
  if (((byte)pCVar5[0x1260] & 0x10) == 0) {
    iVar2 = *(int *)(pCVar5 + 0x28) + iVar3 * lVar6 * 4;
    param_1 = (CProjection3D *)0x0;
    if (0 < iVar3) {
      pcVar9 = (char *)(iVar2 + 2);
      do {
        if ((*(uint *)(pcVar9 + *(int *)(pCVar5 + 0x50) + (-2 - iVar2)) & uVar7) != 0) {
          fStack_c = (float)(int)pcVar9[-2];
          fStack_8 = (float)(int)pcVar9[-1];
          fStack_4 = (float)(int)*pcVar9;
          (**(code **)(*(int *)pCVar4 + 8))(&fStack_c,*(int *)(pCVar5 + 0x48) + iVar10);
        }
        param_1 = param_1 + 1;
        pcVar9 = pcVar9 + 4;
        iVar10 = iVar10 + 0x38;
      } while ((int)param_1 < *(int *)(pCVar5 + 0x1c));
    }
  }
  else if (0 < iVar3) {
    param_1 = (CProjection3D *)0x0;
    psVar8 = (short *)(*(int *)(pCVar5 + 0x30) + iVar3 * lVar6 * 8 + 4);
    do {
      if ((*(uint *)(*(int *)(pCVar5 + 0x50) + iVar10 * 4) & uVar7) != 0) {
        fStack_c = (float)(int)psVar8[-2];
        fStack_8 = (float)(int)psVar8[-1];
        fStack_4 = (float)(int)*psVar8;
        (**(code **)(*(int *)pCVar4 + 8))(&fStack_c,param_1 + *(int *)(pCVar5 + 0x48));
      }
      iVar10 = iVar10 + 1;
      param_1 = param_1 + 0x38;
      psVar8 = psVar8 + 4;
    } while (iVar10 < *(int *)(pCVar5 + 0x1c));
    return;
  }
  return;
}

