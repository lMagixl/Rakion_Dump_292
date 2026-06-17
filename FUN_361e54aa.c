
undefined4 __cdecl FUN_361e54aa(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0) || (*(int **)(param_1 + 0x1c) == (int *)0x0)) ||
     (**(int **)(param_1 + 0x1c) != 6)) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar1 = FUN_361f6ddf(1,param_2,param_3);
    if (uVar1 == *(uint *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar1 = 1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f);
      if (uVar1 <= param_3) {
        uVar1 = uVar1 - 1;
        param_2 = param_2 + (param_3 - uVar1);
        param_3 = uVar1;
      }
      FUN_361f6da1(*(int *)(*(int *)(param_1 + 0x1c) + 0x14),(undefined4 *)param_2,param_3);
      **(undefined4 **)(param_1 + 0x1c) = 7;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}

