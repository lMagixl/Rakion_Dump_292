
/* public: void __thiscall CViewPort::OpenCanvas(void) */

void __thiscall CViewPort::OpenCanvas(CViewPort *this)

{
  bool bVar1;
  HINSTANCE hInstance;
  HWND pHVar2;
  DWORD dwExStyle;
  LPVOID lpParam;
  DWORD local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  tagRECT local_38;
  WNDCLASSA local_28;
  
                    /* 0x9c490  2720  ?OpenCanvas@CViewPort@@QAEXXZ */
  dwExStyle = 0;
  if ((*(int *)this == 0) && (*(int *)(this + 4) != 0)) {
    if (DAT_362c9ea4 == 0) {
      local_28.style = 0x2b;
      local_28.lpfnWndProc = FUN_3609c190;
      local_28.cbClsExtra = 0;
      local_28.cbWndExtra = 0;
      local_28.hInstance = (HINSTANCE)0x0;
      local_28.hIcon = (HICON)0x0;
      local_28.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      local_28.hbrBackground = (HBRUSH)0x0;
      local_28.lpszMenuName = (LPCSTR)0x0;
      local_28.lpszClassName = s_I_ViewPort_Window_3622ecb6 + 2;
      RegisterClassA(&local_28);
      DAT_362c9ea4 = 1;
    }
    GetClientRect(*(HWND *)(this + 4),&local_38);
    CDisplayMode::CDisplayMode((CDisplayMode *)&local_44);
    local_44 = *(int *)(_pGfx + 0xa3c);
    local_40 = *(int *)(_pGfx + 0xa40);
    local_3c = *(undefined4 *)(_pGfx + 0xa44);
    if ((local_44 != local_38.right - local_38.left) ||
       (bVar1 = true, local_40 != local_38.bottom - local_38.top)) {
      bVar1 = false;
    }
    local_48 = 0x46000000;
    if ((bVar1) && (DAT_362a40b0 != 0)) {
      dwExStyle = 8;
      local_48 = 0x80000000;
    }
    lpParam = (LPVOID)0x0;
    hInstance = (HINSTANCE)GetWindowLongA(*(HWND *)(this + 4),-6);
    pHVar2 = CreateWindowExA(dwExStyle,s_ViewPort_Window_3622eccc,&DAT_3622ecc8,local_48,0,0,0,0,
                             *(HWND *)(this + 4),(HMENU)0x0,hInstance,lpParam);
    *(HWND *)this = pHVar2;
    if ((*(int *)(_pGfx + 0xa38) == 1) && (!bVar1)) {
      FUN_3609c040(local_38.right - local_38.left,local_38.bottom - local_38.top);
    }
    Resize(this);
    ShowWindow(*(HWND *)this,5);
    if ((*(int *)(_pGfx + 0xa38) == 1) && (*(int *)(this + 0x7c) != 0)) {
      FUN_3609c120();
    }
  }
  return;
}

