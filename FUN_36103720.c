
void __fastcall FUN_36103720(int *param_1)

{
  if (*param_1 != 0) {
    FreeMemory((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

