
undefined4 FUN_361c927c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0x80004005;
  }
  else {
    (**(code **)(**(int **)(param_1 + 8) + 0xd8))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

