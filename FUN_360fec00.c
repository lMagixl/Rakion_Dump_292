
uint * __fastcall FUN_360fec00(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[2];
  CListHead::RemHead((CListHead *)(param_1 + 2));
  param_1[5] = param_1[5] + -1;
  if ((*(byte *)(iVar1 + -0x410) & 2) != 0) {
    param_1[6] = param_1[6] + -1;
  }
  *param_1 = *param_1 + (0xc - *(int *)(iVar1 + -0x40c));
  uVar2 = *(uint *)(iVar1 + -0x414);
  if ((uint)param_1[1] < uVar2) {
    param_1[1] = uVar2;
  }
  return (uint *)(iVar1 + -0x414);
}

