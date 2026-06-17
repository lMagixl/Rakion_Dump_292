
/* void __cdecl shaClearTextureMatrix(long) */

void __cdecl shaClearTextureMatrix(long param_1)

{
                    /* 0x8e640  4305  ?shaClearTextureMatrix@@YAXJ@Z */
  if (param_1 != -1) {
    shaSetTextureUnit(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x3608e65a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_362c4670)();
  return;
}

