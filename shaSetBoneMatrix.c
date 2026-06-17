
/* void __cdecl shaSetBoneMatrix(float const (*)[12],long) */

void __cdecl shaSetBoneMatrix(float *param_1,long param_2)

{
                    /* 0x8e3b0  4364  ?shaSetBoneMatrix@@YAXPAY0M@$$CBMJ@Z */
  (&DAT_362c9780)[param_2] = param_1;
  DAT_362c9860 = DAT_362c9860 + 1;
  return;
}

