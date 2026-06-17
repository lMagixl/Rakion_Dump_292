
/* void __cdecl UnpackVectorFromULONG(unsigned long,class Vector<float,3> &) */

void __cdecl UnpackVectorFromULONG(ulong param_1,Vector<float,3> *param_2)

{
  float fVar1;
  
                    /* 0xfe560  3891  ?UnpackVectorFromULONG@@YAXKAAV?$Vector@M$02@@@Z */
  fVar1 = UnpackFloat('\x04','\x06','\x01',param_1 >> 0x15);
  *(float *)param_2 = fVar1;
  fVar1 = UnpackFloat('\x04','\x05','\x01',param_1 >> 0xb & 0x3ff);
  *(float *)(param_2 + 4) = fVar1;
  fVar1 = UnpackFloat('\x04','\x06','\x01',param_1 & 0x7ff);
  *(float *)(param_2 + 8) = fVar1;
  return;
}

