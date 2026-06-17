
void __cdecl FUN_36201b60(byte *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = param_2;
  do {
    if (param_1[iVar2] == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)param_1[iVar2] << 0x18 | 0xffffff;
    }
    *puVar3 = uVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 2);
  if (param_1[1] < *param_1) {
    iVar4 = 0;
    iVar2 = 6;
    puVar3 = param_2 + 2;
    do {
      iVar4 = iVar4 + 1;
      uVar1 = ((int)((uint)*param_1 * iVar2 + 3 + (uint)param_1[1] * iVar4) / 7) * 0x1000000;
      *puVar3 = uVar1;
      if (uVar1 != 0) {
        *puVar3 = uVar1 | 0xffffff;
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
    return;
  }
  iVar2 = 0;
  iVar4 = 4;
  puVar3 = param_2 + 2;
  do {
    iVar2 = iVar2 + 1;
    uVar1 = ((int)((uint)param_1[1] * iVar2 + 2 + (uint)*param_1 * iVar4) / 5) * 0x1000000;
    *puVar3 = uVar1;
    if (uVar1 != 0) {
      *puVar3 = uVar1 | 0xffffff;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  param_2[6] = 0;
  param_2[7] = 0xffffffff;
  return;
}

