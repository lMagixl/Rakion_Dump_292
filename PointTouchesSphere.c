
/* public: int __thiscall CClipTest::PointTouchesSphere(class Vector<float,3> const &,class
   Vector<float,3> const &,float) */

int __thiscall
CClipTest::PointTouchesSphere
          (CClipTest *this,Vector<float,3> *param_1,Vector<float,3> *param_2,float param_3)

{
                    /* 0x1308a0  2774  ?PointTouchesSphere@CClipTest@@QAEHABV?$Vector@M$02@@0M@Z */
  if (SQRT((*(float *)param_2 - *(float *)param_1) * (*(float *)param_2 - *(float *)param_1) +
           (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) *
           (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) +
           (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) *
           (*(float *)(param_2 + 8) - *(float *)(param_1 + 8))) < param_3) {
    return 1;
  }
  return 0;
}

