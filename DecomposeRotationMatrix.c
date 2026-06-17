
/* void __cdecl DecomposeRotationMatrix(class Vector<float,3> &,class Matrix<float,3,3> const &) */

void __cdecl DecomposeRotationMatrix(Vector<float,3> *param_1,Matrix<float,3,3> *param_2)

{
                    /* 0x494a0  1456
                       ?DecomposeRotationMatrix@@YAXAAV?$Vector@M$02@@ABV?$Matrix@M$02$02@@@Z */
  DecomposeRotationMatrixNoSnap(param_1,param_2);
  Snap((float *)param_1,0.25);
  Snap((float *)(param_1 + 4),0.25);
  Snap((float *)(param_1 + 8),0.25);
  return;
}

