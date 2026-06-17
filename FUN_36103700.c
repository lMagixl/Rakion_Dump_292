
void __fastcall FUN_36103700(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 == 0) {
    *param_1 = 16000;
    pvVar1 = AllocMemory(16000);
    param_1[1] = (int)pvVar1;
  }
  return;
}

