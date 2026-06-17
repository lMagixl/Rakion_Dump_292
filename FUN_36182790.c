
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36182790(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  piVar1 = *(int **)(in_EAX + 0x2c);
  FUN_36162680((float *)&DAT_36300ce8,(float *)&DAT_36300c88,(float *)&DAT_36300cb8);
  _DAT_36300c58 = piVar1[0xd];
  _DAT_36300c5c = 0;
  _DAT_36300c60 = 0;
  _DAT_36300c64 = 0;
  _DAT_36300c68 = 0;
  _DAT_36300c6c = piVar1[0xe];
  _DAT_36300c70 = 0;
  _DAT_36300c74 = 0;
  _DAT_36300c78 = 0;
  _DAT_36300c7c = 0;
  _DAT_36300c80 = piVar1[0xf];
  _DAT_36300c84 = 0;
  FUN_36162680((float *)&DAT_36300d18,(float *)&DAT_36300ce8,(float *)&DAT_36300c58);
  FUN_36162680((float *)&DAT_36300d48,(float *)&DAT_36300cb8,(float *)&DAT_36300c58);
  if (DAT_362c5444 == 0) {
    TR_AddTerrainViewer();
  }
  FUN_3617f5a0();
  if (DAT_362a415c != 0) {
    FUN_3617f5f0();
    FUN_3617dea0();
    FUN_36178890(piVar1);
  }
  DAT_362a6c50 = (uint)(DAT_362fcbc8 != 0);
  (*DAT_362c464c)(0x2b);
  (*DAT_362c462c)();
  (*DAT_362c4628)();
  (*DAT_362c45f8)();
  (*DAT_362c45f0)();
  (*DAT_362c4654)(0x3f);
  iVar2 = *(int *)(_pGfx + 0xadc);
  iVar3 = 1;
  if (1 < iVar2) {
    do {
      FUN_3607b900(iVar3);
      (*DAT_362c4684)(1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  FUN_3607b900(0);
  (*DAT_362c4684)(1);
  return;
}

