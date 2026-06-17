
/* void __cdecl STAT_UIstop(void) */

void __cdecl STAT_UIstop(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
                    /* 0x3bad0  3192  ?STAT_UIstop@@YAXXZ */
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar5 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar6 = uVar1 - *(uint *)(iVar4 + 0x2b8);
    uVar3 = *(uint *)(iVar4 + 0x2c0);
    *(uint *)(iVar4 + 0x2c0) = uVar3 + uVar6;
    *(uint *)(iVar4 + 0x2c4) =
         *(int *)(iVar4 + 0x2c4) +
         ((uVar2 - *(int *)(iVar4 + 700)) - (uint)(uVar1 < *(uint *)(iVar4 + 0x2b8))) +
         (uint)CARRY4(uVar3,uVar6);
    *(undefined4 *)(iVar4 + 0x2b8) = 0xffffffff;
    *(undefined4 *)(iVar4 + 700) = 0xffffffff;
  }
  return;
}

