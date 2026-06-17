
/* void __cdecl EndModelRenderingView(int) */

void __cdecl EndModelRenderingView(int param_1)

{
                    /* 0xbc620  1564  ?EndModelRenderingView@@YAXH@Z */
  (*DAT_362c4658)(0x41);
  (*DAT_362c46c4)(0xffffffff);
  FUN_360c1830();
  if (param_1 != 0) {
    CDrawPort::SetOrtho(DAT_362ca530);
  }
  DAT_362ca520 = 0;
  DAT_362ca530 = (CDrawPort *)0x0;
  (*DAT_362c4614)();
  if ((*(int *)(DAT_362cabb8 + 0x7c) == 0) && (*(int *)(DAT_362cabb8 + 0x80) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x360bc67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_362c4618)();
  return;
}

