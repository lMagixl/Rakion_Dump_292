
void __cdecl FUN_3603a1f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 * 0x1c + 0xc + DAT_362bec74);
  iVar2 = param_1 * 0x1c + DAT_362bec74;
  iVar3 = param_2 * 0x1c + DAT_362bec74;
  if (iVar1 == -1) {
    *(int *)(iVar2 + 0x10) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x18) = 0xffffffff;
    *(int *)(iVar2 + 0xc) = param_2;
    return;
  }
  *(int *)(iVar1 * 0x1c + 0x18 + DAT_362bec74) = param_2;
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar3 + 0x18) = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_2;
  return;
}

