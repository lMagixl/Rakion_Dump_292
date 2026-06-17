
void __thiscall FUN_361e626d(void *this,int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_ESI;
  undefined1 *puVar6;
  char *pcVar7;
  int local_8;
  
  piVar2 = param_1;
  uVar1 = param_1[0x16];
  if ((uVar1 & 1) == 0) {
    pcVar7 = s_Missing_IHDR_before_PLTE_3624bdd8;
LAB_361e6299:
    FUN_361de341(param_1,pcVar7);
LAB_361e62a1:
    piVar2[0x16] = piVar2[0x16] | 2;
    if (param_3 % 3 != 0) {
      pcVar7 = s_Invalid_palette_chunk_3624bd90;
      unaff_ESI = piVar2;
      if (*(char *)((int)piVar2 + 0x116) != '\x03') goto LAB_361e62c1;
      FUN_361de341(piVar2,s_Invalid_palette_chunk_3624bd90);
    }
    iVar4 = (int)param_3 / 3;
    puVar5 = FUN_361e1196(piVar2,iVar4,3);
    *(byte *)((int)piVar2 + 0x5d) = *(byte *)((int)piVar2 + 0x5d) | 0x10;
    if (0 < iVar4) {
      puVar6 = (undefined1 *)((int)puVar5 + 2);
      local_8 = iVar4;
      do {
        FUN_361e571b(piVar2,(byte *)&param_1,3);
        puVar6[-2] = param_1._0_1_;
        puVar6[-1] = param_1._1_1_;
        *puVar6 = param_1._2_1_;
        puVar6 = puVar6 + 3;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    FUN_361e5feb(piVar2,0);
    iVar3 = param_2;
    piVar2[0x41] = (int)puVar5;
    *(short *)(piVar2 + 0x42) = (short)iVar4;
    FUN_361e0fca((int)piVar2,param_2,puVar5,(short)iVar4);
    if ((((*(char *)((int)piVar2 + 0x116) == '\x03') && (iVar3 != 0)) &&
        ((*(byte *)(iVar3 + 8) & 0x10) != 0)) &&
       (*(ushort *)(piVar2 + 0x42) < *(ushort *)((int)piVar2 + 0x10a))) {
      FUN_361de35f((int)piVar2,s_Truncating_incorrect_tRNS_chunk_l_3624bd68);
      *(ushort *)((int)piVar2 + 0x10a) = *(ushort *)(piVar2 + 0x42);
    }
  }
  else {
    pcVar7 = this;
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) != 0) {
        pcVar7 = s_Duplicate_PLTE_chunk_3624bda8;
        goto LAB_361e6299;
      }
      goto LAB_361e62a1;
    }
LAB_361e62c1:
    FUN_361de35f((int)unaff_ESI,pcVar7);
    FUN_361e5feb(piVar2,param_3);
  }
  return;
}

