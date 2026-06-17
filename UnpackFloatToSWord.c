
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl UnpackFloatToSWord(short,float &) */

void __cdecl UnpackFloatToSWord(short param_1,float *param_2)

{
                    /* 0xfe330  3888  ?UnpackFloatToSWord@@YAXFAAM@Z */
  *param_2 = (float)(int)param_1 * _DAT_362280f0;
  return;
}

