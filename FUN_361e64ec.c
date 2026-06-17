
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361e64ec(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  
  piVar2 = param_1;
  uVar1 = param_1[0x16];
  if ((uVar1 & 1) == 0) {
    FUN_361de341(param_1,s_Missing_IHDR_before_sRGB_3624bf6c);
  }
  else {
    if ((uVar1 & 4) != 0) {
      pcVar5 = s_Invalid_sRGB_after_IDAT_3624bf38;
      goto LAB_361e6512;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 8) != 0)) {
        pcVar5 = s_Duplicate_sRGB_chunk_3624bf08;
        goto LAB_361e6512;
      }
    }
    else {
      FUN_361de35f((int)param_1,s_Out_of_place_sRGB_chunk_3624bf20);
    }
  }
  if (param_3 == 1) {
    FUN_361e571b(piVar2,(byte *)((int)&param_1 + 3),1);
    iVar4 = FUN_361e5feb(piVar2,0);
    if (iVar4 != 0) {
      return;
    }
    bVar3 = param_1._3_1_;
    if (3 < param_1._3_1_) {
      FUN_361de35f((int)piVar2,s_GUnknown_sRGB_intent_3624bef3 + 1);
      return;
    }
    if (((*(byte *)(param_2 + 8) & 1) != 0) &&
       ((float)_DAT_3624be60 <
        ABS(((float)piVar2[0x4c] * _DAT_3624bef0 + (float)_DAT_36227cd8) - (float)_DAT_3624be68))) {
      FUN_361de35f((int)piVar2,s_Ignoring_incorrect_gAMA_value_wh_3624be24);
    }
    FUN_361e1009((int)piVar2,param_2,bVar3);
    return;
  }
  pcVar5 = s_Incorrect_sRGB_chunk_length_3624bf50;
LAB_361e6512:
  FUN_361de35f((int)piVar2,pcVar5);
  FUN_361e5feb(piVar2,param_3);
  return;
}

