
void FUN_360986a0(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
  uVar3 = __alldiv(*puVar1,puVar1[1],*(uint *)_pTimer,*(uint *)(_pTimer + 4));
  iVar2 = (int)uVar3 * 1000;
  if (iVar2 == 0) {
    iVar2 = -0x789abcdf;
  }
  DAT_362c9c58 = iVar2 * 0x40003;
  return;
}

