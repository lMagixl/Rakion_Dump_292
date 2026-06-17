
void __cdecl FUN_36047780(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  iVar1 = FUN_36047ca0(0x362bf41c);
  if (iVar1 - DAT_362bf430 < 1) {
    FUN_36048750(&DAT_362bf41c,DAT_362bf434);
  }
  iVar1 = DAT_362bf430;
  DAT_362bf430 = DAT_362bf430 + 1;
  puVar2 = (undefined4 *)FUN_36047e70(&DAT_362bf41c,iVar1);
  pcVar3 = StringDuplicate((char *)*param_1);
  StringFree((char *)*puVar2);
  *puVar2 = pcVar3;
  puVar2[1] = param_1[1];
  return;
}

