
void __cdecl FUN_36164f80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
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
  
  local_40 = DAT_362fe118;
  local_30 = DAT_362fe11c;
  local_3c = DAT_362fe128;
  local_38 = DAT_362fe138;
  local_20 = DAT_362fe120;
  local_2c = DAT_362fe12c;
  local_28 = DAT_362fe13c;
  local_10 = DAT_362fe124;
  local_1c = DAT_362fe130;
  local_18 = DAT_362fe140;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  local_c = DAT_362fe134;
  local_8 = DAT_362fe144;
  local_4 = 0x3f800000;
  (*DAT_362c4674)(&local_40);
  iVar2 = 1;
  iVar1 = FUN_3615fda0(param_1 + 0xc);
  if (1 < iVar1) {
    do {
      FUN_36164b00();
      iVar2 = iVar2 + 1;
      iVar1 = FUN_3615fda0(param_1 + 0xc);
    } while (iVar2 < iVar1);
  }
  return;
}

