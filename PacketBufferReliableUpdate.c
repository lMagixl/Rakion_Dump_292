
/* private: void __thiscall CNet::PacketBufferReliableUpdate(void) */

void __thiscall CNet::PacketBufferReliableUpdate(CNet *this)

{
  bool bVar1;
  char *pcVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  
                    /* 0x1053d0  2738  ?PacketBufferReliableUpdate@CNet@@AAEXXZ */
  iVar4 = 0;
  iVar3 = 0x14;
  do {
    pcVar2 = (char *)FUN_36105e30((int *)(*(int *)(this + 0xc) + iVar4));
    if (pcVar2 != (char *)0x0) {
      bVar1 = FUN_36105da0((int)pcVar2);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        SendTo(this,pcVar2,*(ushort *)(pcVar2 + 0x3f8),*(ulong *)(pcVar2 + 0x400),
               *(ushort *)(pcVar2 + 0x404));
        FUN_36105d80((int)pcVar2);
      }
    }
    iVar4 = iVar4 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

