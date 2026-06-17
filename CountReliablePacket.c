
/* public: unsigned long __thiscall CNet::CountReliablePacket(void) */

ulong __thiscall CNet::CountReliablePacket(CNet *this)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
                    /* 0x1045b0  1408  ?CountReliablePacket@CNet@@QAEKXZ */
  uVar2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  iVar3 = 0;
  do {
    iVar1 = FUN_36105e40((int *)(*(int *)(this + 0xc) + iVar3));
    iVar3 = iVar3 + 8;
    uVar2 = uVar2 + iVar1;
  } while (iVar3 < 0xa0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  return uVar2;
}

