
undefined4 __cdecl FUN_3603a240(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == -1) {
    if (param_2 == -1) {
      return 1;
    }
  }
  else if (param_2 != -1) {
    piVar3 = (int *)(param_1 * 0x1c + DAT_362bec74);
    piVar1 = (int *)(param_2 * 0x1c + DAT_362bec74);
    if (*piVar3 == *piVar1) {
      iVar2 = FUN_3603a240(piVar3[2],piVar1[2]);
      if ((iVar2 != 0) && (piVar3[1] == piVar1[1])) {
        iVar2 = FUN_3603a240(piVar3[3],piVar1[3]);
        if (iVar2 != 0) {
          iVar2 = FUN_3603a240(piVar3[5],piVar1[5]);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return 0;
}

