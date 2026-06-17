
void __cdecl FUN_3607bbd0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  iVar6 = DAT_362bef7c;
  iVar1 = *(int *)(_pGfx + 0xa38);
  if (1 < _iStatsMode) {
    puVar7 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar6 + 0x268) = *puVar7;
    *(undefined4 *)(iVar6 + 0x26c) = puVar7[1];
  }
  if (iVar1 == 0) {
    FUN_3607a750(param_1,param_2,param_3,param_4,param_5);
  }
  else if (iVar1 == 1) {
    piVar2 = *(int **)(&DAT_362c4564 + DAT_362c44d4 * 4);
    iVar1 = *piVar2;
    FUN_36076400(piVar2,param_1,param_2,param_3,param_4,(uint)(param_5 == 0));
    if (iVar1 != *piVar2) {
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0xf4))(*(int **)(_pGfx + 0xa5c),DAT_362c44d4,*piVar2)
      ;
    }
  }
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar8 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar3 = *puVar8;
    uVar4 = puVar8[1];
    uVar9 = uVar3 - *(uint *)(iVar1 + 0x268);
    uVar5 = *(uint *)(iVar1 + 0x270);
    *(uint *)(iVar1 + 0x270) = uVar5 + uVar9;
    *(uint *)(iVar1 + 0x274) =
         *(int *)(iVar1 + 0x274) +
         ((uVar4 - *(int *)(iVar1 + 0x26c)) - (uint)(uVar3 < *(uint *)(iVar1 + 0x268))) +
         (uint)CARRY4(uVar5,uVar9);
    *(undefined4 *)(iVar1 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x26c) = 0xffffffff;
  }
  return;
}

