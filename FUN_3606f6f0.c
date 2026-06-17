
void __cdecl FUN_3606f6f0(int param_1)

{
  byte bVar1;
  CTextureData *this;
  CTextureData *this_00;
  uint uVar2;
  short sVar3;
  undefined4 *in_EAX;
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
    FUN_3606e9f0();
    FUN_3607b900(2);
    (*DAT_362c4680)(((*(byte *)((int)in_EAX + 0xb7) & 1) != 0) + 'Q',
                    ((*(byte *)((int)in_EAX + 0xb7) & 2) != 0) + 'Q');
    CShadowMap::SetAsCurrent((CShadowMap *)in_EAX[0x31]);
    this = *(CTextureData **)(in_EAX[param_1 + 0x2e] + 0x14);
    this_00 = *(CTextureData **)((CAnimObject *)in_EAX[0x2e] + 0x14);
    lVar4 = CAnimObject::GetFrame((CAnimObject *)in_EAX[0x2e]);
    lVar5 = CAnimObject::GetFrame((CAnimObject *)in_EAX[param_1 + 0x2e]);
    FUN_3607b900(0);
    if ((((DAT_362bfa04 != this_00) || (DAT_362bfa14 != lVar4)) ||
        (DAT_362bfa34 != *(byte *)(in_EAX + 0x2d))) ||
       (((DAT_362bfa08 != this || (DAT_362bfa18 != lVar5)) ||
        (DAT_362bfa38 != *(byte *)(param_1 + 0xb4 + (int)in_EAX))))) {
      DAT_362bfa34 = (uint)*(byte *)(in_EAX + 0x2d);
      DAT_362bfa38 = (uint)*(byte *)(param_1 + 0xb4 + (int)in_EAX);
      DAT_362bfa04 = this_00;
      DAT_362bfa08 = this;
      DAT_362bfa14 = lVar4;
      DAT_362bfa18 = lVar5;
      FUN_3607b900(1);
      bVar1 = *(byte *)(param_1 + 0xb4 + (int)in_EAX);
      (*DAT_362c4680)(((bVar1 & 1) != 0) + 'Q',((bVar1 & 2) != 0) + 'Q');
      CTextureData::SetAsCurrent(this,lVar5,0);
      FUN_3607b900(0);
      (*DAT_362c4680)(((*(byte *)(in_EAX + 0x2d) & 1) != 0) + 'Q',
                      ((*(byte *)(in_EAX + 0x2d) & 2) != 0) + 'Q');
      CTextureData::SetAsCurrent(this_00,lVar4,0);
      FUN_3606e0a0();
    }
    uVar2 = in_EAX[4];
    iVar8 = DAT_362c3a8c + uVar2;
    DAT_362c3a8c = iVar8;
    iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
    if (iVar6 < iVar8) {
      iVar8 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      FUN_360623a0(&DAT_362c3a84,iVar8 + ((int)(uVar2 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
      iVar8 = DAT_362c3a8c;
    }
    puVar10 = (uint *)(DAT_362c3a88 + (iVar8 - uVar2) * 2);
    piVar9 = (int *)in_EAX[3];
    iVar8 = in_EAX[0x32];
    uVar7 = uVar2 >> 2;
    sVar3 = (short)iVar8;
    if (uVar7 != 0) {
      do {
        uVar11 = packssdw(*(undefined8 *)piVar9,*(undefined8 *)(piVar9 + 2));
        *(ulonglong *)puVar10 =
             CONCAT44((int)((ulonglong)uVar11 >> 0x20) + CONCAT22(sVar3,sVar3),
                      (int)uVar11 + CONCAT22(sVar3,sVar3));
        piVar9 = piVar9 + 4;
        puVar10 = puVar10 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((uVar2 & 2) != 0) {
      *puVar10 = *piVar9 + iVar8 | (piVar9[1] + iVar8) * 0x10000;
      piVar9 = piVar9 + 2;
      puVar10 = puVar10 + 1;
    }
    if ((uVar2 & 1) != 0) {
      *(short *)puVar10 = (short)*piVar9 + sVar3;
    }
  }
  FUN_3606e9f0();
  return;
}

