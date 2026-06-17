
void FUN_3608e180(void)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = 0;
  local_20 = 0;
  local_10 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (DAT_362c542c == 1) {
    iVar1 = 0;
    do {
      shaSetVertexProgramConst(iVar1,(ShaderRegister *)&local_30,3);
      iVar1 = iVar1 + 3;
    } while (iVar1 < 0x15);
    return;
  }
  if (DAT_362c542c == 2) {
    iVar1 = 0;
    do {
      shaSetVertexProgramConst(iVar1,(ShaderRegister *)&local_30,3);
      iVar1 = iVar1 + 3;
    } while (iVar1 < 0x60);
  }
  return;
}

