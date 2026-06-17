
/* void __cdecl DirectionVectorToAngles(class Vector<float,3> const &,class Vector<float,3> &) */

void __cdecl DirectionVectorToAngles(Vector<float,3> *param_1,Vector<float,3> *param_2)

{
                    /* 0x495d0  1499  ?DirectionVectorToAngles@@YAXABV?$Vector@M$02@@AAV1@@Z */
  DirectionVectorToAnglesNoSnap(param_1,param_2);
  Snap((float *)param_2,0.25);
  Snap((float *)(param_2 + 4),0.25);
  Snap((float *)(param_2 + 8),0.25);
  return;
}

