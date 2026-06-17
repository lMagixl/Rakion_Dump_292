
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CClipTest::PointTouchesCylinder(class Vector<float,3> const &,class
   Vector<float,3> const &,class Vector<float,3> const &,float) */

int __thiscall
CClipTest::PointTouchesCylinder
          (CClipTest *this,Vector<float,3> *param_1,Vector<float,3> *param_2,
          Vector<float,3> *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x130930  2773  ?PointTouchesCylinder@CClipTest@@QAEHABV?$Vector@M$02@@00M@Z
                        */
  fVar1 = *(float *)param_3 - *(float *)param_2;
  fVar2 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar5 = _DAT_36223384 / fVar4;
  fVar6 = fVar1 * fVar5 * (*(float *)param_1 - *(float *)param_2) +
          fVar2 * fVar5 * (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) +
          fVar3 * fVar5 * (*(float *)(param_1 + 8) - *(float *)(param_2 + 8));
  if (((_DAT_3622376c <= fVar6) && (fVar6 <= fVar4)) &&
     (fVar1 = (*(float *)param_1 - *(float *)param_2) - fVar1 * fVar5 * fVar6,
     fVar2 = (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) - fVar2 * fVar5 * fVar6,
     fVar3 = (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) - fVar3 * fVar5 * fVar6,
     SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) < param_4)) {
    return 1;
  }
  return 0;
}

