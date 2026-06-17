
void __cdecl FUN_36083550(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar2 = FUN_36061f30(0x362c5548);
  iVar5 = DAT_362c5550 + param_1 * 6;
  DAT_362c5550 = iVar5;
  iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c5548);
  if (iVar3 < iVar5) {
    iVar5 = FUN_3600bda0((undefined4 *)&DAT_362c5548);
    FUN_360623a0(&DAT_362c5548,iVar5 + ((param_1 * 6 + -1) / DAT_362c5554 + 1) * DAT_362c5554);
    iVar5 = DAT_362c5550;
  }
  iVar3 = 0;
  if (0 < param_1) {
    psVar4 = (short *)(DAT_362c554c + (iVar5 + param_1 * -6) * 2 + 4);
    do {
      sVar1 = (short)(iVar2 / 6) * 4 + (short)iVar3 * 4;
      psVar4[-2] = sVar1 + 1;
      *psVar4 = sVar1;
      psVar4[1] = sVar1;
      psVar4[-1] = sVar1 + 2;
      psVar4[2] = sVar1 + 2;
      psVar4[3] = sVar1 + 3;
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar3 < param_1);
  }
  return;
}

