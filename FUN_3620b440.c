
void __thiscall FUN_3620b440(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      iVar1 = 0;
      if (0 < param_1[1]) {
        do {
          FUN_3620b4e0(this,*(void **)(param_1[4] + iVar1 * 4));
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[1]);
      }
      free((void *)param_1[4]);
      free((void *)param_1[2]);
      free((void *)param_1[3]);
      free(param_1);
      iVar1 = *(int *)((int)this + 0x10) + -1;
      *(int *)((int)this + 0x10) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)((int)this + 0x10) = 0;
      }
    }
    else if (*param_1 == 1) {
      FUN_3620b440(this,(int *)param_1[3]);
      FUN_3620b440(this,(int *)param_1[4]);
      free(param_1);
      return;
    }
  }
  return;
}

