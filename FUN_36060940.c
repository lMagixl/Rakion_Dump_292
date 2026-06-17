
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36060940(undefined *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = _DAT_36227d98;
  local_10 = _DAT_36227d98;
  iVar2 = 0;
  if (0 < param_2 + 5) {
    do {
      fVar3 = (float10)(*(code *)param_1)();
      if (4 < iVar2) {
        local_18 = (double)((float10)local_18 + fVar3);
        local_10 = (double)(fVar3 * fVar3 + (float10)local_10);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2 + 5);
  }
  _DAT_362bf868 = local_18 / (double)param_2;
  dVar1 = ((double)param_2 * _DAT_362bf868 * _DAT_362bf868 +
          (local_10 - (_DAT_362bf868 * local_18 + _DAT_362bf868 * local_18))) /
          (double)(param_2 + -1);
  if (dVar1 < (double)_DAT_3622376c) {
    dVar1 = (double)_DAT_3622376c;
  }
  _DAT_362bf860 = SQRT(dVar1);
  return;
}

