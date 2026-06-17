
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CNet::InitBlowfish(void) */

void __thiscall CNet::InitBlowfish(CNet *this)

{
  u_short local_c;
  undefined4 local_a;
  u_short local_6;
  undefined4 local_4;
  
                    /* 0x104350  2304  ?InitBlowfish@CNet@@QAEXXZ */
  local_4 = DAT_362abd90;
  local_a = *(undefined4 *)(this + 0x30);
  local_c = *(u_short *)(this + 0x34);
  local_6 = htons(local_c);
  FUN_361a2780((int)&local_c,'\b');
  return;
}

