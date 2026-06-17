
longlong __cdecl FUN_361237b0(int *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_4 + *param_2 * *param_3 + param_3[2] * param_2[2] + param_3[1] * param_2[1];
  local_14 = param_4[1] + param_3[5] * param_2[2] + param_3[4] * param_2[1] + param_3[3] * *param_2;
  local_10 = param_4[2] + param_3[8] * param_2[2] + param_3[7] * param_2[1] + param_3[6] * *param_2;
  local_c = local_18;
  local_8 = local_14;
  local_4 = local_10;
  (**(code **)(*param_1 + 8))(&local_c,&local_18);
  uVar4 = FUN_361bfd6c();
  iVar1 = (int)uVar4;
  uVar4 = FUN_361bfd6c();
  uVar3 = (uint)(uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  if ((((-1 < iVar1) && (iVar1 < DAT_362fcc00)) && (-1 < iVar2)) &&
     (((iVar2 < DAT_362fcbfc && (uVar3 = DAT_362fcc04, DAT_362fcc04 != 0)) &&
      (*(char *)(DAT_362fcc00 * iVar2 + DAT_362fcc04 + iVar1) != '\0')))) {
    return CONCAT44(DAT_362fcc04,1);
  }
  return (ulonglong)uVar3 << 0x20;
}

