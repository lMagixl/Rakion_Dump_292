
/* public: void __thiscall CCommunicationInterface::EndWinsock(void) */

void __thiscall CCommunicationInterface::EndWinsock(CCommunicationInterface *this)

{
                    /* 0xfb550  1566  ?EndWinsock@CCommunicationInterface@@QAEXXZ */
  if (*(int *)(this + 0xc) != 0) {
    WSACleanup();
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}

