
void __cdecl FUN_3607c020(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar5 = DAT_362bef7c;
  iVar1 = *(int *)(_pGfx + 0xaf0);
  if (0 < iVar1) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (iVar1 < param_1) {
      param_1 = iVar1;
    }
    if ((DAT_362a4030 != param_1) || ((DAT_362c45e8 == 0) != (param_2 == 0))) {
      iVar1 = *(int *)(_pGfx + 0xa38);
      if (1 < _iStatsMode) {
        puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar5 + 0x268) = *puVar6;
        *(undefined4 *)(iVar5 + 0x26c) = puVar6[1];
      }
      if (iVar1 == 0) {
        (*DAT_362c3d10)(0x87f4,param_1);
        (*DAT_362c3d10)(0x87f3,0x87f8 - (uint)(param_2 != 0));
      }
      else if ((iVar1 == 1) && (DAT_362c44d0 != 0)) {
        (**(code **)(**(int **)(_pGfx + 0xa5c) + 200))
                  (*(int **)(_pGfx + 0xa5c),0xa4,(float)(param_1 + 1));
      }
      iVar1 = DAT_362bef7c;
      DAT_362c45e8 = param_2;
      DAT_362a4030 = param_1;
      if (1 < _iStatsMode) {
        puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        uVar4 = *(uint *)(iVar1 + 0x270);
        uVar8 = uVar2 - *(uint *)(iVar1 + 0x268);
        *(uint *)(iVar1 + 0x270) = uVar4 + uVar8;
        *(uint *)(iVar1 + 0x274) =
             *(int *)(iVar1 + 0x274) +
             ((uVar3 - *(int *)(iVar1 + 0x26c)) - (uint)(uVar2 < *(uint *)(iVar1 + 0x268))) +
             (uint)CARRY4(uVar4,uVar8);
        *(undefined4 *)(iVar1 + 0x268) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x26c) = 0xffffffff;
      }
    }
    return;
  }
  DAT_362a4030 = 0;
  DAT_362c45e8 = 0;
  return;
}

