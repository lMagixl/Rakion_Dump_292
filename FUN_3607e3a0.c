
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_3607e3a0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar5 = DAT_362bef7c;
  if (param_2 == param_1) {
    param_2 = param_2 + _DAT_362253e4;
  }
  if (param_4 == param_3) {
    param_4 = param_4 + _DAT_362253e4;
  }
  if (param_6 == param_5) {
    param_6 = param_6 + _DAT_362253e4;
  }
  fVar4 = -param_1;
  if ((((_DAT_362c4548 != fVar4) || (_DAT_362c4550 != -param_3)) || (_DAT_362c4558 != -param_5)) ||
     (((_DAT_362c454c != -param_2 || (_DAT_362c4554 != -param_4)) ||
      ((_DAT_362c455c != -param_6 || (DAT_362a40dc == 0)))))) {
    _DAT_362c4550 = -param_3;
    _DAT_362c4558 = -param_5;
    _DAT_362c454c = -param_2;
    _DAT_362c4554 = -param_4;
    _DAT_362c455c = -param_6;
    _DAT_362c4548 = fVar4;
    if (1 < _iStatsMode) {
      puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar5 + 0x268) = *puVar6;
      *(undefined4 *)(iVar5 + 0x26c) = puVar6[1];
    }
    (*DAT_362c3e08)();
    (*DAT_362c3e20)();
    (*DAT_362c3e10)((double)param_1);
    iVar5 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar8 = uVar1 - *(uint *)(iVar5 + 0x268);
      uVar3 = *(uint *)(iVar5 + 0x270);
      *(uint *)(iVar5 + 0x270) = uVar3 + uVar8;
      *(uint *)(iVar5 + 0x274) =
           *(int *)(iVar5 + 0x274) +
           ((uVar2 - *(int *)(iVar5 + 0x26c)) - (uint)(uVar1 < *(uint *)(iVar5 + 0x268))) +
           (uint)CARRY4(uVar3,uVar8);
      *(undefined4 *)(iVar5 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x26c) = 0xffffffff;
      return;
    }
  }
  return;
}

