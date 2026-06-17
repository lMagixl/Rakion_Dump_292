
void FUN_3606f980(void)

{
  CTextureData *this;
  CTextureData *this_00;
  CTextureData *this_01;
  uint uVar1;
  short sVar2;
  undefined4 *in_EAX;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 uVar11;
  
  FUN_3606dff0();
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    this = *(CTextureData **)(in_EAX[0x2f] + 0x14);
    this_00 = *(CTextureData **)(in_EAX[0x30] + 0x14);
    this_01 = *(CTextureData **)((CAnimObject *)in_EAX[0x2e] + 0x14);
    lVar3 = CAnimObject::GetFrame((CAnimObject *)in_EAX[0x2e]);
    lVar4 = CAnimObject::GetFrame((CAnimObject *)in_EAX[0x2f]);
    lVar5 = CAnimObject::GetFrame((CAnimObject *)in_EAX[0x30]);
    if ((((((DAT_362bfa04 != this_01) || (DAT_362bfa14 != lVar3)) ||
          (DAT_362bfa34 != *(byte *)(in_EAX + 0x2d))) ||
         ((DAT_362bfa08 != this || (DAT_362bfa18 != lVar4)))) ||
        ((DAT_362bfa38 != *(byte *)((int)in_EAX + 0xb5) ||
         ((DAT_362bfa0c != this_00 || (DAT_362bfa1c != lVar5)))))) ||
       (DAT_362bfa3c != *(byte *)((int)in_EAX + 0xb6))) {
      FUN_3606e9f0();
      DAT_362bfa34 = (uint)*(byte *)(in_EAX + 0x2d);
      DAT_362bfa38 = (uint)*(byte *)((int)in_EAX + 0xb5);
      DAT_362bfa3c = (uint)*(byte *)((int)in_EAX + 0xb6);
      DAT_362bfa04 = this_01;
      DAT_362bfa08 = this;
      DAT_362bfa0c = this_00;
      DAT_362bfa14 = lVar3;
      DAT_362bfa18 = lVar4;
      DAT_362bfa1c = lVar5;
      FUN_3607b900(2);
      (*DAT_362c4680)(((*(byte *)((int)in_EAX + 0xb6) & 1) != 0) + 'Q',
                      ((*(byte *)((int)in_EAX + 0xb6) & 2) != 0) + 'Q');
      CTextureData::SetAsCurrent(this_00,lVar5,0);
      FUN_3607b900(1);
      (*DAT_362c4680)(((*(byte *)((int)in_EAX + 0xb5) & 1) != 0) + 'Q',
                      ((*(byte *)((int)in_EAX + 0xb5) & 2) != 0) + 'Q');
      CTextureData::SetAsCurrent(this,lVar4,0);
      FUN_3607b900(0);
      (*DAT_362c4680)(((*(byte *)(in_EAX + 0x2d) & 1) != 0) + 'Q',
                      ((*(byte *)(in_EAX + 0x2d) & 2) != 0) + 'Q');
      CTextureData::SetAsCurrent(this_01,lVar3,0);
      FUN_3606e0a0();
    }
    uVar1 = in_EAX[4];
    iVar8 = DAT_362c3a8c + uVar1;
    DAT_362c3a8c = iVar8;
    iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
    if (iVar6 < iVar8) {
      iVar8 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      FUN_360623a0(&DAT_362c3a84,iVar8 + ((int)(uVar1 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
      iVar8 = DAT_362c3a8c;
    }
    puVar10 = (uint *)(DAT_362c3a88 + (iVar8 - uVar1) * 2);
    piVar9 = (int *)in_EAX[3];
    iVar8 = in_EAX[0x32];
    uVar7 = uVar1 >> 2;
    sVar2 = (short)iVar8;
    if (uVar7 != 0) {
      do {
        uVar11 = packssdw(*(undefined8 *)piVar9,*(undefined8 *)(piVar9 + 2));
        *(ulonglong *)puVar10 =
             CONCAT44((int)((ulonglong)uVar11 >> 0x20) + CONCAT22(sVar2,sVar2),
                      (int)uVar11 + CONCAT22(sVar2,sVar2));
        piVar9 = piVar9 + 4;
        puVar10 = puVar10 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((uVar1 & 2) != 0) {
      *puVar10 = *piVar9 + iVar8 | (piVar9[1] + iVar8) * 0x10000;
      piVar9 = piVar9 + 2;
      puVar10 = puVar10 + 1;
    }
    if ((uVar1 & 1) != 0) {
      *(short *)puVar10 = (short)*piVar9 + sVar2;
    }
  }
  FUN_3606e9f0();
  return;
}

