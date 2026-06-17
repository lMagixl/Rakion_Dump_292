
void FUN_3606f160(void)

{
  CShadowMap *this;
  uint uVar1;
  short sVar2;
  undefined4 *in_EAX;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  FUN_3606df40();
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    this = (CShadowMap *)in_EAX[0x31];
    (*DAT_362c4680)(((*(byte *)((int)in_EAX + 0xb7) & 1) != 0) + 'Q',
                    ((*(byte *)((int)in_EAX + 0xb7) & 2) != 0) + 'Q');
    FUN_3606df70();
    CShadowMap::SetAsCurrent(this);
    uVar1 = in_EAX[4];
    iVar5 = DAT_362c3a8c + uVar1;
    DAT_362c3a8c = iVar5;
    iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
    if (iVar3 < iVar5) {
      iVar5 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      FUN_360623a0(&DAT_362c3a84,iVar5 + ((int)(uVar1 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
      iVar5 = DAT_362c3a8c;
    }
    puVar7 = (uint *)(DAT_362c3a88 + (iVar5 - uVar1) * 2);
    piVar6 = (int *)in_EAX[3];
    iVar5 = in_EAX[0x32];
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
    FUN_3606e9f0();
  }
  return;
}

