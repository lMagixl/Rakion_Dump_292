
void __cdecl
FUN_36200210(int param_1,int param_2,int param_3,undefined4 param_4,char param_5,uint param_6,
            undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_7c [4];
  undefined4 local_6c;
  uint local_64;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  int local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_361fc6a0();
  piVar4 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  sVar1 = *(short *)(param_1 + 0x237e);
  local_7c[0] = 0x7c;
  local_7c[1] = 0x81007;
  if (sVar1 != 0x21) {
    local_7c[1] = 0xa1007;
  }
  local_7c[3] = param_2;
  local_28 = -(uint)(param_5 != '\0') & param_6;
  local_7c[2] = param_3;
  local_6c = param_8;
  if (*(short *)(param_1 + 0x23a8) == 0x51) {
    local_10 = local_10 | 0xfe00;
  }
  if (DAT_36383d74 == '\0') {
    if (sVar1 == 0x1f) {
      uVar3 = 0;
      if (param_2 <= param_3) {
        param_2 = param_3;
      }
      for (; param_2 != 0; param_2 = param_2 >> 1) {
        uVar3 = uVar3 + 1;
      }
      local_64 = (int)*(short *)(param_1 + 0x2380);
      if ((uint)(int)*(short *)(param_1 + 0x2380) <= uVar3) goto LAB_36200310;
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
  else {
    local_64 = 0;
  }
LAB_36200310:
  local_34 = 0x20;
  local_30 = 4;
  if (DAT_36383cd1 == '\0') {
    local_2c = 0x31545844;
  }
  else {
    local_2c = (-(uint)(param_6 != 0x100) & 0x2000000) + 0x33545844;
  }
  local_c = 0x58534444;
  local_14 = (-(uint)(sVar1 != 0x21) & 0x400008) + 0x1000;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  FUN_361fc6a0();
  return;
}

