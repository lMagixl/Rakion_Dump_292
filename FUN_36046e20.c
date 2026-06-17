
void __cdecl FUN_36046e20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (((-1 < param_1) && (iVar1 = FUN_36047be0(0x362bf40c), param_1 < iVar1)) &&
     (piVar2 = (int *)(param_1 * 100 + DAT_362bf410), *piVar2 != 0)) {
    if (param_2 < piVar2[5]) {
      iVar1 = piVar2[5] - param_2;
      if (iVar1 < param_3) {
        param_3 = iVar1;
      }
      DAT_362befa4 = DAT_362befa4 + param_3;
      if (((*(byte *)(piVar2 + 8) & 1) != 0) &&
         (FUN_36046890((void *)piVar2[1],piVar2[6] + param_2,param_3), 2 < DAT_362bef9c)) {
        CPrintF(s_stoAhead___9d_36227cb0,param_3);
      }
    }
  }
  return;
}

