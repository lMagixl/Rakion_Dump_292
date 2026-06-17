
void __fastcall FUN_360f1ce0(undefined4 *param_1)

{
  char *pcVar1;
  
  *param_1 = 0;
  FUN_360ff140(param_1 + 0x22);
  FUN_360ff140(param_1 + 6);
  FUN_360ff140(param_1 + 0x30);
  FUN_360ff140(param_1 + 0x14);
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  pcVar1 = StringDuplicate(&DAT_36232d0c);
  StringFree((char *)param_1[1]);
  param_1[1] = pcVar1;
  param_1[0x3e] = 0;
  param_1[5] = 0;
  return;
}

