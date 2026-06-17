
/* void __cdecl shaSetTexCoordArray(struct GFXTexCoord *,long) */

void __cdecl shaSetTexCoordArray(GFXTexCoord *param_1,long param_2)

{
                    /* 0x8e550  4390  ?shaSetTexCoordArray@@YAXPAUGFXTexCoord@@J@Z */
  DAT_362c9808 = param_1;
  shaSetTextureUnit(param_2);
                    /* WARNING: Could not recover jumptable at 0x3608e578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_362c469c)();
  return;
}

