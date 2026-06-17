
undefined4 __fastcall FUN_360f28e0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int *this;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int *local_24;
  
  piVar6 = *(int **)(param_1 + 0x90);
  while (piVar1 = (int *)*piVar6, piVar1 != (int *)0x0) {
    if ((*(ushort *)(piVar6 + -0x104) & 0x10) == 0) {
      if ((*(ushort *)(piVar6 + -0x104) & 2) == 0) {
        puVar3 = (uint *)(piVar6 + -0x105);
        FUN_360ff3f0((void *)(param_1 + 0x88),piVar6[-0x105],0);
        iVar5 = FUN_360feff0((void *)(param_1 + 0xc0),*puVar3);
        if ((iVar5 != 0) ||
           (iVar5 = FUN_360fee10((void *)(param_1 + 0x88),puVar3,0), piVar6 = piVar1, iVar5 == 0)) {
          FUN_360ff0d0(puVar3);
          piVar6 = piVar1;
        }
      }
      else {
        this = (int *)FUN_360ff4d0();
        this[0x107] = piVar6[2];
        *(short *)(this + 0x108) = (short)piVar6[3];
        iVar5 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar5 + 1;
        puVar3 = (uint *)(piVar6 + -0x105);
        FUN_360fe960(this,puVar3,4,0x10,iVar5,*(undefined2 *)((int)piVar6 + 0xe),4);
        iVar5 = FUN_360ff1a0((void *)(param_1 + 0x18),this,1,1);
        if (iVar5 == 0) {
          FUN_360ff0d0(this);
        }
        if (DAT_362ccecc != 0) {
          puVar4 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
          uVar9 = *puVar3;
          uVar7 = __alldiv(*puVar4,puVar4[1],*(uint *)_pTimer,*(uint *)(_pTimer + 4));
          CPrintF(s__lu__Acknowledging_broadcast_pac_36232da8,(int)uVar7 * 1000,uVar9);
        }
        FUN_360ff3f0((void *)(param_1 + 0x88),*puVar3,0);
        iVar5 = FUN_360fee10((void *)(param_1 + 0xc0),puVar3,0);
        piVar6 = piVar1;
        if (iVar5 == 0) {
          FUN_360ff0d0(puVar3);
        }
      }
    }
    else {
      local_24 = piVar6 + -0xfa;
      if (0 < piVar6[-0x103] + -0xc) {
        iVar5 = (piVar6[-0x103] - 0xdU >> 2) + 1;
        do {
          iVar2 = *local_24;
          if (DAT_362ccecc != 0) {
            puVar3 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
            iVar8 = iVar2;
            uVar7 = __alldiv(*puVar3,puVar3[1],*(uint *)_pTimer,*(uint *)(_pTimer + 4));
            CPrintF(s__lu__Received_acknowledge_for_br_36232d6c,(int)uVar7 * 1000,iVar8);
          }
          FUN_360ff3f0((void *)(param_1 + 0x50),iVar2,1);
          FUN_360ff3f0((void *)(param_1 + 0x18),iVar2,1);
          local_24 = local_24 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_360ff3f0((void *)(param_1 + 0x88),piVar6[-0x105],0);
      FUN_360ff0d0(piVar6 + -0x105);
      piVar6 = piVar1;
    }
  }
  return 1;
}

