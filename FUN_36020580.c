
undefined4 * __cdecl FUN_36020580(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)*param_2;
  while( true ) {
    if ((int *)*piVar2 == (int *)0x0) {
      pcVar1 = StringDuplicate(s_I_OnlyAnim_36223d72 + 0xb);
      *param_1 = pcVar1;
      return param_1;
    }
    if ((uVar3 & 0xffff) == param_3) break;
    uVar3 = uVar3 + 1;
    piVar2 = (int *)*piVar2;
  }
  pcVar1 = StringDuplicate((char *)(piVar2 + -0x41));
  *param_1 = pcVar1;
  return param_1;
}

