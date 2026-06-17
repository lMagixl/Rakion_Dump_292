
void __cdecl FUN_36037080(char *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  DAT_362a261c = DAT_362a261c + 1;
  pcVar1 = StringDuplicate(param_2);
  iVar2 = DAT_362a261c;
  (&DAT_362be598)[DAT_362a261c * 5] = pcVar1;
  pcVar1 = StringDuplicate(param_1);
  (&DAT_362be594)[iVar2 * 5] = pcVar1;
  (&DAT_362be59c)[iVar2 * 5] = 1;
  (&DAT_362be5a0)[iVar2 * 5] = param_3;
  iVar2 = FUN_361b7640(param_2);
  (&DAT_362be590)[DAT_362a261c * 5] = iVar2;
  FUN_361b7440(iVar2);
  return;
}

