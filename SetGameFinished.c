
/* public: void __thiscall CNetworkLibrary::SetGameFinished(void) */

void __thiscall CNetworkLibrary::SetGameFinished(CNetworkLibrary *this)

{
  undefined4 *puVar1;
  long lVar2;
  
                    /* 0xf3a30  3479  ?SetGameFinished@CNetworkLibrary@@QAEXXZ */
  CSoundLibrary::Flush(_pSound);
  puVar1 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  *(undefined4 *)(this + 0x970) = *puVar1;
  *(undefined4 *)(this + 0x974) = puVar1[1];
  *(undefined4 *)(*(int *)(this + 0x24) + 0x74) = 1;
  if (*(int *)(this + 0x14) != 0) {
    *(undefined4 *)(*(int *)(this + 0x18) + 0x34) = 1;
    lVar2 = CServer::ActiveRemoteSessions(*(CServer **)(this + 0x18));
    if (0 < lVar2) {
      *(float *)(*(int *)(this + 0x24) + 0x2c) =
           CTimer::TickQuantum + *(float *)(*(int *)(this + 0x24) + 0x2c);
      *(float *)(*(int *)(this + 0x18) + 0x14) =
           CTimer::TickQuantum + *(float *)(*(int *)(this + 0x18) + 0x14);
      CServer::StartNewTick
                (*(CServer **)(_pNetwork + 0x18),*(float *)(*(int *)(this + 0x24) + 0x2c));
      FUN_36100e60((void *)(*(int *)(_pNetwork + 0x18) + 0x3c),
                   *(float *)(*(int *)(this + 0x24) + 0x2c),(char)lVar2);
    }
  }
  return;
}

