
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl AnglesToDirectionVector(class Vector<float,3> const &,class Vector<float,3> &) */

void __cdecl AnglesToDirectionVector(Vector<float,3> *param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
                    /* 0x494e0  1053  ?AnglesToDirectionVector@@YAXABV?$Vector@M$02@@AAV1@@Z */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = (float10)fcos((float10)*(float *)(param_1 + 4) * (float10)_DAT_3622300c);
  fVar4 = (float10)fsin((float10)*(float *)param_1 * (float10)_DAT_3622300c);
  *(float *)param_2 = (float)-(fVar4 * (float10)(float)fVar3);
  fVar4 = (float10)fsin((float10)fVar2 * (float10)_DAT_3622300c);
  *(float *)(param_2 + 4) = (float)fVar4;
  fVar4 = (float10)fcos((float10)fVar1 * (float10)_DAT_3622300c);
  *(float *)(param_2 + 8) = (float)-(fVar4 * (float10)(float)fVar3);
  return;
}

