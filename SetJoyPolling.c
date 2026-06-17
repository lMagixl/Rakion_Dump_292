
/* public: void __thiscall CInput::SetJoyPolling(int) */

void __thiscall CInput::SetJoyPolling(CInput *this,int param_1)

{
                    /* 0x280e0  3492  ?SetJoyPolling@CInput@@QAEXH@Z */
  *(int *)(this + 0x10) = param_1;
  return;
}

