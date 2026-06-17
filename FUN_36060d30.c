
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_36060d30(void)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined8 local_10;
  
  local_10 = _DAT_36227d98;
  iVar1 = 10;
  do {
    fVar2 = FUN_360609f0();
    fVar3 = FUN_360609f0();
    iVar1 = iVar1 + -1;
    local_10 = (double)(((float10)(double)fVar2 - fVar3) + (float10)local_10);
  } while (iVar1 != 0);
  return (float10)(DAT_362bf87c * DAT_362bf880) / ((float10)local_10 * (float10)_DAT_36228790);
}

