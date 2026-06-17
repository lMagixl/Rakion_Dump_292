
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3607b4e0(float param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = DAT_362bef7c;
  iVar8 = *(int *)(_pGfx + 0xa38);
  if ((_DAT_362c46f8 != param_1) || (*(float *)(_pGfx + 0xae8) != _DAT_3622376c)) {
    _DAT_362c46f8 = param_1;
    if (1 < _iStatsMode) {
      puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar1 + 0x268) = *puVar5;
      *(undefined4 *)(iVar1 + 0x26c) = puVar5[1];
    }
    if (iVar8 == 0) {
      if (*(int *)(_pGfx + 0xadc) < 2) {
        (*DAT_362c4188)(0x8500,0x8501,param_1);
      }
      else {
        if (0 < *(int *)(_pGfx + 0xadc)) {
          iVar8 = 0x84c0;
          do {
            (*DAT_362c446c)(iVar8);
            (*DAT_362c4470)(iVar8);
            (*DAT_362c4188)(0x8500,0x8501,param_1);
            iVar1 = iVar8 + -0x84bf;
            iVar8 = iVar8 + 1;
          } while (iVar1 < *(int *)(_pGfx + 0xadc));
        }
        iVar8 = DAT_362c44d4 + 0x84c0;
        (*DAT_362c446c)(iVar8);
        (*DAT_362c4470)(iVar8);
      }
    }
    else if ((iVar8 == 1) && (iVar8 = 0, 0 < *(int *)(_pGfx + 0xadc))) {
      do {
        (**(code **)(**(int **)(_pGfx + 0xa5c) + 0xfc))(*(int **)(_pGfx + 0xa5c),iVar8,0x13,param_1)
        ;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(_pGfx + 0xadc));
    }
    iVar8 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      uVar7 = uVar2 - *(uint *)(iVar8 + 0x268);
      uVar4 = *(uint *)(iVar8 + 0x270);
      *(uint *)(iVar8 + 0x270) = uVar4 + uVar7;
      *(uint *)(iVar8 + 0x274) =
           *(int *)(iVar8 + 0x274) +
           ((uVar3 - *(int *)(iVar8 + 0x26c)) - (uint)(uVar2 < *(uint *)(iVar8 + 0x268))) +
           (uint)CARRY4(uVar4,uVar7);
      *(undefined4 *)(iVar8 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0x26c) = 0xffffffff;
    }
  }
  return;
}

