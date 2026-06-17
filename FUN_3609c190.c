
LRESULT FUN_3609c190(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  HWND hWnd;
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  
  if (param_2 == 0x14) {
    return 1;
  }
  if ((0x1ff < param_2) && (param_2 < 0x20a)) {
    hWnd = GetParent(param_1);
    lpPrevWndFunc = (WNDPROC)GetWindowLongA(hWnd,-4);
    LVar1 = CallWindowProcA(lpPrevWndFunc,hWnd,param_2,param_3,param_4);
    return LVar1;
  }
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}

