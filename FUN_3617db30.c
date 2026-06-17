
void __cdecl FUN_3617db30(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  float *unaff_ESI;
  int iVar8;
  int local_c0 [24];
  float local_60 [4];
  float local_50;
  float local_4c;
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
  
  local_60[0] = *in_EAX;
  local_60[1] = in_EAX[1];
  local_60[2] = in_EAX[2];
  local_60[3] = in_EAX[3];
  local_2c = in_EAX[4];
  local_40 = in_EAX[5];
  local_4c = local_60[2];
  local_48 = local_60[3];
  local_34 = local_40;
  local_3c = local_60[0];
  local_30 = local_60[0];
  local_28 = local_60[2];
  local_1c = local_60[2];
  local_50 = local_60[1];
  local_44 = local_60[1];
  local_38 = local_60[1];
  local_24 = local_60[3];
  local_18 = local_60[3];
  local_10 = local_40;
  local_4 = local_40;
  iVar8 = 0;
  local_20 = local_2c;
  local_14 = local_2c;
  local_c = local_60[0];
  local_8 = local_2c;
  local_c0[0] = 0;
  local_c0[1] = 1;
  local_c0[2] = 1;
  local_c0[3] = 2;
  local_c0[4] = 2;
  local_c0[5] = 3;
  local_c0[6] = 3;
  local_c0[10] = 1;
  local_c0[0xc] = 2;
  local_c0[0xe] = 3;
  local_c0[7] = 0;
  local_c0[8] = 0;
  local_c0[9] = 4;
  local_c0[0xb] = 5;
  local_c0[0xd] = 6;
  local_c0[0xf] = 7;
  local_c0[0x10] = 4;
  local_c0[0x11] = 5;
  local_c0[0x12] = 5;
  local_c0[0x13] = 6;
  local_c0[0x14] = 6;
  local_c0[0x15] = 7;
  local_c0[0x16] = 7;
  local_c0[0x17] = 4;
  do {
    iVar1 = local_c0[iVar8 * 2];
    fVar2 = local_60[iVar1 * 3];
    fVar3 = local_60[iVar1 * 3 + 1];
    fVar4 = local_60[iVar1 * 3 + 2];
    iVar1 = local_c0[iVar8 * 2 + 1];
    fVar5 = local_60[iVar1 * 3];
    fVar6 = local_60[iVar1 * 3 + 1];
    fVar7 = local_60[iVar1 * 3 + 2];
    CDrawPort::DrawLine3D
              (DAT_36300c54,
               fVar3 * unaff_ESI[1] + fVar4 * unaff_ESI[2] + fVar2 * *unaff_ESI + unaff_ESI[3],
               fVar3 * unaff_ESI[5] + fVar4 * unaff_ESI[6] + fVar2 * unaff_ESI[4] + unaff_ESI[7],
               fVar3 * unaff_ESI[9] + fVar2 * unaff_ESI[8] + fVar4 * unaff_ESI[10] + unaff_ESI[0xb],
               fVar6 * unaff_ESI[1] + fVar7 * unaff_ESI[2] + fVar5 * *unaff_ESI + unaff_ESI[3],
               fVar6 * unaff_ESI[5] + fVar7 * unaff_ESI[6] + fVar5 * unaff_ESI[4] + unaff_ESI[7],
               fVar6 * unaff_ESI[9] + fVar5 * unaff_ESI[8] + fVar7 * unaff_ESI[10] + unaff_ESI[0xb],
               param_1);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xc);
  return;
}

