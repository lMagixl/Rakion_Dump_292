
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPlayerSource::ApplyNewerActions(unsigned long) */

void __thiscall CPlayerSource::ApplyNewerActions(CPlayerSource *this,ulong param_1)

{
  float fVar1;
  bool bVar2;
  CEntity *pCVar3;
  uint *puVar4;
  xEncryptMemory *this_00;
  int iVar5;
  CPlayerSource *pCVar6;
  undefined8 uVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  ulong local_5c;
  undefined8 local_58;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
                    /* 0x108d50  1058  ?ApplyNewerActions@CPlayerSource@@QAEXK@Z */
  if (net_bLocalPrediction != 0) {
    pCVar3 = CNetworkLibrary::GetLocalPlayerEntity(_pNetwork,this);
    if (pCVar3 != (CEntity *)0x0) {
      bVar2 = false;
      puVar4 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar7 = __alldiv(*puVar4,puVar4[1],*(uint *)_pTimer,*(uint *)(_pTimer + 4));
      local_5c = (int)uVar7 * 1000 - param_1;
      fVar1 = (float)(int)local_5c;
      if ((int)local_5c < 0) {
        fVar1 = fVar1 + _DAT_362265a8;
      }
      DAT_362cfb2c = fVar1 * _DAT_362253e4;
      CNetworkLibrary::AddNetGraphValue(_pNetwork,0,DAT_362cfb2c);
      local_5c = param_1;
      local_58 = (double)(int)param_1;
      if ((int)param_1 < 0) {
        local_58 = local_58 + _DAT_3622dd20;
      }
      pCVar6 = this + 0x328;
      iVar5 = 10;
      do {
        if (local_58 < *(double *)(pCVar6 + 8)) {
          if (!bVar2) {
            bVar2 = true;
          }
          (**(code **)(*(int *)pCVar3 + 0x18c))();
          (**(code **)(*(int *)pCVar3 + 0x1b4))(pCVar6,DAT_362cfb2c,&local_5c);
          (**(code **)(*(int *)pCVar3 + 0x144))();
          (**(code **)(*(int *)pCVar3 + 0x148))();
          (**(code **)(*(int *)pCVar3 + 0x14c))();
          (**(code **)(*(int *)pCVar3 + 0x150))();
          (**(code **)(*(int *)pCVar3 + 0x144))();
        }
        pCVar6 = pCVar6 + -0x48;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = *(int *)(pCVar3 + 0xb8);
      if ((iVar5 != 0) && ((*(uint *)(iVar5 + 8) & 0x200) != 0)) {
        uVar8 = *(uint *)(iVar5 + 0x254);
        uVar10 = 3;
        pfVar9 = &fStack_38;
        this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600cdd0(this_00,uVar8,pfVar9,uVar10);
        fStack_44 = fStack_38 * CTimer::TickQuantum;
        fStack_40 = fStack_34 * CTimer::TickQuantum;
        fStack_3c = fStack_30 * CTimer::TickQuantum;
        *(float *)(pCVar3 + 0x288) = *(float *)(pCVar3 + 0x3c) - fStack_44;
        local_58 = (double)CONCAT44(*(float *)(pCVar3 + 0x40) - fStack_40,
                                    *(float *)(pCVar3 + 0x3c) - fStack_44);
        *(float *)(pCVar3 + 0x28c) = *(float *)(pCVar3 + 0x40) - fStack_40;
        fStack_50 = *(float *)(pCVar3 + 0x44) - fStack_3c;
        *(float *)(pCVar3 + 0x290) = fStack_50;
      }
      (**(code **)(*(int *)pCVar3 + 400))();
    }
  }
  return;
}

