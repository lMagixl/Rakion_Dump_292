
void __thiscall FUN_361e67dc(void *this,int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  void *local_4;
  
  piVar3 = param_1;
  puVar1 = (uint *)(param_1 + 0x35);
  *puVar1 = *puVar1 + 1;
  if ((uint)param_1[0x30] <= *puVar1) {
    local_4 = this;
    if (*(char *)((int)param_1 + 0x113) != '\0') {
      *puVar1 = 0;
      FUN_361e56b4(param_1,(undefined4 *)param_1[0x36],0,param_1[0x32] + 1);
      do {
        *(char *)(piVar3 + 0x45) = (char)piVar3[0x45] + '\x01';
        bVar2 = *(byte *)(piVar3 + 0x45);
        if (6 < bVar2) goto LAB_361e68a9;
        iVar7 = (uint)bVar2 * 4;
        uVar4 = ((piVar3[0x2e] - *(int *)(&DAT_3624bb94 + iVar7)) + -1 +
                *(uint *)(&DAT_3624bbb0 + iVar7)) / *(uint *)(&DAT_3624bbb0 + iVar7);
        piVar3[0x34] = uVar4;
        piVar3[0x33] = (*(byte *)((int)piVar3 + 0x119) * uVar4 + 7 >> 3) + 1;
      } while (((*(byte *)(piVar3 + 0x18) & 2) == 0) &&
              (piVar3[0x30] = ((piVar3[0x2f] - *(int *)(&DAT_3624bbcc + iVar7)) + -1 +
                              *(uint *)(&DAT_3624bbe8 + iVar7)) / *(uint *)(&DAT_3624bbe8 + iVar7),
              piVar3[0x34] == 0));
      if (bVar2 < 7) {
        return;
      }
    }
LAB_361e68a9:
    if ((*(byte *)(piVar3 + 0x17) & 0x20) == 0) {
      piVar3[0x1c] = (int)&param_1;
      piVar3[0x1d] = 1;
      while( true ) {
        if (piVar3[0x1a] == 0) {
          if (piVar3[0x3f] == 0) {
            do {
              FUN_361e5feb(piVar3,0);
              FUN_361e109c(piVar3,&local_4,4);
              iVar7 = FUN_361e56e5((undefined1 *)&local_4);
              piVar3[0x3f] = iVar7;
              FUN_361e11ee((int)piVar3);
              FUN_361e571b(piVar3,(byte *)(piVar3 + 0x43),4);
              if (piVar3[0x43] != DAT_3624bc04) {
                FUN_361de341(piVar3,s_Not_enough_image_data_3624b348);
              }
            } while (piVar3[0x3f] == 0);
          }
          piVar3[0x1a] = piVar3[0x28];
          piVar3[0x19] = piVar3[0x27];
          if ((uint)piVar3[0x3f] < (uint)piVar3[0x28]) {
            piVar3[0x1a] = piVar3[0x3f];
          }
          FUN_361e571b(piVar3,(byte *)piVar3[0x27],piVar3[0x1a]);
          piVar3[0x3f] = piVar3[0x3f] - piVar3[0x1a];
        }
        pbVar5 = FUN_361e5143(piVar3 + 0x19,1);
        if (pbVar5 == (byte *)0x1) break;
        if (pbVar5 != (byte *)0x0) {
          pcVar6 = (char *)piVar3[0x1f];
          if (pcVar6 == (char *)0x0) {
            pcVar6 = s_Decompression_Error_3624c080;
          }
          FUN_361de341(piVar3,pcVar6);
        }
        if (piVar3[0x1d] == 0) {
          FUN_361de341(piVar3,s_Extra_compressed_data_3624b31c);
        }
      }
      if (((piVar3[0x1d] == 0) || (piVar3[0x1a] != 0)) || (piVar3[0x3f] != 0)) {
        FUN_361de341(piVar3,s_Extra_compressed_data_3624b31c);
      }
      piVar3[0x16] = piVar3[0x16] | 8;
      piVar3[0x17] = piVar3[0x17] | 0x20;
      piVar3[0x1d] = 0;
    }
    if ((piVar3[0x3f] != 0) || (piVar3[0x1a] != 0)) {
      FUN_361de341(piVar3,s_Extra_compression_data_3624c068);
    }
    FUN_361e4fca((int)(piVar3 + 0x19));
    piVar3[0x16] = piVar3[0x16] | 8;
  }
  return;
}

