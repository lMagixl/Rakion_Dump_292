
void __cdecl FUN_36070fa0(CDrawPort *param_1,undefined4 *param_2,CAnyProjection3D *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  if (DAT_362cce78 == 0) {
    if (DAT_362a4184 == 0) {
      return;
    }
  }
  else {
    DAT_362a4184 = 1;
  }
  CDrawPort::SetProjection(param_1,param_3);
  FUN_3606e3b0();
  uVar4 = FUN_3607acf0();
  (*DAT_362c46c4)(0);
  (*DAT_362c45f8)();
  (*DAT_362c45f0)();
  (*DAT_362c4634)();
  (*DAT_362c46b0)();
  DAT_362bfa4c = 0;
  for (puVar1 = param_2; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    DAT_362bfa4c = DAT_362bfa4c + puVar1[2];
  }
  FUN_3606ea40();
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)*param_2) {
    *(float *)(DAT_362bef74 + 0x20) = (float)(int)param_2[4] + *(float *)(DAT_362bef74 + 0x20);
    *(int *)(_pGfx + 0xb34) = *(int *)(_pGfx + 0xb34) + param_2[4];
    uVar2 = param_2[4];
    iVar7 = DAT_362c3a8c + uVar2;
    DAT_362c3a8c = iVar7;
    iVar5 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
    if (iVar5 < iVar7) {
      iVar7 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      FUN_360623a0(&DAT_362c3a84,iVar7 + ((int)(uVar2 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
      iVar7 = DAT_362c3a8c;
    }
    puVar9 = (uint *)(DAT_362c3a88 + (iVar7 - uVar2) * 2);
    piVar8 = (int *)param_2[3];
    iVar7 = param_2[0x32];
    uVar6 = uVar2 >> 2;
    sVar3 = (short)iVar7;
    if (uVar6 != 0) {
      do {
        uVar10 = packssdw(*(undefined8 *)piVar8,*(undefined8 *)(piVar8 + 2));
        *(ulonglong *)puVar9 =
             CONCAT44((int)((ulonglong)uVar10 >> 0x20) + CONCAT22(sVar3,sVar3),
                      (int)uVar10 + CONCAT22(sVar3,sVar3));
        piVar8 = piVar8 + 4;
        puVar9 = puVar9 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if ((uVar2 & 2) != 0) {
      *puVar9 = *piVar8 + iVar7 | (piVar8[1] + iVar7) * 0x10000;
      piVar8 = piVar8 + 2;
      puVar9 = puVar9 + 1;
    }
    if ((uVar2 & 1) != 0) {
      *(short *)puVar9 = (short)*piVar8 + sVar3;
    }
  }
  FUN_3606e9f0();
  (*DAT_362c46c4)(uVar4);
  FUN_3606e3d0();
  return;
}

