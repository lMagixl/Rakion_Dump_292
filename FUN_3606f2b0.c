
void __cdecl FUN_3606f2b0(int param_1)

{
  byte bVar1;
  CTextureData *this;
  uint uVar2;
  short sVar3;
  undefined4 *in_EAX;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  FUN_3606dff0();
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    FUN_3606e9f0();
    FUN_3607b900(1);
    (*DAT_362c4680)(((*(byte *)((int)in_EAX + 0xb7) & 1) != 0) + 'Q',
                    ((*(byte *)((int)in_EAX + 0xb7) & 2) != 0) + 'Q');
    CShadowMap::SetAsCurrent((CShadowMap *)in_EAX[0x31]);
    this = *(CTextureData **)((CAnimObject *)in_EAX[param_1 + 0x2e] + 0x14);
    lVar4 = CAnimObject::GetFrame((CAnimObject *)in_EAX[param_1 + 0x2e]);
    FUN_3607b900(0);
    if (((DAT_362bfa04 != this) || (DAT_362bfa14 != lVar4)) ||
       (DAT_362bfa34 != *(byte *)(param_1 + 0xb4 + (int)in_EAX))) {
      DAT_362bfa34 = (uint)*(byte *)(param_1 + 0xb4 + (int)in_EAX);
      bVar1 = *(byte *)(param_1 + 0xb4 + (int)in_EAX);
      DAT_362bfa04 = this;
      DAT_362bfa14 = lVar4;
      (*DAT_362c4680)(((bVar1 & 1) != 0) + 'Q',((bVar1 & 2) != 0) + 'Q');
      CTextureData::SetAsCurrent(this,lVar4,0);
      FUN_3606e0a0();
    }
    uVar2 = in_EAX[4];
    iVar7 = DAT_362c3a8c + uVar2;
    DAT_362c3a8c = iVar7;
    iVar5 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
    if (iVar5 < iVar7) {
      iVar7 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      FUN_360623a0(&DAT_362c3a84,iVar7 + ((int)(uVar2 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
      iVar7 = DAT_362c3a8c;
    }
    puVar9 = (uint *)(DAT_362c3a88 + (iVar7 - uVar2) * 2);
    piVar8 = (int *)in_EAX[3];
    iVar7 = in_EAX[0x32];
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
  return;
}

