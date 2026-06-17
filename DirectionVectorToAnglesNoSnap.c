
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl DirectionVectorToAnglesNoSnap(class Vector<float,3> const &,class Vector<float,3> &)
    */

void __cdecl DirectionVectorToAnglesNoSnap(Vector<float,3> *param_1,Vector<float,3> *param_2)

{
  float10 fVar1;
  
                    /* 0x49530  1500  ?DirectionVectorToAnglesNoSnap@@YAXABV?$Vector@M$02@@AAV1@@Z
                        */
  *(undefined4 *)(param_2 + 8) = 0;
  fVar1 = (float10)_CIasin();
  *(float *)(param_2 + 4) = (float)(fVar1 * (float10)_DAT_36227d14);
  if ((*(float *)(param_1 + 4) <= (float)_DAT_36227d48) &&
     ((float)_DAT_36227d40 <= *(float *)(param_1 + 4))) {
    fVar1 = (float10)fpatan(-(float10)*(float *)param_1,-(float10)*(float *)(param_1 + 8));
    *(float *)param_2 = (float)(fVar1 * (float10)_DAT_36227d14);
    return;
  }
  *(undefined4 *)param_2 = 0;
  return;
}

