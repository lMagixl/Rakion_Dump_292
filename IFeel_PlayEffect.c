
/* void __cdecl IFeel_PlayEffect(char *) */

void __cdecl IFeel_PlayEffect(char *param_1)

{
                    /* 0x279f0  2274  ?IFeel_PlayEffect@@YAXPAD@Z */
  IFeel_ChangeGain(DAT_362a1b38);
  if (DAT_362b9324 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x36027a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362b9324)();
    return;
  }
  return;
}

