
/* public: long __thiscall CModelObject::PickVertexIndex(class CDrawPort *,class CProjection3D
   *,long,long,class Vector<float,3> &) */

long __thiscall
CModelObject::PickVertexIndex
          (CModelObject *this,CDrawPort *param_1,CProjection3D *param_2,long param_3,long param_4,
          Vector<float,3> *param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CModelData *pCVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  float local_44;
  float local_20;
  
                    /* 0xb7d10  2765
                       ?PickVertexIndex@CModelObject@@QAEJPAVCDrawPort@@PAVCProjection3D@@JJAAV?$Vector@M$02@@@Z
                        */
  pCVar5 = GetData(this);
  ProjectFrameVertices(this,param_2,*(long *)(this + 0x94));
  local_44 = 64.0;
  lVar6 = CAnimObject::GetFrame((CAnimObject *)this);
  fVar2 = (float)param_3;
  iVar8 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)) - param_4;
  iVar7 = *(int *)(pCVar5 + 0x1c);
  uVar1 = *(undefined4 *)(this + 0x94);
  param_3 = 0;
  if (0 < iVar7) {
    param_2 = (CProjection3D *)0x0;
    do {
      if ((*(uint *)(*(int *)(pCVar5 + 0x50) + param_3 * 4) & 1 << ((byte)uVar1 & 0x1f)) != 0) {
        if (((byte)pCVar5[0x1260] & 0x10) == 0) {
          iVar7 = *(int *)(pCVar5 + 0x28) + iVar7 * lVar6 * 4;
          iVar9 = (int)*(char *)(iVar7 + param_3 * 4);
          iVar10 = (int)*(char *)(iVar7 + 1 + param_3 * 4);
          param_4 = (long)*(char *)(iVar7 + 2 + param_3 * 4);
        }
        else {
          iVar7 = *(int *)(pCVar5 + 0x30) + iVar7 * lVar6 * 8;
          iVar9 = (int)*(short *)(iVar7 + param_3 * 8);
          iVar10 = (int)*(short *)(iVar7 + 2 + param_3 * 8);
          param_4 = (long)*(short *)(iVar7 + 4 + param_3 * 8);
        }
        local_20 = (float)iVar10;
        fVar3 = *(float *)(param_2 + *(int *)(pCVar5 + 0x48)) - fVar2;
        fVar4 = *(float *)(param_2 + *(int *)(pCVar5 + 0x48) + 4) - (float)iVar8;
        fVar3 = ABS(SQRT(fVar3 * fVar3 + fVar4 * fVar4 + 0.0));
        if (fVar3 < local_44) {
          *(float *)param_5 = (float)iVar9 * *(float *)(pCVar5 + 0x1268);
          *(float *)(param_5 + 4) = local_20 * *(float *)(pCVar5 + 0x126c);
          *(float *)(param_5 + 8) = (float)param_4 * *(float *)(pCVar5 + 0x1270);
          local_44 = fVar3;
        }
      }
      iVar7 = *(int *)(pCVar5 + 0x1c);
      param_3 = param_3 + 1;
      param_2 = param_2 + 0x38;
    } while (param_3 < iVar7);
  }
  uVar11 = FUN_361bfd6c();
  return (long)uVar11;
}

