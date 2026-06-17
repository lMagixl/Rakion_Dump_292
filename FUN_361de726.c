
void __thiscall FUN_361de726(void *this,int *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *this_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  bool bVar8;
  uint uVar9;
  
  piVar4 = param_1;
  if ((*(byte *)(param_1 + 0x17) & 0x40) == 0) {
    this = param_1;
    FUN_361e5e4f(param_1);
  }
  if ((*(char *)((int)piVar4 + 0x113) != '\0') && ((*(byte *)(piVar4 + 0x18) & 2) != 0)) {
    cVar2 = (char)piVar4[0x45];
    if (cVar2 == '\0') {
      if ((*(byte *)(piVar4 + 0x35) & 7) != 0) {
        bVar8 = param_3 == (byte *)0x0;
LAB_361de838:
        if (bVar8) goto LAB_361de78e;
        uVar9 = 0xff;
LAB_361de843:
        FUN_361e57f5((int)piVar4,param_3,uVar9);
        this = extraout_ECX;
LAB_361de78e:
        FUN_361e67dc(this,piVar4);
        return;
      }
    }
    else if (cVar2 == '\x01') {
      if (((*(byte *)(piVar4 + 0x35) & 7) != 0) || ((uint)piVar4[0x2e] < 5)) {
        if (param_3 == (byte *)0x0) goto LAB_361de78e;
        uVar9 = 0xf;
        goto LAB_361de843;
      }
    }
    else if (cVar2 == '\x02') {
      this = (void *)(piVar4[0x35] & 0xffffff07);
      if ((char)this != '\x04') {
        if (param_3 == (byte *)0x0) goto LAB_361de78e;
        bVar8 = (piVar4[0x35] & 4U) == 0;
        goto LAB_361de838;
      }
    }
    else if (cVar2 == '\x03') {
      if (((*(byte *)(piVar4 + 0x35) & 3) != 0) || ((uint)piVar4[0x2e] < 3)) {
        if (param_3 == (byte *)0x0) goto LAB_361de78e;
        uVar9 = 0x33;
        goto LAB_361de843;
      }
    }
    else if (cVar2 == '\x04') {
      this = (void *)(piVar4[0x35] & 0xffffff03);
      if ((char)this != '\x02') {
        if (param_3 == (byte *)0x0) goto LAB_361de78e;
        bVar8 = (piVar4[0x35] & 2U) == 0;
        goto LAB_361de838;
      }
    }
    else if (cVar2 == '\x05') {
      if (((*(byte *)(piVar4 + 0x35) & 1) != 0) || ((uint)piVar4[0x2e] < 2)) {
        if (param_3 == (byte *)0x0) goto LAB_361de78e;
        uVar9 = 0x55;
        goto LAB_361de843;
      }
    }
    else if ((cVar2 == '\x06') && ((*(byte *)(piVar4 + 0x35) & 1) == 0)) goto LAB_361de78e;
  }
  if ((*(byte *)(piVar4 + 0x16) & 4) == 0) {
    FUN_361de341(piVar4,s_Invalid_attempt_to_read_row_data_3624b360);
  }
  piVar4[0x1c] = piVar4[0x37];
  piVar4[0x1d] = piVar4[0x33];
  do {
    if (piVar4[0x1a] == 0) {
      if (piVar4[0x3f] == 0) {
        do {
          FUN_361e5feb(piVar4,0);
          FUN_361e109c(piVar4,&param_1,4);
          iVar5 = FUN_361e56e5((undefined1 *)&param_1);
          piVar4[0x3f] = iVar5;
          FUN_361e11ee((int)piVar4);
          FUN_361e571b(piVar4,(byte *)(piVar4 + 0x43),4);
          if (piVar4[0x43] != DAT_3624b1e4) {
            FUN_361de341(piVar4,s_Not_enough_image_data_3624b348);
          }
        } while (piVar4[0x3f] == 0);
      }
      piVar4[0x1a] = piVar4[0x28];
      piVar4[0x19] = piVar4[0x27];
      if ((uint)piVar4[0x3f] < (uint)piVar4[0x28]) {
        piVar4[0x1a] = piVar4[0x3f];
      }
      FUN_361e571b(piVar4,(byte *)piVar4[0x27],piVar4[0x1a]);
      piVar4[0x3f] = piVar4[0x3f] - piVar4[0x1a];
    }
    pbVar6 = FUN_361e5143(piVar4 + 0x19,1);
    if (pbVar6 == (byte *)0x1) {
      if (((piVar4[0x1d] != 0) || (piVar4[0x1a] != 0)) || (piVar4[0x3f] != 0)) {
        FUN_361de341(piVar4,s_Extra_compressed_data_3624b31c);
      }
      piVar4[0x16] = piVar4[0x16] | 8;
      piVar4[0x17] = piVar4[0x17] | 0x20;
      break;
    }
    if (pbVar6 != (byte *)0x0) {
      pcVar7 = (char *)piVar4[0x1f];
      if (pcVar7 == (char *)0x0) {
        pcVar7 = s_Decompression_error_3624b334;
      }
      FUN_361de341(piVar4,pcVar7);
    }
  } while (piVar4[0x1d] != 0);
  *(undefined1 *)((int)piVar4 + 0xfa) = *(undefined1 *)((int)piVar4 + 0x11a);
  *(undefined1 *)((int)piVar4 + 0xf9) = *(undefined1 *)((int)piVar4 + 0x117);
  *(byte *)((int)piVar4 + 0xfb) = *(byte *)((int)piVar4 + 0x119);
  *(undefined1 *)(piVar4 + 0x3e) = *(undefined1 *)((int)piVar4 + 0x116);
  puVar1 = (uint *)(piVar4 + 0x3c);
  *puVar1 = piVar4[0x34];
  piVar4[0x3d] = (uint)*(byte *)((int)piVar4 + 0x119) * piVar4[0x34] + 7 >> 3;
  FUN_361e5cd4((int)piVar4,(int)puVar1,(byte *)piVar4[0x37] + 1,(byte *)(piVar4[0x36] + 1),
               (uint)*(byte *)piVar4[0x37]);
  FUN_361e5691(piVar4,(undefined4 *)piVar4[0x36],(undefined4 *)piVar4[0x37],piVar4[0x32] + 1);
  this_00 = extraout_ECX_00;
  if (piVar4[0x18] != 0) {
    this_00 = piVar4;
    FUN_361e0d56(piVar4);
  }
  if ((*(char *)((int)piVar4 + 0x113) == '\0') || ((piVar4[0x18] & 2U) == 0)) {
    if (param_2 != (byte *)0x0) {
      FUN_361e57f5((int)piVar4,param_2,0xff);
      this_00 = extraout_ECX_03;
    }
    if (param_3 == (byte *)0x0) goto LAB_361deaa3;
    uVar9 = 0xff;
    pbVar6 = param_3;
  }
  else {
    bVar3 = *(byte *)(piVar4 + 0x45);
    this_00 = (int *)CONCAT31((int3)((uint)this_00 >> 8),bVar3);
    if (bVar3 < 6) {
      FUN_361e5a0b(puVar1,(int *)(piVar4[0x37] + 1),(uint)bVar3);
      this_00 = extraout_ECX_01;
    }
    if (param_3 != (byte *)0x0) {
      FUN_361e57f5((int)piVar4,param_3,*(uint *)(&DAT_3624b1c0 + (uint)*(byte *)(piVar4 + 0x45) * 4)
                  );
      this_00 = extraout_ECX_02;
    }
    if (param_2 == (byte *)0x0) goto LAB_361deaa3;
    uVar9 = *(uint *)(&DAT_3624b1a4 + (uint)*(byte *)(piVar4 + 0x45) * 4);
    pbVar6 = param_2;
  }
  FUN_361e57f5((int)piVar4,pbVar6,uVar9);
  this_00 = extraout_ECX_04;
LAB_361deaa3:
  FUN_361e67dc(this_00,piVar4);
  if ((code *)piVar4[0x5b] != (code *)0x0) {
    (*(code *)piVar4[0x5b])(piVar4,piVar4[0x35],(char)piVar4[0x45]);
  }
  return;
}

