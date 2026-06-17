
/* private: void __thiscall CSoundLibrary::CopyMixerBuffer_waveout(void) */

void __thiscall CSoundLibrary::CopyMixerBuffer_waveout(CSoundLibrary *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPWAVEHDR pwh;
  int local_4;
  
                    /* 0x9f410  1390  ?CopyMixerBuffer_waveout@CSoundLibrary@@AAEXXZ */
  iVar2 = 0;
  iVar3 = 0;
  local_4 = 0;
  iVar1 = FUN_360a12a0((undefined4 *)(this + 0x14));
  if (0 < iVar1) {
    do {
      pwh = (LPWAVEHDR)(*(int *)(this + 0x18) + iVar2);
      if ((*(byte *)(*(int *)(this + 0x18) + 0x10 + iVar2) & 2) == 0) {
        FUN_360a1b50(iVar3,(undefined4 *)pwh->lpData,0x400);
        iVar3 = iVar3 + 0x400;
        waveOutPrepareHeader(*(HWAVEOUT *)this,pwh,0x20);
        waveOutWrite(*(HWAVEOUT *)this,pwh,0x20);
      }
      local_4 = local_4 + 1;
      iVar2 = iVar2 + 0x20;
      iVar1 = FUN_360a12a0((undefined4 *)(this + 0x14));
    } while (local_4 < iVar1);
  }
  return;
}

