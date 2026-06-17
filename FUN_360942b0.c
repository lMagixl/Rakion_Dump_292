
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360942b0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  iVar3 = *(int *)(_pGfx + 0xa38);
  DAT_362c9b54 = 0;
  DAT_362c9b50 = 0;
  DAT_362c9b60 = 0;
  DAT_362c9b5c = 0;
  DAT_362c9b58 = 0;
  _DAT_362c9b6c = 0;
  DAT_362c9b68 = 0;
  DAT_362c9b64 = 0;
  FUN_360934b0(iVar3);
  uVar1 = *(uint *)(_pGfx + 0xa54);
  uVar4 = uVar1 & 0x10000000;
  if (iVar3 != 0) {
    if ((iVar3 == 1) && ((uVar1 & 8) != 0)) {
      iVar5 = 5;
    }
    goto LAB_360943da;
  }
  if ((uVar1 & 8) == 0) goto LAB_360943da;
  if (DAT_362a40a8 < 0) {
    DAT_362a40a8 = 0;
  }
  else if (4 < DAT_362a40a8) {
    DAT_362a40a8 = 4;
  }
  if ((DAT_362a40a8 == 3) && ((uVar1 & 0x20000000) == 0)) {
    DAT_362a40a8 = 2;
LAB_36094371:
    if (uVar4 == 0) {
      DAT_362a40a8 = 3;
    }
    else if (DAT_362a40a8 != 2) goto LAB_36094387;
LAB_3609438c:
    if (((uVar1 & 0x20000000) != 0) || (uVar4 != 0)) goto LAB_360943a1;
    DAT_362a40a8 = 1;
LAB_360943a6:
    if ((uVar1 & 0x8000000) != 0) goto LAB_360943b7;
    DAT_362a40a8 = 4;
  }
  else {
    if (DAT_362a40a8 == 2) goto LAB_36094371;
LAB_36094387:
    if (DAT_362a40a8 == 3) goto LAB_3609438c;
LAB_360943a1:
    if (DAT_362a40a8 == 1) goto LAB_360943a6;
LAB_360943b7:
    iVar5 = DAT_362a40a8;
    if (DAT_362a40a8 != 4) goto LAB_360943da;
  }
  iVar5 = DAT_362a40a8;
  if ((uVar1 & 0x40000000) == 0) {
    DAT_362a40a8 = 0;
    iVar5 = DAT_362a40a8;
  }
LAB_360943da:
  switch(iVar5) {
  case 1:
    DAT_362c9b70 = 0x84ed;
    DAT_362c9b74 = 0x84ee;
    DAT_362c9b78 = 0x84ee;
    if (uVar4 == 0) {
      if ((uVar1 & 0x40000000) != 0) {
        DAT_362c9b78 = 0x83a5;
      }
    }
    else {
      DAT_362c9b78 = 0x83f3;
    }
    break;
  case 2:
    DAT_362c9b70 = 0x83f0;
    DAT_362c9b74 = 0x83f2;
    DAT_362c9b78 = 0x83f3;
    break;
  case 3:
    DAT_362c9b70 = 0x86b0;
    DAT_362c9b74 = 0x86b1;
    DAT_362c9b78 = 0x86b1;
    break;
  case 4:
    DAT_362c9b70 = 0x83a0;
    DAT_362c9b74 = 0x83a6;
    DAT_362c9b78 = 0x83a5;
    break;
  case 5:
    DAT_362c9b70 = 0x31545844;
    DAT_362c9b74 = FUN_36073120(0x33545844);
    DAT_362c9b78 = FUN_36073120(0x35545844);
    break;
  default:
    DAT_362c9b78 = 0;
    DAT_362c9b70 = 0;
    DAT_362c9b74 = 0;
  }
  uVar1 = (0 < iVar5) + 2;
  bVar6 = ((byte)_pGfx[0xa54] & 0x10) == 0;
  if (bVar6) {
    uVar1 = 1;
  }
  DAT_362c9b44 = (uint)bVar6;
  uVar4 = DAT_362c5394 / 10;
  uVar2 = DAT_362c5394 % 10;
  DAT_362c9b38 = DAT_362c9b44;
  if (((int)DAT_362c9b44 <= (int)uVar4) && (DAT_362c9b38 = uVar1, (int)uVar4 <= (int)uVar1)) {
    DAT_362c9b38 = uVar4;
  }
  DAT_362c9b3c = DAT_362c9b44;
  if (((int)DAT_362c9b44 <= (int)uVar2) && (DAT_362c9b3c = uVar1, (int)uVar2 <= (int)uVar1)) {
    DAT_362c9b3c = uVar2;
  }
  uVar4 = DAT_362a405c / 10;
  uVar2 = DAT_362a405c % 10;
  DAT_362c9b40 = DAT_362c9b44;
  if (((int)DAT_362c9b44 <= (int)uVar4) && (DAT_362c9b40 = uVar1, (int)uVar4 <= (int)uVar1)) {
    DAT_362c9b40 = uVar4;
  }
  if (((int)DAT_362c9b44 <= (int)uVar2) && (DAT_362c9b44 = uVar2, (int)uVar1 < (int)uVar2)) {
    DAT_362c9b44 = uVar1;
  }
  DAT_362c5394 = DAT_362c9b3c + DAT_362c9b38 * 10;
  _DAT_362a4060 = 0xb;
  _DAT_362a4064 = 0xb;
  DAT_362a405c = DAT_362c9b44 + DAT_362c9b40 * 10;
  DAT_362c9b48 = 0x400000;
  DAT_362c9b4c = 0x400000;
  _DAT_362c9b7c = DAT_362c5394 / 10;
  iVar3 = DAT_362c5394 % 10;
  if (_DAT_362c9b7c == 0) {
    _DAT_362c9b7c = 2;
  }
  else if (_DAT_362c9b7c == 3) {
    _DAT_362c9b7c = 0;
  }
  if (iVar3 == 0) {
    iVar3 = 2;
  }
  else if (iVar3 == 3) {
    iVar3 = 0;
  }
  if (_DAT_362c9b7c < iVar3) {
    _DAT_362c9b7c = iVar3;
  }
  _DAT_362c9b7c = _DAT_362c9b7c * 2;
  if (_DAT_362c9b7c == 0) {
    _DAT_362c9b7c = 1;
  }
  return;
}

