
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361e63e1(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar4 = param_2;
  piVar3 = param_1;
  uVar1 = param_1[0x16];
  if ((uVar1 & 1) == 0) {
    FUN_361de341(param_1,s_Missing_IHDR_before_gAMA_3624bed4);
  }
  else {
    if ((uVar1 & 4) != 0) {
      pcVar6 = s_Invalid_gAMA_after_IDAT_3624bea0;
      goto LAB_361e6412;
    }
    if ((uVar1 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        pcVar6 = s__Duplicate_gAMA_chunk_3624be6f + 1;
        goto LAB_361e6412;
      }
    }
    else {
      FUN_361de35f((int)param_1,s_Out_of_place_gAMA_chunk_3624be88);
    }
  }
  if (param_3 == 4) {
    FUN_361e571b(piVar3,(byte *)&param_1,4);
    iVar5 = FUN_361e5feb(piVar3,0);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = FUN_361e56e5((undefined1 *)&param_1);
    if (iVar5 == 0) {
      return;
    }
    if ((*(uint *)(iVar4 + 8) & 0x800) != 0) {
      fVar2 = (float)iVar5;
      if (iVar5 < 0) {
        fVar2 = fVar2 + _DAT_362265a8;
      }
      if ((float)_DAT_3624be60 < ABS(fVar2 - (float)_DAT_3624be68)) {
        FUN_361de35f((int)piVar3,s_Ignoring_incorrect_gAMA_value_wh_3624be24);
        return;
      }
    }
    fVar2 = (float)iVar5;
    if (iVar5 < 0) {
      fVar2 = fVar2 + _DAT_362265a8;
    }
    fVar2 = fVar2 * _DAT_3623281c;
    piVar3[0x4c] = (int)fVar2;
    FUN_361e0f0e((int)piVar3,iVar4,(double)fVar2);
    return;
  }
  pcVar6 = s_Incorrect_gAMA_chunk_length_3624beb8;
LAB_361e6412:
  FUN_361de35f((int)piVar3,pcVar6);
  FUN_361e5feb(piVar3,param_3);
  return;
}

