
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360554a0(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_c;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((int)param_2 + 4);
  local_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((int)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((int)param_2 + 0x14);
  local_58 = *param_1;
  local_50 = param_1[1];
  local_48 = param_1[2];
  local_c = 0;
  local_34 = 0;
  iVar5 = FUN_36054ae0(&local_58,(double *)&local_30);
  if (iVar5 < 0) {
    *(undefined4 *)((int)this + 0x38) = 1;
    pdVar6 = param_1;
  }
  else {
    *(undefined4 *)((int)this + 0x38) = 0;
    pdVar6 = param_2;
    param_2 = param_1;
  }
  local_70 = *pdVar6 - *param_2;
  local_68 = pdVar6[1] - param_2[1];
  local_60 = pdVar6[2] - param_2[2];
  dVar1 = SQRT(local_70 * local_70 + local_68 * local_68 + local_60 * local_60);
  dVar2 = _DAT_36227d98;
  if (_DAT_36223438 <= dVar1) {
    dVar2 = _DAT_36227d28 / dVar1;
  }
  local_60 = local_60 * dVar2;
  local_68 = local_68 * dVar2;
  local_70 = local_70 * dVar2;
  pdVar6 = (double *)((int)this + 8);
  *pdVar6 = local_70;
  *(double *)((int)this + 0x10) = local_68;
  *(double *)((int)this + 0x18) = local_60;
  dVar1 = *param_2 * *pdVar6 +
          *(double *)((int)this + 0x10) * param_2[1] + *(double *)((int)this + 0x18) * param_2[2];
  dVar2 = _DAT_36227d28 /
          (*pdVar6 * *pdVar6 +
          *(double *)((int)this + 0x10) * *(double *)((int)this + 0x10) +
          *(double *)((int)this + 0x18) * *(double *)((int)this + 0x18));
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  *(double *)((int)this + 0x20) = *param_2 - local_70 * dVar1 * dVar2;
  *(double *)((int)this + 0x28) = dVar3 - local_68 * dVar1 * dVar2;
  *(double *)((int)this + 0x30) = dVar4 - local_60 * dVar1 * dVar2;
  return;
}

