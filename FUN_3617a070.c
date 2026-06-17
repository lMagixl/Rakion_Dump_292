
void __cdecl FUN_3617a070(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_2 * 0x94 + *(int *)(*(int *)(param_1 + 0x2c) + 0x10c));
  puVar2 = AllocMemory(param_3 * param_4);
  FUN_361795b0(puVar2,param_3,param_4,*(int *)(iVar1 + 0x30),param_5,param_6,0xff);
  if (*(void **)(iVar1 + 0x30) != (void *)0x0) {
    FreeMemory(*(void **)(iVar1 + 0x30));
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  *(undefined4 **)(iVar1 + 0x30) = puVar2;
  FUN_361733b0(param_1,param_2,0);
  return;
}

