
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_EndRenderingView(int) */

void __cdecl RM_EndRenderingView(int param_1)

{
                    /* 0x162d40  2909  ?RM_EndRenderingView@@YAXH@Z */
  SetFPUPrecision(DAT_362fe0c0);
  (*DAT_362c46c4)(0xffffffff);
  _DAT_362a6bb4 = 0x3f800000;
  if (param_1 != 0) {
    CDrawPort::SetOrtho(DAT_362fe0d0);
  }
  DAT_362fe1b0 = 0;
  DAT_362fe0d0 = (CDrawPort *)0x0;
  return;
}

