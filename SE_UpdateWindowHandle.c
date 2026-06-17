
/* void __cdecl SE_UpdateWindowHandle(struct HWND__ *) */

void __cdecl SE_UpdateWindowHandle(HWND__ *param_1)

{
                    /* 0x8150  3188  ?SE_UpdateWindowHandle@@YAXPAUHWND__@@@Z */
  DAT_362b2a94 = param_1;
  if ((_pGfx == (CGfxLibrary *)0x0) || (DAT_362b2a98 = 1, (*(uint *)(_pGfx + 0xa54) & 0x200) == 0))
  {
    DAT_362b2a98 = 0;
  }
  return;
}

