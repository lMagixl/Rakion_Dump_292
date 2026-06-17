
void __fastcall FUN_36038230(undefined4 *param_1)

{
  char *pcVar1;
  
  *param_1 = 0xffffffff;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  StringFree((char *)param_1[1]);
  param_1[1] = pcVar1;
  param_1[5] = 0;
  return;
}

