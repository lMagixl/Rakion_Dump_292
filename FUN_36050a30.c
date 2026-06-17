
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36050a30(void *this,undefined4 *param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_38 = _DAT_36227d78;
  local_20 = _DAT_36227d80;
  local_30 = _DAT_36227d78;
  local_18 = _DAT_36227d80;
  local_28 = _DAT_36227d78;
  local_10 = _DAT_36227d80;
  pdVar1 = &local_38;
  puVar4 = param_1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pdVar1;
    pdVar1 = (double *)((int)pdVar1 + 4);
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0;
  iVar2 = FUN_3604aa70((int)this);
  if (0 < iVar2) {
    do {
      pdVar1 = (double *)FUN_3604a710(this,iVar3);
      local_38 = *pdVar1;
      local_30 = pdVar1[1];
      local_28 = pdVar1[2];
      local_20 = local_38;
      local_18 = local_30;
      local_10 = local_28;
      FUN_3604adc0(param_1,&local_38);
      iVar3 = iVar3 + 1;
      iVar2 = FUN_3604aa70((int)this);
    } while (iVar3 < iVar2);
  }
  return;
}

