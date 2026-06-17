
/* public: void __thiscall CDrawPort::AddTriangle(float,float,float,float,float,float,unsigned
   long)const  */

void __thiscall
CDrawPort::AddTriangle
          (CDrawPort *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,ulong param_7)

{
  float *pfVar1;
  ulong *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x68140  1036  ?AddTriangle@CDrawPort@@QBEXMMMMMMK@Z */
  FUN_360605c0(&param_7,param_7);
  uVar4 = FUN_36061f20(0x362c54d8);
  iVar6 = DAT_362c54e0 + 3;
  DAT_362c54e0 = iVar6;
  iVar5 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
  if (iVar5 < iVar6) {
    iVar6 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
    FUN_360621d0(&DAT_362c54d8,iVar6 + ((int)(2 / (longlong)DAT_362c54e4) + 1) * DAT_362c54e4);
    iVar6 = DAT_362c54e0;
  }
  pfVar1 = (float *)(DAT_362c54dc + (iVar6 * 3 + -9) * 4);
  iVar5 = DAT_362c5510 + 3;
  DAT_362c5510 = iVar5;
  iVar6 = FUN_36061fd0(&DAT_362c5508);
  if (iVar6 < iVar5) {
    iVar6 = FUN_36061fd0(&DAT_362c5508);
    FUN_36062460(&DAT_362c5508,iVar6 + ((int)(2 / (longlong)DAT_362c5514) + 1) * DAT_362c5514);
  }
  iVar5 = DAT_362c5500 + 3;
  DAT_362c5500 = iVar5;
  iVar6 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
  if (iVar6 < iVar5) {
    iVar6 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
    FUN_360622b0(&DAT_362c54f8,iVar6 + ((int)(2 / (longlong)DAT_362c5504) + 1) * DAT_362c5504);
  }
  puVar2 = (ulong *)(DAT_362c54fc + -0xc + DAT_362c5500 * 4);
  iVar5 = DAT_362c5560 + 3;
  DAT_362c5560 = iVar5;
  iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c5558);
  if (iVar6 < iVar5) {
    iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c5558);
    FUN_360623a0(&DAT_362c5558,iVar6 + ((int)(2 / (longlong)DAT_362c5564) + 1) * DAT_362c5564);
  }
  puVar3 = (uint *)(DAT_362c555c + -6 + DAT_362c5560 * 2);
  pfVar1[1] = param_2;
  pfVar1[3] = param_3;
  pfVar1[4] = param_4;
  pfVar1[6] = param_5;
  *pfVar1 = param_1;
  pfVar1[7] = param_6;
  pfVar1[2] = 0.0;
  pfVar1[5] = 0.0;
  pfVar1[8] = 0.0;
  *puVar2 = param_7;
  puVar2[1] = param_7;
  puVar2[2] = param_7;
  *(short *)(puVar3 + 1) = (short)uVar4 + 2;
  *puVar3 = (uVar4 + 1) * 0x10000 | uVar4;
  return;
}

