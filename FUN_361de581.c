
void __cdecl FUN_361de581(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint unaff_EBP;
  uint uVar5;
  char *pcVar6;
  
  piVar2 = param_1;
  if (*(byte *)(param_1 + 0x47) < 8) {
    uVar4 = (uint)*(byte *)(param_1 + 0x47);
    uVar5 = -uVar4 + 8;
    FUN_361e109c(param_1,uVar4 + 0x20 + (int)param_2,uVar5);
    *(undefined1 *)(piVar2 + 0x47) = 8;
    iVar3 = FUN_361e1136((int)(param_2 + 8),uVar4,uVar5);
    if (iVar3 != 0) {
      if ((uVar4 < 4) && (iVar3 = FUN_361e1136((int)(param_2 + 8),uVar4,-uVar4 + 4), iVar3 != 0)) {
        pcVar6 = s_Not_a_PNG_file_3624b30c;
      }
      else {
        pcVar6 = s_PNG_file_corrupted_by_ASCII_conv_3624b2e4;
      }
      FUN_361de341(piVar2,pcVar6);
    }
  }
  pbVar1 = (byte *)(piVar2 + 0x43);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_361e109c(piVar2,&param_1,4);
          uVar4 = FUN_361e56e5((undefined1 *)&param_1);
          FUN_361e11ee((int)piVar2);
          FUN_361e571b(piVar2,pbVar1,4);
          if (*(int *)pbVar1 != DAT_3624b1dc) break;
          FUN_361e6077(piVar2,param_2,uVar4);
        }
        if (*(void **)pbVar1 != DAT_3624b1f4) break;
        FUN_361e626d(*(void **)pbVar1,piVar2,(int)param_2,uVar4);
      }
      if (*(int *)pbVar1 != DAT_3624b1ec) break;
      FUN_361e6397(piVar2,param_2,uVar4,unaff_EBX,unaff_EBP);
    }
    if (*(int *)pbVar1 == DAT_3624b1e4) break;
    if (*(int *)pbVar1 == DAT_3624b1fc) {
      FUN_361e63e1(piVar2,(int)param_2,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_3624b204) {
      FUN_361e64ec(piVar2,(int)param_2,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_3624b20c) {
      FUN_361e65db(piVar2,(int)param_2,uVar4);
    }
    else {
      FUN_361e6792(piVar2,(int)param_2,uVar4);
    }
  }
  if ((piVar2[0x16] & 1U) == 0) {
    pcVar6 = s_Missing_IHDR_before_IDAT_3624b2c8;
  }
  else {
    if ((*(char *)((int)piVar2 + 0x116) != '\x03') || ((piVar2[0x16] & 2U) != 0)) goto LAB_361de6e5;
    pcVar6 = s_Missing_PLTE_before_IDAT_3624b2ac;
  }
  FUN_361de341(piVar2,pcVar6);
LAB_361de6e5:
  piVar2[0x16] = piVar2[0x16] | 4;
  piVar2[0x3f] = uVar4;
  return;
}

