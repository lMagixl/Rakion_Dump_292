
/* public: void __thiscall CPlayerSource::HandleMoving(void) */

void __thiscall CPlayerSource::HandleMoving(CPlayerSource *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CEntity *pCVar5;
  float *pfVar6;
  undefined4 auStack_c [3];
  
                    /* 0x108c10  2239  ?HandleMoving@CPlayerSource@@QAEXXZ */
  if ((net_bLocalPrediction != 0) &&
     (pCVar5 = CNetworkLibrary::GetLocalPlayerEntity(_pNetwork,this), pCVar5 != (CEntity *)0x0)) {
    (**(code **)(*(int *)pCVar5 + 0x144))();
    (**(code **)(*(int *)pCVar5 + 0x148))();
    (**(code **)(*(int *)pCVar5 + 0x14c))();
    (**(code **)(*(int *)pCVar5 + 0x150))();
    (**(code **)(*(int *)pCVar5 + 0x144))();
    fVar4 = CTimer::TickQuantum;
    iVar1 = *(int *)(pCVar5 + 0xb8);
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x200) != 0)) {
      pfVar6 = (float *)FUN_360a5d20((void *)(iVar1 + 0x250),auStack_c);
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *(float *)(pCVar5 + 0x288) = *(float *)(pCVar5 + 0x3c) - *pfVar6 * fVar4;
      *(float *)(pCVar5 + 0x28c) = *(float *)(pCVar5 + 0x40) - fVar2 * fVar4;
      *(float *)(pCVar5 + 0x290) = *(float *)(pCVar5 + 0x44) - fVar3 * fVar4;
    }
  }
  return;
}

