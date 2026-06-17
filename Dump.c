
/* public: void __thiscall CNetworkMessage::Dump(void) */

void __thiscall CNetworkMessage::Dump(CNetworkMessage *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
                    /* 0x106230  1545  ?Dump@CNetworkMessage@@QAEXXZ */
  CPrintF(s_Message_size___d_362367f4,*(undefined4 *)(this + 0x10));
  CPrintF(s_Message_contents__36236808);
  uVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      uVar1 = uVar2 & 0x8000000f;
      bVar3 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar3 = (uVar1 - 1 | 0xfffffff0) == 0xffffffff;
      }
      if (bVar3) {
        CPrintF(&DAT_3623681c);
      }
      CPrintF(&DAT_36236820,(uint)*(byte *)(*(int *)(this + 4) + uVar2));
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(this + 0x10));
  }
  CPrintF(&DAT_36236828);
  return;
}

