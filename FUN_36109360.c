
void __thiscall FUN_36109360(void *this,int param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CEntity *pCVar5;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217a6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)((int)this + 8),1);
  iVar4 = **(int **)(param_1 + 0x14);
  piVar2 = *(int **)(param_1 + 0x14) + 1;
  *(int **)(param_1 + 0x14) = piVar2;
  *(int *)((int)this + 0xa0) = *piVar2;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  *(undefined4 **)(param_1 + 0x14) = puVar3;
  *(undefined4 *)((int)this + 0xa4) = *puVar3;
  local_4 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  if (iVar4 != 0) {
    FUN_36109090(this,*(undefined4 *)((int)this + 0xa4));
    uVar1 = **(ulong **)(param_1 + 0x14);
    puVar3 = (undefined4 *)((int)this + 0x10);
    *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
    iVar4 = FUN_36106510(param_1,(undefined4 *)((int)this + 0x58));
    FUN_36106510(iVar4,puVar3);
    pCVar5 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),uVar1);
    FUN_36109100(this,pCVar5);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

