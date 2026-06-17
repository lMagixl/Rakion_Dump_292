
/* public: void __thiscall CInput::DisableInput(void) */

void __thiscall CInput::DisableInput(CInput *this)

{
  int iVar1;
  
                    /* 0x280f0  1503  ?DisableInput@CInput@@QAEXXZ */
  if (*(int *)(this + 0xc) != 0) {
    UnhookWindowsHookEx(DAT_362ba34c);
    UnhookWindowsHookEx(DAT_362ba350);
    ClipCursor((RECT *)0x0);
    SetCursorPos(*(int *)(this + 0x2c),*(int *)(this + 0x30));
    do {
      iVar1 = ShowCursor(1);
    } while (iVar1 < 0);
    SystemParametersInfoA(4,0,this + 0x34,0);
    FUN_36028070();
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}

