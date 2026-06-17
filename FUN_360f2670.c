
undefined4 __fastcall FUN_360f2670(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int *this;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int *local_24;
  
  piVar1 = (int *)param_1[0x24];
  while( true ) {
    while( true ) {
      while( true ) {
        piVar6 = piVar1;
        piVar1 = (int *)*piVar6;
        if (piVar1 == (int *)0x0) {
          return 1;
        }
        if ((*(ushort *)(piVar6 + -0x104) & 0x10) == 0) break;
        local_24 = piVar6 + -0xfa;
        if (0 < piVar6[-0x103] + -0xc) {
          iVar7 = (piVar6[-0x103] - 0xdU >> 2) + 1;
          do {
            iVar2 = *local_24;
            if (DAT_362ccecc != 0) {
              puVar3 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
              iVar9 = iVar2;
              uVar8 = __alldiv(*puVar3,puVar3[1],*(uint *)_pTimer,*(uint *)(_pTimer + 4));
              CPrintF(s__lu__Received_acknowledge_for_pa_36232d10,(int)uVar8 * 1000,iVar9);
            }
            FUN_360ff3f0(param_1 + 0x14,iVar2,1);
            FUN_360ff3f0(param_1 + 6,iVar2,1);
            local_24 = local_24 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        FUN_360ff3f0(param_1 + 0x22,piVar6[-0x105],0);
        FUN_360ff0d0(piVar6 + -0x105);
      }
      if ((*(ushort *)(piVar6 + -0x104) & 2) != 0) break;
      uVar5 = piVar6[-0x105];
      if ((uint)param_1[0x23] < uVar5) {
        uVar5 = FUN_360fefc0(param_1 + 0x30,uVar5);
        if (1 < uVar5) {
          FUN_360ff3f0(param_1 + 0x22,piVar6[-0x105],1);
        }
      }
      else {
        FUN_360ff3f0(param_1 + 0x22,uVar5,1);
      }
    }
    this = (int *)FUN_360ff4d0();
    this[0x107] = param_1[2];
    *(short *)(this + 0x108) = (short)param_1[3];
    iVar7 = param_1[5];
    puVar3 = (uint *)(piVar6 + -0x105);
    param_1[5] = iVar7 + 1;
    FUN_360fe960(this,puVar3,4,0x10,iVar7 + 1,*(undefined2 *)((int)param_1 + 0xe),4);
    iVar7 = FUN_360ff1a0(param_1 + 6,this,1,1);
    if (iVar7 == 0) break;
    if (DAT_362ccecc != 0) {
      puVar4 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar5 = *puVar3;
      uVar8 = __alldiv(*puVar4,puVar4[1],*(uint *)_pTimer,*(uint *)(_pTimer + 4));
      CPrintF(s__lu__Acknowledging_packet_sequen_36232d44,(int)uVar8 * 1000,uVar5);
    }
    FUN_360ff3f0(param_1 + 0x22,*puVar3,0);
    if ((*param_1 == 0) || ((*(byte *)(piVar6 + -0x104) & 0x40) == 0)) {
      iVar7 = FUN_360fee10(param_1 + 0x30,puVar3,0);
      if (iVar7 == 0) {
        FUN_360ff0d0(puVar3);
      }
    }
    else {
      FUN_360ff0d0(puVar3);
    }
  }
  FUN_360ff0d0(this);
  return 1;
}

