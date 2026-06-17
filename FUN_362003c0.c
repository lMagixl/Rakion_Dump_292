
void __cdecl
FUN_362003c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_7c [4];
  undefined4 local_6c;
  uint local_64;
  undefined4 local_34 [8];
  int local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_361fc6a0();
  piVar5 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  sVar1 = *(short *)(param_1 + 0x237e);
  local_7c[0] = 0x7c;
  local_7c[1] = 0x81007;
  if (sVar1 != 0x21) {
    local_7c[1] = 0xa1007;
  }
  local_7c[3] = param_2;
  local_7c[2] = param_3;
  local_6c = param_5;
  if (*(short *)(param_1 + 0x23a8) == 0x51) {
    local_10 = local_10 | 0xfe00;
  }
  if (sVar1 == 0x21) {
    local_64 = 0;
  }
  else {
    if (sVar1 == 0x1f) {
      uVar3 = 0;
      if (param_2 <= param_3) {
        param_2 = param_3;
      }
      for (; param_2 != 0; param_2 = param_2 >> 1) {
        uVar3 = uVar3 + 1;
      }
      local_64 = (int)*(short *)(param_1 + 0x2380);
      if ((uint)(int)*(short *)(param_1 + 0x2380) <= uVar3) goto LAB_3620049a;
    }
    else {
      uVar3 = 0;
      if (param_2 <= param_3) {
        param_2 = param_3;
      }
      for (; param_2 != 0; param_2 = param_2 >> 1) {
        uVar3 = uVar3 + 1;
      }
    }
    local_64 = uVar3;
  }
LAB_3620049a:
  local_34[0] = 0x20;
  switch(param_6) {
  case 0xe:
    puVar4 = &DAT_3624ce28;
    break;
  case 0xf:
    puVar4 = &DAT_3624ce08;
    break;
  case 0x10:
    puVar4 = &DAT_3624ce68;
    break;
  case 0x11:
    puVar4 = &DAT_3624cde8;
    break;
  case 0x12:
    puVar4 = &DAT_3624ce48;
    break;
  case 0x13:
    puVar4 = &DAT_3624ce88;
    break;
  case 0x14:
    puVar4 = &DAT_3624cee8;
    break;
  case 0x15:
    puVar4 = &DAT_3624cec8;
    break;
  case 0x16:
    puVar4 = &DAT_3624cea8;
    break;
  default:
    goto switchD_362004b1_default;
  }
  puVar6 = local_34;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
switchD_362004b1_default:
  local_14 = (-(uint)(sVar1 != 0x21) & 0x400008) + 0x1000;
  local_c = 0x58534444;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  FUN_361fc6a0();
  return;
}

