
void __cdecl FUN_360cd910(float *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  int iVar2;
  
  iVar2 = 1;
  fVar1 = ABS(*param_1);
  if (ABS(*param_1) < ABS(param_1[1])) {
    iVar2 = 2;
    fVar1 = ABS(param_1[1]);
  }
  if (fVar1 < ABS(param_1[2])) {
    iVar2 = 3;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      *param_2 = 3;
      *param_3 = 1;
      return;
    }
    if (iVar2 == 3) {
      *param_2 = 1;
      *param_3 = 2;
      return;
    }
  }
  *param_2 = 2;
  *param_3 = 3;
  return;
}

