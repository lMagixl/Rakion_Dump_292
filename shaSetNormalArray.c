
/* void __cdecl shaSetNormalArray(struct GFXNormal *) */

void __cdecl shaSetNormalArray(GFXNormal *param_1)

{
                    /* 0x8e290  4376  ?shaSetNormalArray@@YAXPAUGFXNormal@@@Z */
  DAT_362c9810 = param_1;
  if (DAT_362c9848 != 0) {
                    /* WARNING: Could not recover jumptable at 0x3608e2b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c4694)();
    return;
  }
  return;
}

