
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36008430(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  float fVar4;
  
  iVar1 = -0x200;
  do {
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1;
      if (0xff < iVar1) {
        iVar2 = 0xff;
      }
    }
    (&DAT_362b0480)[iVar1] = (char)iVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x400);
  iVar2 = 0;
  iVar1 = 0;
  do {
    uVar3 = FUN_361bfd6c();
    (&DAT_362b2af0)[iVar2] = (char)uVar3;
    iVar1 = iVar1 + 0x10000;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x20000000);
  iVar1 = 1;
  do {
    uVar3 = FUN_361bfd6c();
    *(short *)(&DAT_362b4af0 + iVar1 * 2) = (short)uVar3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2000);
  _DAT_362b4af0 = 0xffff;
  iVar1 = -0x100;
  do {
    fVar4 = Sin((float)(iVar1 + -0x80) * _DAT_36223770);
    *(float *)(&DAT_362b2580 + iVar1 * 4) = -fVar4;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x140);
  iVar1 = 0;
  do {
    if (*(float *)((int)&DAT_362b2180 + iVar1) == _DAT_3622376c) {
      *(undefined4 *)((int)&DAT_362b1880 + iVar1) = 0x46800000;
    }
    else {
      *(float *)((int)&DAT_362b1880 + iVar1) =
           _DAT_36223384 / *(float *)((int)&DAT_362b2180 + iVar1);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x900);
  iVar1 = -0x100;
  do {
    _CIasin();
    uVar3 = FUN_361bfd6c();
    *(int *)(&DAT_362b1480 + iVar1 * 4) = (int)uVar3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  iVar1 = -0x100;
  do {
    _CIacos();
    uVar3 = FUN_361bfd6c();
    *(int *)(&DAT_362b0c80 + iVar1 * 4) = (int)uVar3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return;
}

