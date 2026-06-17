
/* public: void __thiscall CCommunicationInterface::Unprepare(void) */

void __thiscall CCommunicationInterface::Unprepare(CCommunicationInterface *this)

{
                    /* 0xfb570  3894  ?Unprepare@CCommunicationInterface@@QAEXXZ */
  if (*(int *)(this + 0xc) != 0) {
    if (*(SOCKET *)(this + 0x88) != 0xffffffff) {
      closesocket(*(SOCKET *)(this + 0x88));
      *(undefined4 *)(this + 0x88) = 0xffffffff;
    }
    FUN_360f1ce0((undefined4 *)&DAT_362cf150);
    EndWinsock(this);
    *(undefined4 *)(this + 4) = 0;
  }
  FUN_360ff140((undefined4 *)(this + 0x50));
  FUN_360ff140((undefined4 *)(this + 0x18));
  DAT_362cd038 = *(undefined4 *)(this + 0xc);
  return;
}

