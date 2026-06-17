
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_SetTexturePart(long,long,long,long) */

void __cdecl Particle_SetTexturePart(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x6ba10  2756  ?Particle_SetTexturePart@@YAXJJJJ@Z */
  iVar1 = (param_3 + 1) * param_1;
  iVar2 = param_1 * param_3;
  iVar4 = (param_4 + 1) * param_2;
  iVar3 = param_2 * param_4;
  iVar5 = iVar1;
  if (iVar2 - iVar1 == 0 || iVar2 < iVar1) {
    iVar5 = iVar2;
  }
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = iVar4;
  if (iVar3 - iVar4 == 0 || iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  DAT_362bf98c = (float)iVar5 * _DAT_362bf9b4;
  DAT_362bf990 = (float)iVar2 * _DAT_362bf9b0;
  DAT_362bf994 = (float)iVar5 * _DAT_362bf9b4;
  DAT_362bf998 = (float)iVar3 * _DAT_362bf9b0;
  DAT_362bf99c = (float)iVar1 * _DAT_362bf9b4;
  DAT_362bf9a0 = (float)iVar3 * _DAT_362bf9b0;
  DAT_362bf9a4 = (float)iVar1 * _DAT_362bf9b4;
  DAT_362bf9a8 = (float)iVar2 * _DAT_362bf9b0;
  return;
}

