
void FUN_361318c0(void)

{
  float *unaff_ESI;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_362fd368 != 0) {
    MakeRotationMatrix((Matrix<float,3,3> *)&local_24,(Vector<float,3> *)(unaff_ESI + 3));
    local_48 = -local_24;
    local_3c = -local_18;
    local_38 = local_14;
    local_28 = local_4;
    local_30 = -local_c;
    local_44 = local_20;
    local_40 = local_1c;
    local_34 = local_10;
    local_2c = local_8;
    if (DAT_362fd368 == 1) {
      *unaff_ESI = -*unaff_ESI;
      local_48 = -local_48;
      local_44 = -local_20;
      local_40 = -local_1c;
    }
    else if (DAT_362fd368 == 2) {
      unaff_ESI[1] = -unaff_ESI[1];
      local_3c = -local_3c;
      local_38 = -local_14;
      local_34 = -local_10;
    }
    else if (DAT_362fd368 == 3) {
      unaff_ESI[2] = -unaff_ESI[2];
      local_30 = -local_30;
      local_2c = -local_8;
      local_28 = -local_4;
    }
    local_24 = local_48;
    local_20 = local_44;
    local_18 = local_3c;
    local_c = local_30;
    local_1c = local_40;
    local_14 = local_38;
    local_8 = local_2c;
    local_10 = local_34;
    local_4 = local_28;
    DecomposeRotationMatrix((Vector<float,3> *)(unaff_ESI + 3),(Matrix<float,3,3> *)&local_24);
  }
  *unaff_ESI = DAT_362a648c * *unaff_ESI;
  unaff_ESI[1] = DAT_362a648c * unaff_ESI[1];
  unaff_ESI[2] = DAT_362a648c * unaff_ESI[2];
  return;
}

