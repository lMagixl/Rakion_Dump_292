
undefined4 FUN_361b9580(void)

{
  undefined4 uVar1;
  
  FUN_361b9430((&DAT_36382d60)[DAT_362abd34 * 5]);
  StringFree((char *)(&DAT_36382d64)[DAT_362abd34 * 5]);
  StringFree((char *)(&DAT_36382d68)[DAT_362abd34 * 5]);
  uVar1 = (&DAT_36382d70)[DAT_362abd34 * 5];
  DAT_362abd34 = DAT_362abd34 + -1;
  if (-1 < DAT_362abd34) {
    FUN_361b93e0((&DAT_36382d60)[DAT_362abd34 * 5]);
  }
  return uVar1;
}

