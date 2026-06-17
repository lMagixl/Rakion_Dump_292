
void __cdecl FUN_361e65db(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  ushort local_8;
  
  if ((param_1[0x16] & 1U) == 0) {
    FUN_361de341(param_1,s_Missing_IHDR_before_tRNS_3624c034);
  }
  else {
    if ((param_1[0x16] & 4U) != 0) {
      pcVar4 = s_Invalid_tRNS_after_IDAT_3624bfe8;
LAB_361e6650:
      FUN_361de35f((int)param_1,pcVar4);
      FUN_361e5feb(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
      pcVar4 = s_Duplicate_tRNS_chunk_3624bfd0;
      goto LAB_361e6650;
    }
  }
  cVar1 = *(char *)((int)param_1 + 0x116);
  if (cVar1 == '\x03') {
    if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
      FUN_361de35f((int)param_1,s_Missing_PLTE_before_tRNS_3624c018);
LAB_361e6621:
      if (param_3 != 0) {
        pbVar2 = FUN_361e5642(param_1,param_3);
        *(byte *)((int)param_1 + 0x5d) = *(byte *)((int)param_1 + 0x5d) | 0x20;
        param_1[0x57] = (int)pbVar2;
        FUN_361e571b(param_1,pbVar2,param_3);
        *(short *)((int)param_1 + 0x10a) = (short)param_3;
        goto LAB_361e6747;
      }
      FUN_361de35f((int)param_1,s_Zero_length_tRNS_chunk_3624c000);
    }
    else {
      if (param_3 <= *(ushort *)(param_1 + 0x42)) goto LAB_361e6621;
      FUN_361de35f((int)param_1,s_Incorrect_tRNS_chunk_length_3624bfb4);
    }
LAB_361e6784:
    FUN_361e5feb(param_1,param_3);
  }
  else {
    if (cVar1 == '\x02') {
      if (param_3 != 6) {
LAB_361e6712:
        pcVar4 = s_Incorrect_tRNS_chunk_length_3624bfb4;
LAB_361e677b:
        FUN_361de35f((int)param_1,pcVar4);
        goto LAB_361e6784;
      }
      FUN_361e571b(param_1,(byte *)&local_c,6);
      *(short *)((int)param_1 + 0x162) = (short)((local_c & 0xff) * 0x100 + (local_c >> 8 & 0xff));
      *(ushort *)(param_1 + 0x59) = (ushort)local_c._2_1_ * 0x100 + (ushort)local_c._3_1_;
      *(ushort *)((int)param_1 + 0x166) = local_8 * 0x100 + (local_8 >> 8);
    }
    else {
      if (cVar1 != '\0') {
        pcVar4 = s_tRNS_chunk_not_allowed_with_alph_3624bf88;
        goto LAB_361e677b;
      }
      if (param_3 != 2) goto LAB_361e6712;
      FUN_361e571b(param_1,(byte *)&local_c,2);
      *(ushort *)(param_1 + 0x5a) = (ushort)local_c * 0x100 + ((ushort)local_c >> 8);
    }
    *(undefined2 *)((int)param_1 + 0x10a) = 1;
LAB_361e6747:
    iVar3 = FUN_361e5feb(param_1,0);
    if (iVar3 == 0) {
      FUN_361e1042((int)param_1,param_2,param_1[0x57],(uint)*(ushort *)((int)param_1 + 0x10a),
                   param_1 + 0x58);
    }
  }
  return;
}

