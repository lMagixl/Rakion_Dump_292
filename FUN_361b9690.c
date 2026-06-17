
void __cdecl FUN_361b9690(char *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  DAT_362abd34 = DAT_362abd34 + 1;
  pcVar1 = StringDuplicate(param_2);
  iVar2 = DAT_362abd34;
  (&DAT_36382d68)[DAT_362abd34 * 5] = pcVar1;
  pcVar1 = StringDuplicate(param_1);
  (&DAT_36382d64)[iVar2 * 5] = pcVar1;
  (&DAT_36382d6c)[iVar2 * 5] = 1;
  (&DAT_36382d70)[iVar2 * 5] = param_3;
  iVar2 = FUN_361b9660(param_2);
  (&DAT_36382d60)[DAT_362abd34 * 5] = iVar2;
  FUN_361b93e0(iVar2);
  return;
}

