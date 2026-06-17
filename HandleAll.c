
/* public: void __thiscall CServer::HandleAll(void) */

void __thiscall CServer::HandleAll(CServer *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x10e0d0  2229  ?HandleAll@CServer@@QAEXXZ */
  iVar2 = 0;
  do {
    iVar1 = CCommunicationInterface::Server_IsClientUsed(&_cmiComm,iVar2);
    if (iVar1 != 0) {
      HandleAllForAClient(this,iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}

