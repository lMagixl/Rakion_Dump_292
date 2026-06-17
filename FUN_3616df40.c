
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3616df40(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int local_c [3];
  
  fVar3 = param_1[4] + *param_1 + param_1[8];
  if ((float)_DAT_36227d98 < fVar3) {
    fVar3 = SQRT(fVar3 + (float)_DAT_36227d28);
    *(float *)this = (float)_DAT_36227cd8 * fVar3;
    fVar3 = (float)_DAT_36227cd8 / fVar3;
    *(float *)((int)this + 4) = (param_1[7] - param_1[5]) * fVar3;
    *(float *)((int)this + 8) = (param_1[2] - param_1[6]) * fVar3;
    *(float *)((int)this + 0xc) = (param_1[3] - param_1[1]) * fVar3;
    return;
  }
  uVar4 = (uint)(*param_1 < param_1[4]);
  if (param_1[uVar4 * 4] < param_1[8]) {
    uVar4 = 2;
  }
  iVar1 = *(int *)(&DAT_362a6bf4 + uVar4 * 4);
  iVar2 = *(int *)(&DAT_362a6bf4 + iVar1 * 4);
  local_c[0] = (int)this + 4;
  local_c[1] = (int)this + 8;
  local_c[2] = (int)this + 0xc;
  fVar3 = SQRT(((param_1[uVar4 * 4] - param_1[iVar1 * 4]) - param_1[iVar2 * 4]) +
               (float)_DAT_36227d28);
  *(float *)local_c[uVar4] = (float)_DAT_36227cd8 * fVar3;
  fVar3 = (float)_DAT_36227cd8 / fVar3;
  *(float *)this = (param_1[iVar2 * 3 + iVar1] - param_1[iVar1 * 3 + iVar2]) * fVar3;
  *(float *)local_c[iVar1] = (param_1[uVar4 * 3 + iVar1] + param_1[iVar1 * 3 + uVar4]) * fVar3;
  *(float *)local_c[iVar2] = (param_1[uVar4 * 3 + iVar2] + param_1[iVar2 * 3 + uVar4]) * fVar3;
  return;
}

