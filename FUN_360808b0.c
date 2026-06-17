
void __cdecl FUN_360808b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar4 = DAT_362bef7c;
  if (((param_1 != DAT_362a4014) || (param_2 != DAT_362a4018)) || (DAT_362a40dc == 0)) {
    if (1 < _iStatsMode) {
      puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar4 + 0x268) = *puVar5;
      *(undefined4 *)(iVar4 + 0x26c) = puVar5[1];
    }
    if (param_1 != DAT_362a4014) {
      switch(param_1) {
      default:
        uVar6 = 2;
        break;
      case 0x16:
        uVar6 = 1;
        break;
      case 0x17:
        uVar6 = 3;
        break;
      case 0x18:
        uVar6 = 4;
        break;
      case 0x19:
        uVar6 = 9;
        break;
      case 0x1a:
        uVar6 = 10;
        break;
      case 0x1b:
        uVar6 = 5;
        break;
      case 0x1c:
        uVar6 = 6;
      }
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 200))(*(int **)(_pGfx + 0xa5c),0x13,uVar6);
      DAT_362a4014 = param_1;
    }
    if (param_2 != DAT_362a4018) {
      switch(param_2) {
      default:
        uVar6 = 2;
        break;
      case 0x16:
        uVar6 = 1;
        break;
      case 0x17:
        uVar6 = 3;
        break;
      case 0x18:
        uVar6 = 4;
        break;
      case 0x19:
        uVar6 = 9;
        break;
      case 0x1a:
        uVar6 = 10;
        break;
      case 0x1b:
        uVar6 = 5;
        break;
      case 0x1c:
        uVar6 = 6;
      }
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 200))(*(int **)(_pGfx + 0xa5c),0x14,uVar6);
      DAT_362a4018 = param_2;
    }
    iVar4 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar3 = *(uint *)(iVar4 + 0x270);
      uVar8 = uVar1 - *(uint *)(iVar4 + 0x268);
      *(uint *)(iVar4 + 0x270) = uVar3 + uVar8;
      *(uint *)(iVar4 + 0x274) =
           *(int *)(iVar4 + 0x274) +
           ((uVar2 - *(int *)(iVar4 + 0x26c)) - (uint)(uVar1 < *(uint *)(iVar4 + 0x268))) +
           (uint)CARRY4(uVar3,uVar8);
      *(undefined4 *)(iVar4 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x26c) = 0xffffffff;
    }
  }
  return;
}

