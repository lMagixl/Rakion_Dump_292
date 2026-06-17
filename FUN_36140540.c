
void __fastcall FUN_36140540(int *param_1)

{
  if (*param_1 != 0) {
    FreeMemoryAligned((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

