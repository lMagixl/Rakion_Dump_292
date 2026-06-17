
/* public: void __thiscall CNetworkMessage::Reinit(void) */

void __thiscall CNetworkMessage::Reinit(CNetworkMessage *this)

{
  undefined1 local_1;
  
                    /* 0x106000  3076  ?Reinit@CNetworkMessage@@QAEXXZ */
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0x15955;
  Write(this,&local_1,1);
  return;
}

