
/* void __cdecl Stereo_SetBuffer(long) */

void __cdecl Stereo_SetBuffer(long param_1)

{
                    /* 0x93220  3675  ?Stereo_SetBuffer@@YAXJ@Z */
  if (DAT_362c548c != 0) {
    DAT_362c548c = 1;
  }
  if ((param_1 == 2) || (DAT_362c5488 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x3609328f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c46c4)();
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x36093272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c46c4)();
    return;
  }
  if (param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x36093281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c46c4)();
    return;
  }
  return;
}

