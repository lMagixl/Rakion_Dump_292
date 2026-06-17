
int FUN_36093830(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int unaff_EDI;
  
  if ((*(byte *)(unaff_EDI + 0x1c) & 4) != 0) {
    return 0;
  }
  if (DAT_362a4078 != 0) {
    DAT_362a4078 = 1;
  }
  if (DAT_362c53b0 != 0) {
    DAT_362c53b0 = 1;
  }
  if (DAT_362c53b4 != 0) {
    DAT_362c53b4 = 1;
  }
  if (DAT_362a407c != 0) {
    DAT_362a407c = 1;
  }
  bVar6 = (byte)*(undefined4 *)(unaff_EDI + 0x28);
  if ((DAT_362a40e8 == 0) || (bVar1 = true, (*(uint *)(unaff_EDI + 0x1c) & 0x400) == 0)) {
    bVar1 = false;
  }
  uVar3 = *(uint *)(unaff_EDI + 0x1c) & 2;
  if (((*(int *)(unaff_EDI + 0x20) >> (bVar6 & 0x1f) < 4) ||
      (*(int *)(unaff_EDI + 0x24) >> (bVar6 & 0x1f) < 4)) ||
     (((*(uint *)(unaff_EDI + 0x1c) & 0x200) != 0 && (DAT_362a407c == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(uint *)(unaff_EDI + 0x1c) & 1) == 0) {
    iVar7 = DAT_362c9b40;
    if (*(int *)(unaff_EDI + 0x34) < 2) {
      iVar7 = DAT_362c9b38;
    }
    if ((iVar7 == 2) || ((iVar4 = DAT_362c9b58, iVar7 == 0 && (uVar3 != 0)))) {
      iVar4 = DAT_362c9b50;
    }
    if (bVar1) {
      iVar4 = DAT_362c9b68;
    }
    iVar5 = DAT_362c9b58;
    if ((_iTexForcedQuality != 0x10) && (iVar5 = iVar4, _iTexForcedQuality == 0x20)) {
      iVar5 = DAT_362c9b50;
    }
  }
  else {
    iVar7 = DAT_362c9b44;
    if (*(int *)(unaff_EDI + 0x34) < 2) {
      iVar7 = DAT_362c9b3c;
    }
    if ((iVar7 == 2) || ((iVar4 = DAT_362c9b5c, iVar7 == 0 && (uVar3 != 0)))) {
      iVar4 = DAT_362c9b54;
    }
    if (bVar1) {
      iVar4 = DAT_362c9b64;
    }
    iVar5 = DAT_362c9b5c;
    if ((_iTexForcedQuality != 0x10) && (iVar5 = iVar4, _iTexForcedQuality == 0x20)) {
      iVar5 = DAT_362c9b54;
    }
    if (((*(byte *)(unaff_EDI + 0x1c) & 8) != 0) && (iVar5 == DAT_362c9b5c)) {
      iVar5 = DAT_362c9b60;
    }
  }
  if (((iVar7 == 3) && (bVar2)) && (_iTexForcedQuality == 0)) {
    if (((iVar5 == DAT_362c9b50) || (iVar5 == DAT_362c9b58)) ||
       ((iVar5 == 0x19 || ((iVar5 == DAT_362c9b68 && (DAT_362a4078 != 0)))))) {
      iVar5 = DAT_362c9b74;
      if (DAT_362c53b4 == 0) {
        iVar5 = DAT_362c9b70;
      }
    }
    else if (((iVar5 == DAT_362c9b54) || (iVar5 == DAT_362c9b5c)) ||
            ((iVar5 == DAT_362c9b64 && (DAT_362a4078 != 0)))) {
      if (DAT_362c53b0 == 0) {
        return DAT_362c9b74;
      }
      return DAT_362c9b78;
    }
  }
  return iVar5;
}

