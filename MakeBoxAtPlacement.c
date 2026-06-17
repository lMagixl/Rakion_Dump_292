
/* public: void __thiscall CCollisionInfo::MakeBoxAtPlacement(class Vector<float,3> const &,class
   Matrix<float,3,3> const &,class AABBox<float,3> &) */

void __thiscall
CCollisionInfo::MakeBoxAtPlacement
          (CCollisionInfo *this,Vector<float,3> *param_1,Matrix<float,3,3> *param_2,
          AABBox<float,3> *param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x1275c0  2583
                       ?MakeBoxAtPlacement@CCollisionInfo@@QAEXABV?$Vector@M$02@@ABV?$Matrix@M$02$02@@AAV?$AABBox@M$02@@@Z
                        */
  pfVar3 = *(float **)(this + 4);
  iVar7 = FUN_360cd8a0((undefined4 *)this);
  pfVar1 = pfVar3 + iVar7 * 0x10 + -0x10;
  fVar4 = *(float *)param_1 +
          pfVar3[2] * *(float *)(param_2 + 8) +
          pfVar3[1] * *(float *)(param_2 + 4) + *pfVar3 * *(float *)param_2;
  fVar5 = *(float *)(param_1 + 4) +
          *(float *)(param_2 + 0x10) * pfVar3[1] +
          *pfVar3 * *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x14) * pfVar3[2];
  fVar6 = *(float *)(param_1 + 8) +
          pfVar3[2] * *(float *)(param_2 + 0x20) +
          *pfVar3 * *(float *)(param_2 + 0x18) + pfVar3[1] * *(float *)(param_2 + 0x1c);
  fVar2 = pfVar3[3];
  *(float *)param_3 = fVar4 - fVar2;
  *(float *)(param_3 + 4) = fVar5 - fVar2;
  *(float *)(param_3 + 8) = fVar6 - fVar2;
  *(float *)(param_3 + 0xc) = fVar4 + fVar2;
  *(float *)(param_3 + 0x10) = fVar5 + fVar2;
  *(float *)(param_3 + 0x14) = fVar6 + fVar2;
  local_c = *(float *)param_1 +
            pfVar1[2] * *(float *)(param_2 + 8) +
            *pfVar1 * *(float *)param_2 + pfVar1[1] * *(float *)(param_2 + 4);
  local_8 = *(float *)(param_1 + 4) +
            *(float *)(param_2 + 0x10) * pfVar1[1] +
            *(float *)(param_2 + 0x14) * pfVar1[2] + *pfVar1 * *(float *)(param_2 + 0xc);
  local_4 = *(float *)(param_1 + 8) +
            pfVar1[1] * *(float *)(param_2 + 0x1c) +
            pfVar1[2] * *(float *)(param_2 + 0x20) + *pfVar1 * *(float *)(param_2 + 0x18);
  fVar2 = pfVar1[3];
  local_18 = local_c - fVar2;
  local_c = local_c + fVar2;
  local_14 = local_8 - fVar2;
  local_8 = local_8 + fVar2;
  local_10 = local_4 - fVar2;
  local_4 = local_4 + fVar2;
  FUN_360b1850(param_3,&local_18);
  return;
}

