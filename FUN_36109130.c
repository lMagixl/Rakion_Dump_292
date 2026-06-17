
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36109130(void *this,undefined4 *param_1)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  NetGraphEntryType NVar6;
  CTSingleLock local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217a5c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)((int)this + 8),1);
  puVar4 = (undefined4 *)((int)this + 0x58);
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  local_4 = 0;
  param_1 = (undefined4 *)0x0;
  iVar3 = CNetworkLibrary::IsPlayerLocal(_pNetwork,*(CEntity **)((int)this + 4));
  if (iVar3 != 0) {
    puVar2 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar5 = __alldiv(*puVar2,puVar2[1],*(uint *)_pTimer,*(uint *)(_pTimer + 4));
    iVar3 = (int)uVar5 * 1000;
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + _DAT_362265a8;
    }
    param_1 = (undefined4 *)((fVar1 - (float)*(double *)((int)this + 0x60)) * (float)_DAT_36227d38);
    if (*(double *)((int)this + 0x60) == *(double *)((int)this + 0x18)) {
      NVar6 = 4;
    }
    else {
      NVar6 = 0;
    }
    CNetworkLibrary::AddNetGraphValue(_pNetwork,NVar6,(float)param_1);
  }
  if (((*(byte *)(*(int **)((int)this + 4) + 4) & 4) == 0) && (*(int *)(_pNetwork + 0x14) != 0)) {
    (**(code **)(**(int **)((int)this + 4) + 0x1b4))
              ((undefined4 *)((int)this + 0x58),param_1,&param_1);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = pvStack_c;
  return;
}

