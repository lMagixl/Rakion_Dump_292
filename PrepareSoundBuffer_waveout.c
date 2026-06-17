
/* private: long __thiscall CSoundLibrary::PrepareSoundBuffer_waveout(void) */

long __thiscall CSoundLibrary::PrepareSoundBuffer_waveout(CSoundLibrary *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPWAVEHDR pwh;
  int local_4;
  
                    /* 0x9f4e0  2824  ?PrepareSoundBuffer_waveout@CSoundLibrary@@AAEJXZ */
  local_4 = 0;
  iVar3 = 0;
  iVar1 = FUN_360a12a0((undefined4 *)(this + 0x14));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      pwh = (LPWAVEHDR)(*(int *)(this + 0x18) + iVar1);
      if ((*(byte *)(*(int *)(this + 0x18) + 0x10 + iVar1) & 1) != 0) {
        waveOutUnprepareHeader(*(HWAVEOUT *)this,pwh,0x20);
      }
      if ((pwh->dwFlags & 2) == 0) {
        local_4 = local_4 + 0x400;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x20;
      iVar2 = FUN_360a12a0((undefined4 *)(this + 0x14));
    } while (iVar3 < iVar2);
    return local_4;
  }
  return 0;
}

