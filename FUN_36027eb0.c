
void FUN_36027eb0(int param_1,WPARAM param_2,void *param_3)

{
  FUN_36027d90(param_3);
  CallNextHookEx(DAT_362ba34c,param_1,param_2,(LPARAM)param_3);
  if ((param_2 != 0) && (*(int *)((int)param_3 + 4) == 0x20a)) {
    DAT_362ba354 = DAT_362ba354 + *(short *)((int)param_3 + 10);
  }
  return;
}

