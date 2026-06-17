
void __cdecl FUN_36082f70(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = DAT_362bef7c;
  uVar9 = param_1 & 0xf;
  uVar1 = *(undefined4 *)(&DAT_362a4034 + uVar9 * 4);
  iVar8 = ((int)param_1 >> 4) * 0xd4 + DAT_362c4714;
  if (1 < _iStatsMode) {
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar4 + 0x268) = *puVar5;
    *(undefined4 *)(iVar4 + 0x26c) = puVar5[1];
  }
  if (param_1 != 0) {
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x14c))
              (*(int **)(_pGfx + 0xa5c),uVar1,*(undefined4 *)(iVar8 + 0x60 + uVar9 * 4),
               (&DAT_3622b1c0)[uVar9]);
  }
  DAT_362a4024 = 0;
  if (param_3 < 1) {
    param_3 = *(int *)(iVar8 + 0xc4);
  }
  DAT_362c4560 = param_3;
  (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x154))
            (*(int **)(_pGfx + 0xa5c),*(undefined4 *)(_pGfx + 0xaa4),param_2);
  iVar4 = DAT_362bef7c;
  DAT_362c3cb4 = 1 << ((byte)uVar1 & 0x1f);
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar9 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = *(uint *)(iVar4 + 0x270);
    uVar7 = uVar9 - *(uint *)(iVar4 + 0x268);
    *(uint *)(iVar4 + 0x270) = uVar3 + uVar7;
    *(uint *)(iVar4 + 0x274) =
         *(int *)(iVar4 + 0x274) +
         ((uVar2 - *(int *)(iVar4 + 0x26c)) - (uint)(uVar9 < *(uint *)(iVar4 + 0x268))) +
         (uint)CARRY4(uVar3,uVar7);
    *(undefined4 *)(iVar4 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x26c) = 0xffffffff;
  }
  return;
}

