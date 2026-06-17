
ulonglong FUN_361f85e0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_MM0;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = (uint)in_MM0;
  if ((int)(uVar1 ^ uVar1 & 0x80000000) < DAT_362ae814) {
    uVar5 = PackedFloatingMUL(in_MM0 & DAT_362ae75c,(ulonglong)DAT_362ae810);
    uVar4 = PackedFloatingToIntDwordConv(uVar5,uVar5);
    uVar2 = (uint)uVar4;
    uVar5 = PackedIntToFloatingDwordConv(uVar4,uVar4);
    uVar5 = PackedFloatingMUL(CONCAT44((int)uVar5,(int)uVar5),DAT_362ae720);
    uVar7 = PackedFloatingADD(in_MM0 & DAT_362ae75c,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = PackedFloatingADD(uVar7,CONCAT44(uVar6,uVar6));
    uVar5 = CONCAT44((int)uVar5,(int)uVar5);
    if ((uVar4 & 1) != 0) {
      uVar5 = PackedFloatingSUBR(uVar5,DAT_362ae730);
    }
    iVar3 = (uVar1 >> 0x1f ^ uVar2 >> 2) << 0x1f;
    uVar7 = PackedFloatingMUL(uVar5,uVar5);
    uVar9 = PackedFloatingMUL(DAT_362ae728,uVar7);
    uVar8 = PackedFloatingMUL(DAT_362ae738,uVar7);
    uVar10 = PackedFloatingADD(uVar9,DAT_362ae6d8);
    uVar9 = PackedFloatingMUL(DAT_362ae740,uVar7);
    uVar8 = PackedFloatingMUL(uVar10,uVar8);
    uVar10 = PackedFloatingADD(uVar8,DAT_362ae6d8);
    uVar8 = PackedFloatingMUL(DAT_362ae748,uVar7);
    uVar7 = PackedFloatingMUL(uVar9,uVar10);
    uVar7 = PackedFloatingADD(uVar7,DAT_362ae6d8);
    uVar7 = PackedFloatingMUL(uVar7,CONCAT44((int)DAT_362ae6d8,(int)uVar8));
    uVar7 = PackedFloatingADD(uVar7,DAT_362ae6d8 >> 0x20);
    uVar4 = PackedFloatingMUL(uVar7,CONCAT44((int)uVar5,(int)DAT_362ae6d8));
    if (((uVar2 ^ uVar2 >> 1) & 1) != 0) {
      uVar4 = CONCAT44((int)uVar4,(int)(uVar4 >> 0x20));
    }
    uVar4 = CONCAT44(iVar3,iVar3) ^ uVar4 ^ (uVar1 & 0x80000000 ^ (uVar2 >> 1) << 0x1f);
  }
  else {
    uVar4 = (ulonglong)DAT_362ae768;
  }
  return uVar4;
}

