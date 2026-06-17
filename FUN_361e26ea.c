
/* WARNING: Removing unreachable block (ram,0x361e2723) */
/* WARNING: Removing unreachable block (ram,0x361e2752) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_361e26ea(float *param_1,uint *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_361e25ac(param_1,(ushort *)(param_2 + 2));
  fVar1 = _DAT_36249ac4;
  if (-1 < iVar2) {
    uVar4 = *param_2;
    iVar2 = 8;
    pfVar3 = param_1 + 3;
    do {
      uVar5 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      *pfVar3 = (float)uVar5 * fVar1;
      pfVar3 = pfVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar4 = param_2[1];
    iVar2 = 8;
    pfVar3 = param_1 + 0x23;
    do {
      uVar5 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      *pfVar3 = (float)uVar5 * fVar1;
      pfVar3 = pfVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0;
  }
  return iVar2;
}

