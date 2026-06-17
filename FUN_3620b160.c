
void __thiscall
FUN_3620b160(void *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  puVar2 = FUN_3620af00(this,param_2,param_3,param_4);
  *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar1 * 4) = puVar2;
  if (iVar1 == 0) {
    FUN_3620b1c0(this,param_1);
    return;
  }
  FUN_3620b250(this,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_4);
  return;
}

