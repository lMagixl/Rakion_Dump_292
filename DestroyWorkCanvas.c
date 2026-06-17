
/* public: void __thiscall CGfxLibrary::DestroyWorkCanvas(class CDrawPort *) */

void __thiscall CGfxLibrary::DestroyWorkCanvas(CGfxLibrary *this,CDrawPort *param_1)

{
  HWND hWnd;
  
                    /* 0x85950  1491  ?DestroyWorkCanvas@CGfxLibrary@@QAEXPAVCDrawPort@@@Z */
  hWnd = *(HWND *)(*(CViewPort **)(*(int *)param_1 + 4) + 4);
  DestroyWindowCanvas(this,*(CViewPort **)(*(int *)param_1 + 4));
  DestroyWindow(hWnd);
  return;
}

