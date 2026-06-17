
/* WARNING: Removing unreachable block (ram,0x36099b46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36099a70(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar6 = 0;
  do {
    uVar2 = DAT_362c9c58;
    uVar3 = DAT_362c9c58 * 0x40003;
    uVar4 = DAT_362c9c58 * 0x180009;
    iVar7 = *(int *)(param_1 + 0x4c) + iVar6;
    if (_DAT_362287b0 <= *(float *)(iVar7 + 8)) {
      DAT_362c9c58 = uVar4;
      uVar9 = FUN_361bfd6c();
      DAT_362c9c58 = uVar2 * 0x6c001b;
      iVar5 = (int)((ulonglong)(DAT_362c9c58 >> 0x10) % (uVar9 & 0xffffffff));
      uVar9 = FUN_361bfd6c();
      iVar8 = (int)uVar9 + (uint)(byte)((char)((ulonglong)(uVar4 >> 0x10) % 3) - 1);
      uVar9 = FUN_361bfd6c();
      FUN_3609ba80((int)uVar9 + (uint)(byte)((char)((ulonglong)(uVar3 >> 0x10) % 3) - 1),iVar8,iVar5
                  );
    }
    else {
      DAT_362c9c58 = DAT_362c9c58 * 0x6c001b;
      uVar9 = FUN_361bfd6c();
      iVar8 = (int)uVar9 * DAT_362c9c70;
      uVar9 = FUN_361bfd6c();
      uVar3 = iVar8 + (int)uVar9 & DAT_362c9c68;
      uVar2 = (DAT_362c9c58 >> 0x10 & 0x7f) + (uint)*(byte *)(DAT_362c9c60 + uVar3);
      if (uVar2 < 0x100) {
        *(char *)(DAT_362c9c60 + uVar3) = (char)uVar2;
      }
      else {
        *(undefined1 *)(DAT_362c9c60 + uVar3) = 0xff;
      }
    }
    if ((*(float *)(iVar7 + 8) < _DAT_362287b0) &&
       (DAT_362c9c58 = DAT_362c9c58 * 0x40003, (char)(DAT_362c9c58 >> 0x10) == '\0')) {
      *(undefined4 *)(iVar7 + 8) = 0x3f800000;
    }
    fVar1 = *(float *)(iVar7 + 4) - *(float *)(iVar7 + 8);
    *(float *)(iVar7 + 4) = fVar1;
    if (fVar1 < (float)_DAT_362c9c6c != (fVar1 == (float)_DAT_362c9c6c)) {
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 800);
  return;
}

