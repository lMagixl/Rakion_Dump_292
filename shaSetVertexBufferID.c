
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaSetVertexBufferID(long,long,long) */

void __cdecl shaSetVertexBufferID(long param_1,long param_2,long param_3)

{
                    /* 0x8e300  4399  ?shaSetVertexBufferID@@YAXJJJ@Z */
  _DAT_362a4358 = param_1;
  DAT_362a4338 = param_2;
  DAT_362a433c = param_3;
                    /* WARNING: Could not recover jumptable at 0x3608e329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_362c46d0)();
  return;
}

