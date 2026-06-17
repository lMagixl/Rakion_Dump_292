
/* private: void __thiscall CSoundLibrary::ShutDown_waveout(void) */

void __thiscall CSoundLibrary::ShutDown_waveout(CSoundLibrary *this)

{
  CSoundLibrary *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
                    /* 0x9fde0  3637  ?ShutDown_waveout@CSoundLibrary@@AAEXXZ */
  pcVar5 = waveOutClose_exref;
  if (*(HWAVEOUT *)this != (HWAVEOUT)0x0) {
    waveOutReset(*(HWAVEOUT *)this);
    pCVar1 = this + 0x14;
    iVar4 = 0;
    iVar2 = FUN_360a12a0((undefined4 *)pCVar1);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        waveOutUnprepareHeader(*(HWAVEOUT *)this,(LPWAVEHDR)(*(int *)(this + 0x18) + iVar2),0x20);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x20;
        iVar3 = FUN_360a12a0((undefined4 *)pCVar1);
      } while (iVar4 < iVar3);
    }
    if (*(int *)pCVar1 != 0) {
      operator_delete__(*(void **)(this + 0x18));
      *(int *)pCVar1 = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    pcVar5 = waveOutClose_exref;
    waveOutClose(*(HWAVEOUT *)this);
    *(undefined4 *)this = 0;
  }
  iVar4 = 0;
  iVar2 = FUN_360a1240((int)(this + 4));
  if (0 < iVar2) {
    do {
      (*pcVar5)(*(undefined4 *)(*(int *)(this + 8) + iVar4 * 4));
      iVar4 = iVar4 + 1;
      iVar2 = FUN_360a1240((int)(this + 4));
    } while (iVar4 < iVar2);
  }
  *(undefined4 *)(this + 0xc) = 0;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
  }
  return;
}

