
byte * __cdecl FUN_361e5143(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  
  if (((param_1 == (int *)0x0) || (puVar4 = (undefined4 *)param_1[7], puVar4 == (undefined4 *)0x0))
     || (*param_1 == 0)) {
LAB_361e5380:
    return (byte *)0xfffffffe;
  }
  pbVar3 = (byte *)0xfffffffb;
  pbVar5 = (byte *)0x0;
  if (param_2 == 4) {
    pbVar5 = pbVar3;
  }
LAB_361e5373:
  switch(*puVar4) {
  case 0:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 4) = (uint)*(byte *)*param_1;
    puVar4 = (undefined4 *)param_1[7];
    uVar2 = puVar4[1];
    *param_1 = *param_1 + 1;
    if (((byte)uVar2 & 0xf) == 8) {
      if (((uint)puVar4[1] >> 4) + 8 <= (uint)puVar4[4]) {
        *puVar4 = 1;
        pbVar3 = pbVar5;
        goto switchD_361e5180_caseD_1;
      }
      *puVar4 = 0xd;
      param_1[6] = (int)s_invalid_window_size_3624bb50;
    }
    else {
      *puVar4 = 0xd;
      param_1[6] = (int)s_unknown_compression_method_3624bb64;
    }
    goto LAB_361e5366;
  case 1:
switchD_361e5180_caseD_1:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    puVar4 = (undefined4 *)param_1[7];
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    bVar1 = *(byte *)*param_1;
    *param_1 = (int)((byte *)*param_1 + 1);
    if ((puVar4[1] * 0x100 + (uint)bVar1) % 0x1f != 0) {
      *puVar4 = 0xd;
      param_1[6] = (int)s_incorrect_header_check_3624bb38;
      goto LAB_361e5366;
    }
    if ((bVar1 & 0x20) != 0) {
      *(undefined4 *)param_1[7] = 2;
      pbVar3 = pbVar5;
      goto switchD_361e5180_caseD_2;
    }
    *puVar4 = 7;
    pbVar3 = pbVar5;
    break;
  case 2:
switchD_361e5180_caseD_2:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 3;
    pbVar3 = pbVar5;
  case 3:
    goto switchD_361e5180_caseD_3;
  case 4:
    goto switchD_361e5180_caseD_4;
  case 5:
    goto switchD_361e5180_caseD_5;
  case 6:
    *(undefined4 *)param_1[7] = 0xd;
    param_1[6] = (int)s_need_dictionary_3624bb10;
    *(undefined4 *)(param_1[7] + 4) = 0;
    return (byte *)0xfffffffe;
  case 7:
    pbVar3 = (byte *)FUN_361f65d2(*(uint **)(param_1[7] + 0x14),param_1,pbVar3);
    if (pbVar3 == (byte *)0xfffffffd) {
      *(undefined4 *)param_1[7] = 0xd;
      *(undefined4 *)(param_1[7] + 4) = 0;
      pbVar3 = (byte *)0xfffffffd;
    }
    else {
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = pbVar5;
      }
      if (pbVar3 != (byte *)0x1) {
        return pbVar3;
      }
      FUN_361f64da(*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
      puVar4 = (undefined4 *)param_1[7];
      if (puVar4[3] == 0) {
        *puVar4 = 8;
        pbVar3 = pbVar5;
        goto switchD_361e5180_caseD_8;
      }
      *puVar4 = 0xc;
      pbVar3 = pbVar5;
    }
    break;
  case 8:
switchD_361e5180_caseD_8:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 9;
    pbVar3 = pbVar5;
  case 9:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 10;
    pbVar3 = pbVar5;
  case 10:
    goto switchD_361e5180_caseD_a;
  case 0xb:
    goto switchD_361e5180_caseD_b;
  case 0xc:
    goto LAB_361e5380;
  case 0xd:
    return (byte *)0xfffffffd;
  default:
    goto LAB_361e5380;
  }
LAB_361e5370:
  puVar4 = (undefined4 *)param_1[7];
  goto LAB_361e5373;
switchD_361e5180_caseD_a:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 0xb;
  pbVar3 = pbVar5;
switchD_361e5180_caseD_b:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
  puVar4 = (undefined4 *)param_1[7];
  *param_1 = *param_1 + 1;
  if (puVar4[1] == puVar4[2]) {
    *(undefined4 *)param_1[7] = 0xc;
LAB_361e5380:
    return (byte *)0x1;
  }
  *puVar4 = 0xd;
  param_1[6] = (int)s_incorrect_data_check_3624bb20;
LAB_361e5366:
  *(undefined4 *)(param_1[7] + 4) = 5;
  pbVar3 = pbVar5;
  goto LAB_361e5370;
switchD_361e5180_caseD_3:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 4;
  pbVar3 = pbVar5;
switchD_361e5180_caseD_4:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 5;
  pbVar3 = pbVar5;
switchD_361e5180_caseD_5:
  if (param_1[1] != 0) {
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
    *param_1 = *param_1 + 1;
    param_1[0xc] = ((undefined4 *)param_1[7])[2];
    *(undefined4 *)param_1[7] = 6;
    return (byte *)0x2;
  }
  return pbVar3;
}

