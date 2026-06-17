
void FUN_3620c8a0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      if (*param_1 != 1) {
        return;
      }
      FUN_3620c8a0((int *)param_1[3]);
      FUN_3620c8a0((int *)param_1[4]);
    }
    free(param_1);
  }
  return;
}

