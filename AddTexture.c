
/* public: void __thiscall CDrawPort::AddTexture(float,float,float,float,unsigned
   long,float,float,float,float,unsigned long,float,float,float,float,unsigned
   long,float,float,float,float,unsigned long)const  */

void __thiscall
CDrawPort::AddTexture
          (CDrawPort *this,float param_1,float param_2,float param_3,float param_4,ulong param_5,
          float param_6,float param_7,float param_8,float param_9,ulong param_10,float param_11,
          float param_12,float param_13,float param_14,ulong param_15,float param_16,float param_17,
          float param_18,float param_19,ulong param_20)

{
  float *pfVar1;
  float *pfVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong local_c;
  ulong local_8;
  ulong local_4;
  
                    /* 0x68310  1021  ?AddTexture@CDrawPort@@QBEXMMMMKMMMMKMMMMKMMMMK@Z */
  FUN_360605c0(&param_5,param_5);
  FUN_360605c0(&local_c,param_10);
  FUN_360605c0(&local_8,param_15);
  FUN_360605c0(&local_4,param_20);
  uVar5 = FUN_36061f20(0x362c54d8);
  iVar7 = DAT_362c54e0 + 4;
  DAT_362c54e0 = iVar7;
  iVar6 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
  if (iVar6 < iVar7) {
    iVar7 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
    FUN_360621d0(&DAT_362c54d8,iVar7 + ((int)(3 / (longlong)DAT_362c54e4) + 1) * DAT_362c54e4);
    iVar7 = DAT_362c54e0;
  }
  pfVar1 = (float *)(DAT_362c54dc + (iVar7 * 3 + -0xc) * 4);
  iVar6 = DAT_362c5510 + 4;
  DAT_362c5510 = iVar6;
  iVar7 = FUN_36061fd0(&DAT_362c5508);
  if (iVar7 < iVar6) {
    iVar7 = FUN_36061fd0(&DAT_362c5508);
    FUN_36062460(&DAT_362c5508,iVar7 + ((int)(3 / (longlong)DAT_362c5514) + 1) * DAT_362c5514);
  }
  pfVar2 = (float *)(DAT_362c550c + -0x20 + DAT_362c5510 * 8);
  iVar6 = DAT_362c5500 + 4;
  DAT_362c5500 = iVar6;
  iVar7 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
  if (iVar7 < iVar6) {
    iVar7 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
    FUN_360622b0(&DAT_362c54f8,iVar7 + ((int)(3 / (longlong)DAT_362c5504) + 1) * DAT_362c5504);
  }
  puVar3 = (ulong *)(DAT_362c54fc + -0x10 + DAT_362c5500 * 4);
  DAT_362c5560 = DAT_362c5560 + 6;
  iVar7 = FUN_3600bda0((undefined4 *)&DAT_362c5558);
  if (iVar7 < DAT_362c5560) {
    iVar7 = FUN_3600bda0((undefined4 *)&DAT_362c5558);
    FUN_360623a0(&DAT_362c5558,iVar7 + ((int)(5 / (longlong)DAT_362c5564) + 1) * DAT_362c5564);
  }
  puVar4 = (uint *)(DAT_362c555c + -0xc + DAT_362c5560 * 2);
  pfVar1[1] = param_2;
  pfVar1[3] = param_6;
  pfVar1[4] = param_7;
  pfVar1[6] = param_11;
  pfVar1[7] = param_12;
  pfVar1[9] = param_16;
  pfVar1[10] = param_17;
  *pfVar1 = param_1;
  pfVar1[2] = 0.0;
  pfVar1[5] = 0.0;
  pfVar1[8] = 0.0;
  pfVar1[0xb] = 0.0;
  pfVar2[1] = param_4;
  pfVar2[3] = param_9;
  *pfVar2 = param_3;
  pfVar2[5] = param_14;
  pfVar2[2] = param_8;
  pfVar2[7] = param_19;
  pfVar2[4] = param_13;
  pfVar2[6] = param_18;
  *puVar3 = param_5;
  puVar3[1] = local_c;
  puVar3[2] = local_8;
  puVar3[3] = local_4;
  *puVar4 = (uVar5 + 2) * 0x10000 | uVar5 + 1;
  puVar4[2] = (uVar5 + 3) * 0x10000 | uVar5 + 2;
  puVar4[1] = uVar5 << 0x10 | uVar5;
  return;
}

