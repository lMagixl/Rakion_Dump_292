
undefined4 __cdecl FUN_361b4f60(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 6) {
    *(int *)(&DAT_363827f0 + DAT_36382bf4) = param_1[1];
    DAT_36382bf4 = DAT_36382bf4 + 4;
    return 4;
  }
  if (iVar1 == 5) {
    *(int *)(&DAT_363827f0 + DAT_36382bf4) = param_1[2];
    DAT_36382bf4 = DAT_36382bf4 + 4;
    return 4;
  }
  if (iVar1 == 7) {
    puVar2 = (undefined4 *)FUN_361b6cb0(&DAT_362bec18);
    pcVar3 = StringDuplicate((char *)param_1[3]);
    StringFree((char *)*puVar2);
    *puVar2 = pcVar3;
    *(undefined4 **)(&DAT_363827f0 + DAT_36382bf4) = puVar2;
    DAT_36382bf4 = DAT_36382bf4 + 4;
    return 4;
  }
  return 0;
}

