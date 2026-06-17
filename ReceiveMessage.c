
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: int __thiscall CSessionState::ReceiveMessage(void) */

int __thiscall CSessionState::ReceiveMessage(CSessionState *this)

{
  undefined1 local_3ec [1000];
  undefined4 local_4;
  
                    /* 0x1100a0  3069  ?ReceiveMessage@CSessionState@@QAEHXZ */
  local_4 = DAT_362abd90;
  (**(code **)(*(int *)(this + 0x90) + 0xc))(local_3ec,1000);
  return 0;
}

