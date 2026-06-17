
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl UnpackAngle(unsigned long,class Vector<float,3> &) */

void __cdecl UnpackAngle(ulong param_1,Vector<float,3> *param_2)

{
                    /* 0xfe720  3884  ?UnpackAngle@@YAXKAAV?$Vector@M$02@@@Z */
  *(float *)param_2 = (float)(param_1 >> 0x15) * _DAT_362287a8 - _DAT_362280e0;
  *(float *)(param_2 + 4) = (float)(param_1 >> 0xb & 0x3ff) * _DAT_362287a8 - _DAT_36228128;
  *(float *)(param_2 + 8) = (float)(param_1 & 0x7ff) * _DAT_362287a8 - _DAT_362280e0;
  return;
}

