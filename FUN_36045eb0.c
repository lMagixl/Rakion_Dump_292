
void __fastcall FUN_36045eb0(undefined4 *param_1)

{
  if ((void *)param_1[2] != (void *)0x0) {
    FreeMemory((void *)param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[9] = 0;
  return;
}

