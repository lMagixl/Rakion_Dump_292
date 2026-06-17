
void __cdecl FUN_360713a0(undefined4 *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    if ((param_1[0x34] & 0x200) != 0) {
      uVar1 = param_1[4];
      iVar5 = DAT_362c3a8c + uVar1;
      DAT_362c3a8c = iVar5;
      iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      if (iVar3 < iVar5) {
        iVar5 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
        FUN_360623a0(&DAT_362c3a84,iVar5 + ((int)(uVar1 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
        iVar5 = DAT_362c3a8c;
      }
      puVar7 = (uint *)(DAT_362c3a88 + (iVar5 - uVar1) * 2);
      piVar6 = (int *)param_1[3];
      iVar5 = param_1[0x32];
      uVar4 = uVar1 >> 2;
      sVar2 = (short)iVar5;
      if (uVar4 != 0) {
        do {
          uVar8 = packssdw(*(undefined8 *)piVar6,*(undefined8 *)(piVar6 + 2));
          *(ulonglong *)puVar7 =
               CONCAT44((int)((ulonglong)uVar8 >> 0x20) + CONCAT22(sVar2,sVar2),
                        (int)uVar8 + CONCAT22(sVar2,sVar2));
          piVar6 = piVar6 + 4;
          puVar7 = puVar7 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if ((uVar1 & 2) != 0) {
        *puVar7 = *piVar6 + iVar5 | (piVar6[1] + iVar5) * 0x10000;
        piVar6 = piVar6 + 2;
        puVar7 = puVar7 + 1;
      }
      if ((uVar1 & 1) != 0) {
        *(short *)puVar7 = (short)*piVar6 + sVar2;
      }
    }
  }
  FUN_3606e9f0();
  return;
}

