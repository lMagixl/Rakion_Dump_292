
uint __cdecl FUN_361fc020(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == 0) || ((param_1 != 1 && ((param_1 & param_1 - 1) != 0)))) {
    iVar2 = 0;
    piVar1 = &DAT_362af968;
    do {
      if ((piVar1[-1] < (int)param_1) && ((int)param_1 < *piVar1)) {
        return (&DAT_362af964)[iVar2];
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (piVar1 < s_Image_has_MIP_maps__Display_them_362af99c + 4);
    param_1 = 0xffffffff;
  }
  return param_1;
}

