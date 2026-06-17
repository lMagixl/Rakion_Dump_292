
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSoundLibrary::PlayBuffers(void) */

void __thiscall CSoundLibrary::PlayBuffers(CSoundLibrary *this)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  CSoundLibrary *pCVar9;
  CSoundObject *this_00;
  bool bVar10;
  ulonglong uVar11;
  float fVar12;
  uint local_30;
  undefined4 uStack_2c;
  int local_28;
  uint uStack_24;
  CSoundLibrary *local_20;
  int local_1c;
  int local_18;
  float local_14;
  uint uStack_10;
  CSoundObject *local_c;
  
                    /* 0x9f950  2769  ?PlayBuffers@CSoundLibrary@@AAEXXZ */
  local_20 = this;
  if (((_pNetwork == (CNetworkLibrary *)0x0) ||
      (iVar4 = CNetworkLibrary::IsPaused(_pNetwork), iVar4 != 0)) ||
     ((*(int *)(_pNetwork + 0x14) != 0 &&
      (iVar4 = CNetworkLibrary::GetLocalPause(_pNetwork), iVar4 != 0)))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  pCVar9 = this + 0x78;
  iVar4 = 0x32;
  do {
    if ((*(int *)(pCVar9 + -4) == 0) && (*(int *)pCVar9 != 0)) {
      FUN_3609ea10();
    }
    pCVar9 = pCVar9 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_28 = DAT_362a51ec;
  local_c = *(CSoundObject **)(this + 0x458);
  do {
    while( true ) {
      while( true ) {
        do {
          this_00 = local_c;
          local_c = *(CSoundObject **)this_00;
          if (local_c == (CSoundObject *)0x0) {
            return;
          }
          local_1c = *(int *)(this_00 + 8);
        } while ((local_1c == 0) || (*(int *)(this_00 + 0x9c) != 0));
        local_14 = (float)(*(uint *)(this_00 + 0x2c) & 2);
        if (0 < local_28) break;
        if (-1 < *(int *)(this_00 + 0x28)) {
          FUN_3609ea10();
          *(undefined4 *)(this_00 + 0x28) = 0xffffffff;
        }
      }
      bVar2 = _DAT_36230184 <= *(float *)(this_00 + 100);
      bVar3 = *(double *)(this_00 + 0x18) <= _DAT_36227d98;
      if (bVar2) {
        if (!bVar3) {
          *(double *)(this_00 + 0x18) = _DAT_36227d98;
        }
      }
      else if (bVar3) {
        CSoundObject::ResetTimer(this_00,1);
      }
      bVar10 = -1 < *(int *)(this_00 + 0x28);
      if (bVar10) break;
LAB_3609fb06:
      local_30 = 0;
      if (((!bVar10) && (bVar2)) && ((*(uint *)(this_00 + 0x2c) & 0x20000000) == 0)) {
        lVar5 = CommitPlayingBuffer(local_20,this_00,(int *)&local_30);
        *(long *)(this_00 + 0x28) = lVar5;
      }
      pCVar9 = _pSound;
      if (-1 < *(int *)(this_00 + 0x28)) {
        iVar4 = *(int *)(this_00 + 0x28) * 0x14;
        if (local_30 == 0) {
          local_28 = local_28 + -1;
        }
        if (!bVar10) {
          CSoundObject::GetElapsedTime(this_00,0);
          (**(code **)(**(int **)(pCVar9 + iVar4 + 0x78) + 0x34))
                    (*(int **)(pCVar9 + iVar4 + 0x78),0);
        }
        if (((local_14 == 0.0) || (*(short *)(local_1c + 0x16) != 1)) ||
           (((byte)this_00[0x2c] & 0x40) != 0)) {
          local_1c = 0;
        }
        else {
          local_1c = 1;
          (**(code **)(**(int **)(pCVar9 + iVar4 + 0x7c) + 0x4c))
                    (*(int **)(pCVar9 + iVar4 + 0x7c),*(undefined4 *)(this_00 + 0x48),
                     *(undefined4 *)(this_00 + 0x4c),-*(float *)(this_00 + 0x50),1);
          (**(code **)(**(int **)(pCVar9 + iVar4 + 0x7c) + 0x50))
                    (*(int **)(pCVar9 + iVar4 + 0x7c),*(undefined4 *)(this_00 + 0x54),
                     *(undefined4 *)(this_00 + 0x58),-*(float *)(this_00 + 0x5c),1);
        }
        (**(code **)(**(int **)(pCVar9 + iVar4 + 0x78) + 0x24))
                  (*(int **)(pCVar9 + iVar4 + 0x78),&uStack_24);
        if ((local_18 == 0) || (((byte)this_00[0x2c] & 0x20) != 0)) {
          local_30 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
          local_30 = 1;
        }
        uVar1 = *(uint *)(this_00 + 0x2c);
        uVar8 = uStack_24 & 1;
        if (uVar6 == 0) {
          uVar7 = 0xffffd8f0;
          if (_DAT_36230184 < *(float *)(this_00 + 100)) {
            uStack_2c = *(undefined4 *)(this_00 + 100);
            if (DAT_362a51fc == 0) {
              uVar11 = FUN_361bfd6c();
              uVar7 = (undefined4)uVar11;
            }
            else {
              uVar11 = FUN_361bfd6c();
              uVar7 = (undefined4)uVar11;
              DAT_362a51fc = 1;
            }
          }
          (**(code **)(**(int **)(pCVar9 + iVar4 + 0x78) + 0x3c))
                    (*(int **)(pCVar9 + iVar4 + 0x78),uVar7);
          uVar7 = 0;
          if (*(int *)(this_00 + 0x3c) != 0x3f800000) {
            uVar11 = FUN_361bfd6c();
            uVar7 = (undefined4)uVar11;
          }
          (**(code **)(**(int **)(pCVar9 + iVar4 + 0x78) + 0x44))
                    (*(int **)(pCVar9 + iVar4 + 0x78),uVar7);
          *(float *)(DAT_362bef74 + 0x98) = *(float *)(DAT_362bef74 + 0x98) + _DAT_36223384;
          uVar6 = local_30;
        }
        if (uVar8 == 0) {
          if (uVar6 == 0) {
            local_14 = CSoundObject::GetElapsedTime(this_00,0);
            if (((uVar1 & 1) != 0) ||
               (((*(uint *)(this_00 + 0x2c) & 0x10000000) != 0 &&
                (local_14 <= (float)*(double *)(*(int *)(this_00 + 8) + 0x30))))) {
              (**(code **)(**(int **)(pCVar9 + iVar4 + 0x78) + 0x30))
                        (*(int **)(pCVar9 + iVar4 + 0x78),0,0,(uVar1 & 1) != 0);
              uVar8 = 1;
            }
            else {
              CSoundObject::Stop(this_00,1);
            }
            *(uint *)(this_00 + 0x2c) = *(uint *)(this_00 + 0x2c) & 0xefffffff;
          }
        }
        else if (uVar6 != 0) {
          *(uint *)(this_00 + 0x2c) = *(uint *)(this_00 + 0x2c) | 0x10000000;
          (**(code **)(**(int **)(pCVar9 + iVar4 + 0x78) + 0x48))(*(int **)(pCVar9 + iVar4 + 0x78));
          uVar8 = 0;
        }
        if (((local_1c != 0) && (uVar8 != 0)) && (*(int *)(pCVar9 + iVar4 + 0x80) != 0)) {
          local_30 = 0;
          if (DAT_362a5210 != 0) {
            local_14 = *(float *)(this_00 + 0x68) * _DAT_36230178;
            uStack_10 = (uint)ROUND(local_14);
            if ((int)uStack_10 < -10000) {
              local_30 = 0xffffd8f0;
            }
            else {
              local_30 = (0 < (int)uStack_10) - 1 & uStack_10;
            }
          }
          (**(code **)(**(int **)(pCVar9 + iVar4 + 0x80) + 0x10))
                    (*(int **)(pCVar9 + iVar4 + 0x80),&DAT_3622fd30,0x80000003,0,0,&local_30,4);
        }
      }
    }
    if (((bVar2) || (bVar3)) ||
       (fVar12 = CSoundObject::GetElapsedTime(this_00,1), fVar12 <= _DAT_36230180)) {
      if (*(int *)(_pSound + *(int *)(this_00 + 0x28) * 0x14 + 0x70) != local_1c) {
        ReleasePlayingBuffer(_pSound,*(int *)(this_00 + 0x28),0);
        *(undefined4 *)(this_00 + 0x28) = 0xffffffff;
        bVar10 = false;
      }
      goto LAB_3609fb06;
    }
    ReleasePlayingBuffer(local_20,*(long *)(this_00 + 0x28),0);
    *(undefined4 *)(this_00 + 0x28) = 0xffffffff;
  } while( true );
}

