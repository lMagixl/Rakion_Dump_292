
int FUN_3620c970(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_3 + 4) + param_1);
  uVar6 = uVar2;
  if (1 < param_2) {
    piVar3 = (int *)(param_3 + 0xc);
    iVar5 = param_2 + -1;
    uVar1 = uVar2;
    do {
      uVar4 = (uint)*(byte *)(*piVar3 + param_1);
      uVar2 = uVar4;
      if ((uVar4 <= uVar1) && (uVar2 = uVar1, uVar4 < uVar6)) {
        uVar6 = uVar4;
      }
      piVar3 = piVar3 + 2;
      iVar5 = iVar5 + -1;
      uVar1 = uVar2;
    } while (iVar5 != 0);
  }
  return uVar2 - uVar6;
}

