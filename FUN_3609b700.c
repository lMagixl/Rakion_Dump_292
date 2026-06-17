
void __cdecl FUN_3609b700(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  uVar3 = DAT_362c9c68;
  iVar2 = DAT_362c9c5c;
  psVar1 = (short *)(DAT_362c9c5c +
                    (DAT_362c9c70 * (param_2 + -1) + param_1 + -1 & DAT_362c9c68) * 2);
  sVar5 = (short)((uint)(param_3 * 0x2ee8) >> 0x10);
  *psVar1 = *psVar1 + sVar5;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * (param_2 + -1) + param_1 & uVar3) * 2);
  sVar4 = (short)((uint)(param_3 * 0x6d95) >> 0x10);
  *psVar1 = *psVar1 + sVar4;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * (param_2 + -1) + param_1 + 1 & uVar3) * 2);
  *psVar1 = *psVar1 + sVar5;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * param_2 + param_1 + -1 & uVar3) * 2);
  *psVar1 = *psVar1 + sVar4;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * param_2 + param_1 & uVar3) * 2);
  *psVar1 = *psVar1 + (short)param_3;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * param_2 + param_1 + 1 & uVar3) * 2);
  *psVar1 = *psVar1 + sVar4;
  iVar6 = param_2 + 1;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * iVar6 + param_1 + -1 & uVar3) * 2);
  *psVar1 = *psVar1 + sVar5;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * iVar6 + param_1 & uVar3) * 2);
  *psVar1 = *psVar1 + sVar4;
  psVar1 = (short *)(iVar2 + (DAT_362c9c70 * iVar6 + param_1 + 1 & uVar3) * 2);
  *psVar1 = *psVar1 + sVar5;
  return;
}

