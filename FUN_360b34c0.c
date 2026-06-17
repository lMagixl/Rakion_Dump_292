
void __thiscall FUN_360b34c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float local_c;
  int local_8;
  
  *param_1 = 0;
  *param_2 = 0;
  local_c = -999999.9;
  local_8 = 0;
  iVar3 = FUN_360b3d10((int)this + 0x14);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined4 *)FUN_360b3aa0((void *)((int)this + 0x14),local_8);
      piVar6 = (int *)*puVar4;
      do {
        pfVar1 = *(float **)(*piVar6 + 8);
        pfVar2 = (float *)piVar6[2];
        fVar7 = FUN_360b33a0((int)this,pfVar2,pfVar1);
        if ((float10)local_c < fVar7) {
          local_c = (float)fVar7;
          *param_1 = pfVar2;
          *param_2 = pfVar1;
        }
        pfVar1 = (float *)piVar6[2];
        pfVar2 = *(float **)(*piVar6 + 8);
        fVar7 = FUN_360b33a0((int)this,pfVar2,pfVar1);
        if ((float10)local_c < fVar7) {
          local_c = (float)fVar7;
          *param_1 = pfVar2;
          *param_2 = pfVar1;
        }
        piVar6 = (int *)*piVar6;
        piVar5 = (int *)FUN_360b3aa0((void *)((int)this + 0x14),local_8);
      } while (piVar6 != (int *)*piVar5);
      local_8 = local_8 + 1;
      iVar3 = FUN_360b3d10((int)this + 0x14);
    } while (local_8 < iVar3);
  }
  return;
}

