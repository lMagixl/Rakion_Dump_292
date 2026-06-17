
/* unsigned long __cdecl PackFloatsToULONG(float,float,float) */

ulong __cdecl PackFloatsToULONG(float param_1,float param_2,float param_3)

{
  ulong uVar1;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0xfe5c0  2735  ?PackFloatsToULONG@@YAKMMM@Z */
  local_c = param_1;
  local_8 = param_2;
  local_4 = param_3;
  uVar1 = PackVectorToULONG((Vector<float,3> *)&local_c);
  return uVar1;
}

