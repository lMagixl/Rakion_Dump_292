
/* public: void __thiscall CSessionState::RemoveAllPlayer(void) */

void __thiscall CSessionState::RemoveAllPlayer(CSessionState *this)

{
  int iVar1;
  int iVar2;
  uchar uVar3;
  
                    /* 0x111b90  3119  ?RemoveAllPlayer@CSessionState@@QAEXXZ */
  uVar3 = '\0';
  iVar2 = 0x48a4;
  do {
    iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    if (*(int *)(iVar1 + iVar2) != 0) {
      CNet::ClearReliableData((CNet *)(_pNetwork + 0x11ac),uVar3);
      RemovePlayer(this,uVar3);
    }
    iVar2 = iVar2 + 4;
    uVar3 = uVar3 + '\x01';
  } while (iVar2 < 0x48f4);
  return;
}

