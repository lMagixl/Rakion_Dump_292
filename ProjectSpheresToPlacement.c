
/* public: void __thiscall CClipTest::ProjectSpheresToPlacement(class CCollisionInfo &,class
   Vector<float,3> &,class Matrix<float,3,3> &) */

void __thiscall
CClipTest::ProjectSpheresToPlacement
          (CClipTest *this,CCollisionInfo *param_1,Vector<float,3> *param_2,
          Matrix<float,3,3> *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  
                    /* 0x1307c0  2867
                       ?ProjectSpheresToPlacement@CClipTest@@QAEXAAVCCollisionInfo@@AAV?$Vector@M$02@@AAV?$Matrix@M$02$02@@@Z
                        */
  iVar12 = 0;
  if (0 < *(int *)param_1) {
    iVar11 = 0;
    do {
      pfVar1 = (float *)(*(int *)(param_1 + 4) + 4 + iVar11);
      pfVar10 = (float *)(*(int *)(param_1 + 4) + iVar11);
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 0x40;
      fVar2 = *(float *)(param_3 + 0xc);
      fVar3 = *(float *)(param_3 + 0x14);
      fVar4 = *(float *)(param_3 + 0x10);
      fVar5 = *(float *)(param_3 + 0x20);
      fVar6 = *(float *)(param_3 + 0x1c);
      fVar7 = *(float *)(param_3 + 0x18);
      fVar8 = *(float *)(param_2 + 4);
      fVar9 = *(float *)(param_2 + 8);
      pfVar10[4] = *(float *)(param_3 + 8) * pfVar10[2] +
                   *(float *)param_3 * *pfVar10 + *pfVar1 * *(float *)(param_3 + 4) +
                   *(float *)param_2;
      pfVar10[5] = pfVar10[1] * fVar4 + fVar3 * pfVar10[2] + fVar2 * *pfVar10 + fVar8;
      pfVar10[6] = *pfVar10 * fVar7 + pfVar10[1] * fVar6 + fVar5 * pfVar10[2] + fVar9;
    } while (iVar12 < *(int *)param_1);
  }
  return;
}

