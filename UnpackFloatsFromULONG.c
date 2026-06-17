
/* void __cdecl UnpackFloatsFromULONG(unsigned long,float &,float &,float &) */

void __cdecl UnpackFloatsFromULONG(ulong param_1,float *param_2,float *param_3,float *param_4)

{
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0xfe5f0  3889  ?UnpackFloatsFromULONG@@YAXKAAM00@Z */
  UnpackVectorFromULONG(param_1,(Vector<float,3> *)&local_c);
  *param_2 = local_c;
  *param_3 = local_8;
  *param_4 = local_4;
  return;
}

