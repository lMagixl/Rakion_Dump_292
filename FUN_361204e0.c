
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_361204e0(void *this,float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  
  fVar2 = param_1[0x3e];
  param_1[0x3e] = (float)((int)fVar2 + 1);
  if ((float)((int)fVar2 + 1) != 1.4013e-45) {
    return false;
  }
  fVar2 = *(float *)((int)this + 0xe60);
  piVar6 = *(int **)((int)this + 0xfd4);
  fVar5 = (float)*(int *)((int)this + 0xe64) * _DAT_3623019c + _DAT_36223384;
  fVar3 = (fVar5 * param_1[1] + fVar2 * param_1[2] + *param_1) * *(float *)((int)this + 0x6bc);
  fVar4 = ((fVar3 - (float)piVar6[-0x3c]) - fVar5 * (float)piVar6[-0x3b]) -
          fVar2 * (float)piVar6[-0x3a];
  if (*(int *)((int)this + 0x694) == (int)this + 0x348) {
    while ((int)fVar4 < 0) {
      piVar6 = (int *)*piVar6;
      fVar4 = ((fVar3 - (float)piVar6[-0x3c]) - fVar5 * (float)piVar6[-0x3b]) -
              fVar2 * (float)piVar6[-0x3a];
    }
  }
  else if (fVar4 < _DAT_3622376c) {
    do {
      if (piVar6 + -0x3c == (int *)((int)this + 0xeac)) break;
      piVar6 = (int *)*piVar6;
    } while (((fVar3 - (float)piVar6[-0x3c]) - fVar5 * (float)piVar6[-0x3b]) -
             fVar2 * (float)piVar6[-0x3a] < _DAT_3622376c);
  }
  pfVar1 = param_1 + 0x3c;
  *(float **)piVar6[1] = pfVar1;
  param_1[0x3d] = (float)piVar6[1];
  *pfVar1 = (float)piVar6;
  piVar6[1] = (int)pfVar1;
  return *(int *)((int)param_1[0x3d] + 4) == 0;
}

