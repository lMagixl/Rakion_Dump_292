
/* WARNING: Removing unreachable block (ram,0x3607bea8) */

int * __cdecl FUN_3607be10(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uStack_44;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int local_28;
  int *piStack_10;
  
  iVar6 = DAT_362bef7c;
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar1 = *(int *)(_pGfx + 0xa38);
  if (1 < _iStatsMode) {
    uStack_44 = 0x3607be55;
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar6 + 0x268) = *puVar5;
    *(undefined4 *)(iVar6 + 0x26c) = puVar5[1];
  }
  if (iVar1 == 0) {
    uStack_44 = 0xde1;
    (*DAT_362c41d4)();
    if ((*(uint *)(_pGfx + 0xa54) & 0x8000000) != 0) {
      (*DAT_362c41bc)(0xde1,0,0x86a1,&stack0xffffffc8);
    }
    (*DAT_362c41bc)(0xde1,0,0x1000,auStack_30);
    (*DAT_362c41bc)(0xde1,0,0x1001,&uStack_44);
    uStack_44 = 0x3607bf15;
    iVar6 = FUN_3607ac50(param_1);
    param_1 = (int *)(iVar6 * iStack_2c * local_28);
  }
  else if (iVar1 == 1) {
    uStack_44 = 0;
    (**(code **)(*param_1 + 0x38))(param_1);
    param_1 = piStack_10;
  }
  iVar6 = DAT_362bef7c;
  if (param_2 != 0) {
    param_1 = (int *)(((int)param_1 * 4) / 3);
  }
  if (1 < _iStatsMode) {
    uStack_44 = 0x3607bf6e;
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
  return param_1;
}

