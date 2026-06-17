
/* public: void __thiscall CGfxLibrary::CreateWorkCanvas(long,long,class CDrawPort * *) */

void __thiscall
CGfxLibrary::CreateWorkCanvas(CGfxLibrary *this,long param_1,long param_2,CDrawPort **param_3)

{
  HWND pHVar1;
  WNDCLASSA local_28;
  
                    /* 0x85b20  1441  ?CreateWorkCanvas@CGfxLibrary@@QAEXJJPAPAVCDrawPort@@@Z */
  if (DAT_362c54c0 == 0) {
    DAT_362c54c0 = 1;
    local_28.style = 0x2b;
    local_28.lpfnWndProc = DefWindowProcA_exref;
    local_28.cbClsExtra = 0;
    local_28.cbWndExtra = 0;
    local_28.hInstance = (HINSTANCE)0x0;
    local_28.hIcon = (HICON)0x0;
    local_28.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_28.hbrBackground = (HBRUSH)0x0;
    local_28.lpszMenuName = (LPCSTR)0x0;
    local_28.lpszClassName = s_WorkCanvas_Window_3622dc4c;
    RegisterClassA(&local_28);
  }
  pHVar1 = CreateWindowExA(0,s_WorkCanvas_Window_3622dc60,&DAT_3622dc5e,0x86000000,0,0,param_1,
                           param_2,(HWND)0x0,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
  *param_3 = (CDrawPort *)0x0;
  CreateWindowCanvas(this,pHVar1,(CViewPort **)&param_2,param_3);
  return;
}

