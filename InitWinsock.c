
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CCommunicationInterface::InitWinsock(void) */

void __thiscall CCommunicationInterface::InitWinsock(CCommunicationInterface *this)

{
  int iVar1;
  char *pcVar2;
  WSADATA local_194;
  undefined4 local_4;
  
                    /* 0xfb4f0  2324  ?InitWinsock@CCommunicationInterface@@QAEXXZ */
  local_4 = DAT_362abd90;
  if (*(int *)(this + 0xc) == 0) {
    iVar1 = WSAStartup(0x202,&local_194);
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0xc) = 1;
      pcVar2 = Translate(s_ETRS_winsock_opened_ok_36235624,4);
      CPrintF(pcVar2);
    }
  }
  return;
}

