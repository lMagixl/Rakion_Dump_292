
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_36163380(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FieldInfo *this;
  int iVar5;
  int iVar6;
  float local_c;
  int local_8;
  
  this = (FieldInfo *)0x0;
  local_c = 3e+38;
  local_8 = -1;
  if (_pRakionWorldNet != (IScavengerWorldNet *)0x0) {
    this = (FieldInfo *)(**(code **)(*(int *)_pRakionWorldNet + 8))();
  }
  iVar2 = FUN_3600c4f0((undefined4 *)(param_1 + 0x14));
  iVar6 = 0;
  if (iVar2 < 1) {
    return -1;
  }
  iVar4 = 0;
  do {
    iVar5 = *(int *)(param_1 + 0x18) + iVar4;
    if (this == (FieldInfo *)0x0) {
      fVar1 = *(float *)(iVar5 + 0x4c);
    }
    else {
      iVar3 = FieldInfo::IsGamePlaying(this);
      if (iVar3 == 0) {
        fVar1 = *(float *)(iVar5 + 0x4c) * _DAT_36230180;
      }
      else {
        fVar1 = ska_fLODMul * *(float *)(iVar5 + 0x4c);
      }
    }
    if ((param_2 < fVar1) && (fVar1 < local_c)) {
      local_c = fVar1;
      local_8 = iVar6;
    }
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 0x54;
  } while (iVar6 < iVar2);
  return local_8;
}

