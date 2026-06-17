
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSoundLibrary::MixSounds(void) */

void __thiscall CSoundLibrary::MixSounds(CSoundLibrary *this)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
                    /* 0x9f770  2652  ?MixSounds@CSoundLibrary@@AAEXXZ */
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar2 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar4 + 0x150) = *puVar2;
    *(undefined4 *)(iVar4 + 0x154) = puVar2[1];
  }
  uVar9 = *(uint *)(this + 0x44) & 2;
  uVar3 = *(uint *)(this + 0x44) & 1;
  if (uVar3 == 0) {
    iVar4 = PrepareSoundBuffer_dsound(this);
  }
  else {
    iVar4 = PrepareSoundBuffer_waveout(this);
  }
  if (0 < iVar4) {
    FUN_360a1b80(*(undefined4 **)(this + 0x60),iVar4);
    if (((_pNetwork == (CNetworkLibrary *)0x0) ||
        (iVar5 = CNetworkLibrary::IsPaused(_pNetwork), iVar5 != 0)) ||
       ((*(int *)(_pNetwork + 0x14) != 0 &&
        (iVar5 = CNetworkLibrary::GetLocalPause(_pNetwork), iVar5 != 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar5 = DAT_362a51ec;
    for (piVar8 = *(int **)(this + 0x458); *piVar8 != 0; piVar8 = (int *)*piVar8) {
      if (((0 < iVar5) || (piVar8[0x27] != 0)) && ((uVar9 == 0 || (piVar8[0x27] != 0)))) {
        iVar7 = 0;
        if ((((bVar1) && ((*(byte *)(piVar8 + 0xb) & 0x20) == 0)) ||
            ((piVar8[0xb] & 0x20000000U) != 0)) || (-1 < piVar8[0xb])) {
          if (((float)piVar8[0x21] == _DAT_3622376c) && ((float)piVar8[0x22] == _DAT_3622376c))
          goto LAB_3609f8dd;
          iVar7 = 1;
        }
        FUN_360a1c40((float)piVar8,iVar7);
        if ((uVar9 == 0) && (piVar8[0x27] == 0)) {
          iVar5 = iVar5 + -1;
        }
        *(float *)(DAT_362bef74 + 0x98) = *(float *)(DAT_362bef74 + 0x98) + _DAT_36223384;
      }
LAB_3609f8dd:
    }
    if (uVar3 == 0) {
      CopyMixerBuffer_dsound(this,iVar4);
    }
    else {
      CopyMixerBuffer_waveout(this);
    }
  }
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar3 = *puVar6 - *(uint *)(iVar4 + 0x150);
    *(int *)(iVar4 + 0x15c) =
         *(int *)(iVar4 + 0x15c) +
         ((puVar6[1] - *(int *)(iVar4 + 0x154)) - (uint)(*puVar6 < *(uint *)(iVar4 + 0x150))) +
         (uint)CARRY4(*(uint *)(iVar4 + 0x158),uVar3);
    *(uint *)(iVar4 + 0x158) = *(uint *)(iVar4 + 0x158) + uVar3;
    *(undefined4 *)(iVar4 + 0x150) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x154) = 0xffffffff;
  }
  return;
}

