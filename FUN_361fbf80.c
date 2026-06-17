
uint __cdecl FUN_361fbf80(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && ((param_1 == 1 || ((param_1 & param_1 - 1) == 0)))) {
    return param_1;
  }
  iVar2 = 0;
  piVar1 = &DAT_362af968;
  while (((int)param_1 <= piVar1[-1] || (*piVar1 <= (int)param_1))) {
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
    if (s_Image_has_MIP_maps__Display_them_362af99c + 3 < piVar1) {
      return 0xffffffff;
    }
  }
  if ((int)(param_1 - (&DAT_362af964)[iVar2]) < (int)((&DAT_362af968)[iVar2] - param_1)) {
    return (&DAT_362af964)[iVar2];
  }
  return (&DAT_362af968)[iVar2];
}

