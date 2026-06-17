
/* void __cdecl shaDisableTexture(long) */

void __cdecl shaDisableTexture(long param_1)

{
                    /* 0x8ed80  4316  ?shaDisableTexture@@YAXJ@Z */
  if (param_1 != -1) {
    shaSetTextureUnit(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x3608ed92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_362c4634)();
  return;
}

