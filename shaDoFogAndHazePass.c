
/* void __cdecl shaDoFogAndHazePass(void) */

void __cdecl shaDoFogAndHazePass(void)

{
                    /* 0x8fa40  4319  ?shaDoFogAndHazePass@@YAXXZ */
  if ((DAT_362c9844 & 2) != 0) {
    (*DAT_362c4680)(0x52,0x52);
    (*DAT_362c4648)(0x1b,0x1c);
    (*DAT_362c4600)();
    (*DAT_362c4628)();
    FUN_3607b9d0((undefined4 *)&DAT_362c3b64,(int *)&DAT_362c3bec);
    (*DAT_362c469c)(DAT_362c99fc,0);
    (*DAT_362c46a0)(DAT_362c99ec);
    (*DAT_362c46a4)(DAT_362a4340,DAT_362c9830);
  }
  if ((DAT_362c9844 & 1) != 0) {
    (*DAT_362c4680)(0x52,0x52);
    (*DAT_362c4648)(0x1b,0x1c);
    (*DAT_362c4600)();
    (*DAT_362c4628)();
    FUN_3607b9d0((undefined4 *)&DAT_362c3b2c,(int *)&DAT_362c3ba8);
    (*DAT_362c469c)(DAT_362c99dc,0);
    (*DAT_362c46a0)(DAT_362c99cc);
    (*DAT_362c46a4)(DAT_362a4340,DAT_362c9830);
  }
  return;
}

