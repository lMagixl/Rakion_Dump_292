
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundLibrary::UpdateSounds(void) */

void __thiscall CSoundLibrary::UpdateSounds(CSoundLibrary *this)

{
  CSoundLibrary *pCVar1;
  CSoundObject *pCVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  CListNode *pCVar6;
  undefined4 *puVar7;
  CSoundLibrary *pCVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  CListNode *this_00;
  int iVar12;
  CSoundLibrary *pCVar13;
  CSoundObject *this_01;
  SndEnvFX SVar14;
  uint local_8;
  int iStack_4;
  
                    /* 0xa0760  3926  ?UpdateSounds@CSoundLibrary@@QAEXXZ */
  iVar12 = DAT_362bef7c;
  if (*(int *)(this + 0x48) != 0) {
    if (1 < _iStatsMode) {
      puVar7 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar12 + 0x128) = *puVar7;
      *(undefined4 *)(iVar12 + 300) = puVar7[1];
    }
    if ((((byte)this[0x44] & 1) == 0) && (DAT_362ca0d4 != DAT_362b2a94)) {
      DAT_362ca0d4 = DAT_362b2a94;
      SetFormat(this,*(SoundFormat *)(this + 0x48),0);
    }
    if (_DAT_362a51f4 < _DAT_3622376c) {
      _DAT_362a51f4 = 0.0;
    }
    else if (_DAT_362a51f4 < _DAT_36223384 == (_DAT_362a51f4 == _DAT_36223384)) {
      _DAT_362a51f4 = 1.0;
    }
    if (_DAT_362a51f8 < _DAT_3622376c) {
      _DAT_362a51f8 = 0.0;
    }
    else if (_DAT_362a51f8 < _DAT_36223384 == (_DAT_362a51f8 == _DAT_36223384)) {
      _DAT_362a51f8 = 1.0;
    }
    CTimer::GetHighPrecisionTimer(_pTimer);
    DAT_362ca0e4 = (uint)((double)CONCAT44(iStack_4,local_8) / (double)*(longlong *)_pTimer <
                         *(double *)(this + 0x468));
    iVar12 = 0;
    pCVar1 = *(CSoundLibrary **)(_pSound + 0x38);
    pCVar13 = this;
    while (pCVar8 = pCVar1, pCVar1 = *(CSoundLibrary **)pCVar8, pCVar1 != (CSoundLibrary *)0x0) {
      iVar12 = iVar12 + 1;
      pCVar13 = pCVar8;
    }
    if (iVar12 == 1) {
      SVar14 = *(SndEnvFX *)(pCVar13 + 0x50);
    }
    else {
      SVar14 = 0;
    }
    SetEnvironment(this,SVar14);
    DAT_362ca0e0 = 0;
    for (piVar10 = *(int **)(this + 0x458); *piVar10 != 0; piVar10 = (int *)*piVar10) {
      if (((*(byte *)(piVar10 + 0xb) & 0x40) != 0) && (_DAT_362287a8 < (float)piVar10[0x19])) {
        DAT_362ca0e0 = 1;
      }
      if (piVar10[2] != 0) {
        *(undefined4 *)(piVar10[2] + 0x40) = 0;
      }
    }
    pCVar2 = *(CSoundObject **)(this + 0x458);
LAB_360a08f8:
    this_01 = pCVar2;
    pCVar2 = *(CSoundObject **)this_01;
    if (pCVar2 != (CSoundObject *)0x0) {
      if ((*(uint *)(this_01 + 0x2c) & 0x80000000) != 0) goto code_r0x360a0903;
      goto LAB_360a0928;
    }
    CListHead::Sort((CListHead *)(this + 0x458),(_func_int_void_ptr_void_ptr *)&LAB_3609eae0,0);
    if (DAT_362a51ec < 5) {
      DAT_362a51ec = 5;
    }
    else if (0x32 < DAT_362a51ec) {
      DAT_362a51ec = 0x32;
    }
    if (((byte)this[0x44] & 1) == 0) {
      DSPlayMainBuffers(this);
    }
    iVar12 = DAT_362bef7c;
    if ((_DAT_362ca1c8 & 1) == 0) {
      _DAT_362ca1c8 = _DAT_362ca1c8 | 1;
      DAT_362ca1c0 = 0;
      DAT_362ca1c4 = 0;
    }
    if ((float10)_DAT_362253e8 <
        (float10)CONCAT44((iStack_4 - DAT_362ca1c4) - (uint)(local_8 < DAT_362ca1c0),
                          local_8 - DAT_362ca1c0) / (float10)*(longlong *)_pTimer) {
      if (1 < _iStatsMode) {
        puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar11 = uVar3 - *(uint *)(iVar12 + 0x128);
        uVar5 = *(uint *)(iVar12 + 0x130);
        *(uint *)(iVar12 + 0x130) = uVar5 + uVar11;
        *(uint *)(iVar12 + 0x134) =
             *(int *)(iVar12 + 0x134) +
             ((uVar4 - *(int *)(iVar12 + 300)) - (uint)(uVar3 < *(uint *)(iVar12 + 0x128))) +
             (uint)CARRY4(uVar5,uVar11);
        *(undefined4 *)(iVar12 + 0x128) = 0xffffffff;
        *(undefined4 *)(iVar12 + 300) = 0xffffffff;
      }
      DAT_362ca1c0 = local_8;
      DAT_362ca1c4 = iStack_4;
      MixSounds(this);
      iVar12 = DAT_362bef7c;
      if (1 < _iStatsMode) {
        puVar7 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar12 + 0x128) = *puVar7;
        *(undefined4 *)(iVar12 + 300) = puVar7[1];
      }
    }
    if (((byte)this[0x44] & 2) != 0) {
      PlayBuffers(this);
      (**(code **)(**(int **)(this + 0x34) + 0x44))(*(int **)(this + 0x34));
    }
    this_00 = *(CListNode **)(this + 0x38);
    while (iVar12 = DAT_362bef7c, pCVar6 = *(CListNode **)this_00, pCVar6 != (CListNode *)0x0) {
      CListNode::Remove(this_00);
      this_00 = pCVar6;
    }
    if (1 < _iStatsMode) {
      puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = *(uint *)(iVar12 + 0x130);
      uVar11 = uVar3 - *(uint *)(iVar12 + 0x128);
      *(uint *)(iVar12 + 0x130) = uVar5 + uVar11;
      *(uint *)(iVar12 + 0x134) =
           *(int *)(iVar12 + 0x134) +
           ((uVar4 - *(int *)(iVar12 + 300)) - (uint)(uVar3 < *(uint *)(iVar12 + 0x128))) +
           (uint)CARRY4(uVar5,uVar11);
      *(undefined4 *)(iVar12 + 0x128) = 0xffffffff;
      *(undefined4 *)(iVar12 + 300) = 0xffffffff;
    }
  }
  return;
code_r0x360a0903:
  CSoundObject::Update(this_01);
  *(float *)(DAT_362bef74 + 0xac) = *(float *)(DAT_362bef74 + 0xac) + _DAT_36223384;
  if ((*(uint *)(this_01 + 0x2c) & 0x80000000) == 0) {
LAB_360a0928:
    RemoveFromPendingList(this,this_01,0);
  }
  goto LAB_360a08f8;
}

