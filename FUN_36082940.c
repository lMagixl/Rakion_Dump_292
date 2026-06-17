
uint __cdecl FUN_36082940(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 * 0xd4 + DAT_362c4714 + 200);
  iVar3 = 0;
  for (uVar2 = uVar1 >> 4; uVar2 != 0; uVar2 = uVar2 >> 1) {
    iVar3 = iVar3 + 1;
  }
  *param_2 = iVar3;
  return uVar1 & 0x1f;
}

