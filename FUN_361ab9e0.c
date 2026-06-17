
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361ab9e0(void *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  float *unaff_EBX;
  float *unaff_EDI;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_361ab250(this,&local_30);
  fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  local_24 = local_28 * fVar2 * in_EAX[1] - local_2c * fVar2 * in_EAX[2];
  local_20 = local_30 * fVar2 * in_EAX[2] - local_28 * fVar2 * *in_EAX;
  local_1c = local_2c * fVar2 * *in_EAX - local_30 * fVar2 * in_EAX[1];
  fVar1 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
  local_30 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    local_30 = _DAT_36223384 / fVar1;
  }
  local_28 = local_1c * local_30;
  local_2c = local_20 * local_30;
  local_30 = local_24 * local_30;
  FUN_361ab300(unaff_EDI,&local_18);
  fVar1 = local_30 * *unaff_EBX + local_2c * unaff_EBX[1] + local_28 * unaff_EBX[2];
  local_30 = local_30 * fVar1;
  local_2c = local_2c * fVar1;
  local_28 = local_28 * fVar1;
  local_24 = local_30;
  local_20 = local_2c;
  local_1c = local_28;
  FUN_361ab610(&local_18,&local_30,param_1,param_2);
  *unaff_EDI = local_18 + local_c;
  unaff_EDI[1] = local_14 + local_8;
  unaff_EDI[2] = local_10 + local_4;
  return;
}

