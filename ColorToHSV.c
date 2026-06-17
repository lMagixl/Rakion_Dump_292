
/* void __cdecl ColorToHSV(unsigned long,unsigned char &,unsigned char &,unsigned char &) */

void __cdecl ColorToHSV(ulong param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  
                    /* 0x62dd0  1343  ?ColorToHSV@@YAXKAAE00@Z */
  uVar2 = param_1;
  bVar3 = (byte)(param_1 >> 0x10);
  uVar10 = param_1 >> 0x18;
  bVar9 = (byte)(param_1 >> 0x18);
  uVar6 = param_1 >> 8;
  *param_2 = '\0';
  param_1 = (ulong)bVar3;
  bVar5 = (byte)(uVar2 >> 8);
  *param_3 = '\0';
  bVar8 = bVar3;
  if (bVar3 <= bVar9) {
    bVar8 = bVar9;
  }
  if (bVar8 < bVar5) {
    bVar8 = bVar5;
  }
  *param_4 = bVar8;
  if (1 < bVar8) {
    bVar4 = bVar3;
    if (bVar9 <= bVar3) {
      bVar4 = bVar9;
    }
    if (bVar4 <= bVar5) {
      uVar6 = (uint)bVar4;
    }
    iVar7 = (uint)bVar8 - (uVar6 & 0xff);
    if (0 < iVar7) {
      iVar1 = iVar7 * 2;
      *param_3 = (uchar)((iVar7 * 0xff) / (int)(uint)bVar8);
      if (bVar9 == *param_4) {
        *param_2 = (uchar)((int)((param_1 - bVar5) * 0x55) / iVar1);
        return;
      }
      if (bVar3 == *param_4) {
        *param_2 = (char)((int)((bVar5 - uVar10) * 0x55) / iVar1) + 'U';
        return;
      }
      *param_2 = (char)((int)((uVar10 - param_1) * 0x55) / iVar1) + 0xaa;
    }
  }
  return;
}

