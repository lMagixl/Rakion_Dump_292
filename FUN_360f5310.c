
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_360f5310(void)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  CNetworkLibrary *this;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_2008 [2049];
  
  local_2008[0x7ff] = 0x360f5320;
  piVar6 = local_2008;
  local_2008[0] = 0;
  for (iVar5 = 0x7ff; piVar6 = piVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
  }
  pcVar2 = Translate(s_ETRSNumber_of_entities_of_each_c_36232f60,4);
  CPrintF(pcVar2);
  this = _pNetwork + 0x1340;
  iVar7 = 0;
  iVar5 = FUN_360caf20((int)this);
  if (0 < iVar5) {
    do {
      iVar5 = FUN_360cafb0(this,iVar7);
      uVar1 = *(uint *)(*(int *)(*(int *)(iVar5 + 0x78) + 0x20) + 0x28);
      if (uVar1 < 0x800) {
        local_2008[uVar1] = local_2008[uVar1] + 1;
      }
      iVar7 = iVar7 + 1;
      iVar5 = FUN_360caf20((int)this);
    } while (iVar7 < iVar5);
  }
  iVar5 = 0;
  do {
    iVar7 = local_2008[iVar5];
    if (iVar7 != 0) {
      iVar3 = FUN_361300d0(iVar5);
      iVar8 = iVar5;
      pcVar2 = Translate(s_ETRS_d__d_36232f88,4);
      CPrintF(pcVar2,iVar8,iVar7);
      if (iVar3 == 0) {
        uVar9 = 4;
        pcVar2 = s_ETRSN_A_36232fa0;
        pcVar4 = Translate(s_ETRSN_A_36232fa0,4);
      }
      else {
        uVar9 = *(undefined4 *)(iVar3 + 8);
        pcVar2 = *(char **)(iVar3 + 4);
        pcVar4 = Translate(s_ETRS_s_36232f98,4);
      }
      CPrintF(pcVar4,pcVar2,uVar9);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x800);
  return;
}

