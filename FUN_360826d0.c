
void FUN_360826d0(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *local_2c;
  CDisableAsyncProgress local_28 [4];
  uint local_24 [2];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211f6a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CDisableAsyncProgress::CDisableAsyncProgress(local_28);
  iVar6 = DAT_362bef7c;
  local_4 = 0;
  if (1 < _iStatsMode) {
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar6 + 0x268) = *puVar5;
    *(undefined4 *)(iVar6 + 0x26c) = puVar5[1];
  }
  local_2c = (int *)0x0;
  local_24[0] = *(uint *)(_pGfx + 0xa54) & 0x200;
  if (local_24[0] == 0) {
    if (*(int *)(_pGfx + 0xa30) == 0) goto LAB_360827c9;
    piVar1 = *(int **)(*(int *)(_pGfx + 0xa30) + 0x7c);
    iVar6 = (**(code **)(*piVar1 + 0x10))(piVar1,0,0,&local_2c);
  }
  else {
    iVar6 = (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x40))(*(int **)(_pGfx + 0xa5c),0,0,&local_2c);
  }
  if ((iVar6 == 0) && (local_2c != (int *)0x0)) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 1;
    uStack_10 = 1;
    iVar6 = (**(code **)(*local_2c + 0x24))(local_2c,local_24,&uStack_1c,0x10);
    if (iVar6 == 0) {
      (**(code **)(*local_2c + 0x28))(local_2c);
    }
    do {
      iVar6 = (**(code **)(*local_2c + 8))(local_2c);
    } while (0 < iVar6);
    local_2c = (int *)0x0;
  }
LAB_360827c9:
  iVar6 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    uVar8 = uVar2 - *(uint *)(iVar6 + 0x268);
    uVar4 = *(uint *)(iVar6 + 0x270);
    *(uint *)(iVar6 + 0x270) = uVar4 + uVar8;
    *(uint *)(iVar6 + 0x274) =
         *(int *)(iVar6 + 0x274) +
         ((uVar3 - *(int *)(iVar6 + 0x26c)) - (uint)(uVar2 < *(uint *)(iVar6 + 0x268))) +
         (uint)CARRY4(uVar4,uVar8);
    *(undefined4 *)(iVar6 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x26c) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  CDisableAsyncProgress::~CDisableAsyncProgress(local_28);
  ExceptionList = pvStack_c;
  return;
}

