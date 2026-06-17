
void __cdecl FUN_360811b0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = DAT_362bef7c;
  if (((param_1 != (undefined4 *)0x0) || (DAT_362a4010 != 0)) || (DAT_362a40dc == 0)) {
    DAT_362a4010 = (uint)(param_1 != (undefined4 *)0x0);
    if (1 < _iStatsMode) {
      puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar6 + 0x268) = *puVar4;
      *(undefined4 *)(iVar6 + 0x26c) = puVar4[1];
    }
    if (param_1 == (undefined4 *)0x0) {
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x94))(*(int **)(_pGfx + 0xa5c),2,&DAT_36228848);
    }
    else {
      puVar4 = &DAT_362c4598;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x94))(*(int **)(_pGfx + 0xa5c),2,&DAT_362c4598);
    }
    if (DAT_362c44c8 != 0) {
      FUN_3607af40();
    }
    iVar6 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar5 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar7 = uVar1 - *(uint *)(iVar6 + 0x268);
      uVar3 = *(uint *)(iVar6 + 0x270);
      *(uint *)(iVar6 + 0x270) = uVar3 + uVar7;
      *(uint *)(iVar6 + 0x274) =
           *(int *)(iVar6 + 0x274) +
           ((uVar2 - *(int *)(iVar6 + 0x26c)) - (uint)(uVar1 < *(uint *)(iVar6 + 0x268))) +
           (uint)CARRY4(uVar3,uVar7);
      *(undefined4 *)(iVar6 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x26c) = 0xffffffff;
    }
  }
  return;
}

