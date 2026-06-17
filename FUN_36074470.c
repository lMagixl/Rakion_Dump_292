
void FUN_36074470(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_4;
  
  piVar1 = *(int **)(_pGfx + 0xa5c);
  uVar2 = DAT_362c3cb4;
  if (DAT_362c3cb8 != DAT_362c3cb4) {
    local_4 = DAT_362c3cb8;
    iVar4 = 0;
    uVar3 = DAT_362c3cb4;
    do {
      if (((uVar3 & 1) == 0) && ((local_4 & 1) != 0)) {
        (**(code **)(*piVar1 + 0x14c))(piVar1,iVar4,0,0);
        uVar2 = DAT_362c3cb4;
      }
      local_4 = local_4 >> 1;
      uVar3 = uVar3 >> 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
  }
  if (((DAT_362c3cb0 != 0) || (DAT_362c3cb8 != uVar2)) && (DAT_362c44e0 == 0)) {
    DAT_362c3ca8 = FUN_36073810(uVar2);
    DAT_362c3cb8 = DAT_362c3cb4;
    return;
  }
  DAT_362c3cb8 = uVar2;
  return;
}

