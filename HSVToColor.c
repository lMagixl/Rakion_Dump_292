
/* unsigned long __cdecl HSVToColor(unsigned char,unsigned char,unsigned char) */

ulong __cdecl HSVToColor(uchar param_1,uchar param_2,uchar param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
                    /* 0x62910  2225  ?HSVToColor@@YAKEEE@Z */
  if (1 < param_2) {
    uVar5 = (uint)param_2;
    uVar7 = (uint)param_3;
    uVar8 = (uint)param_1 * 0x600 & 0xffff;
    iVar4 = (0x100 - ((int)(uVar5 * uVar8) >> 0x10)) * uVar7;
    iVar2 = (0x100 - uVar5) * uVar7;
    iVar6 = (0x100 - ((int)((0x10000 - uVar8) * uVar5) >> 0x10)) * uVar7;
    uVar5 = iVar2 >> 8;
    uVar8 = iVar6 >> 8;
    uVar3 = (undefined1)((uint)iVar4 >> 8);
    uVar1 = (undefined1)((uint)iVar2 >> 8);
    switch((int)((uint)param_1 * 0x600) >> 0x10) {
    case 0:
      return ((uVar7 << 8 | uVar8 & 0xff) << 8 | uVar5 & 0xff) << 8;
    case 1:
      return ((uint)CONCAT11(uVar3,param_3) << 8 | uVar5 & 0xff) << 8;
    case 2:
      return ((uint)CONCAT11(uVar1,param_3) << 8 | uVar8 & 0xff) << 8;
    case 3:
      return (uint)CONCAT21(CONCAT11(uVar1,uVar3),param_3) << 8;
    case 4:
      return (uint)CONCAT21(CONCAT11((char)((uint)iVar6 >> 8),uVar1),param_3) << 8;
    case 5:
      return ((uVar7 << 8 | uVar5 & 0xff) << 8 | iVar4 >> 8 & 0xffU) << 8;
    default:
      return 0;
    }
  }
  return (uint)CONCAT21(CONCAT11(param_3,param_3),param_3) << 8;
}

