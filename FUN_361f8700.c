
void FUN_361f8700(void)

{
  ulonglong in_MM0;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((int)((uint)in_MM0 ^ (uint)in_MM0 & 0x80000000) < DAT_362ae814) {
    uVar1 = PackedFloatingMUL(in_MM0 & DAT_362ae75c,(ulonglong)DAT_362ae810);
    uVar2 = PackedFloatingToIntDwordConv(uVar1,uVar1);
    uVar1 = PackedIntToFloatingDwordConv(uVar2,uVar2);
    uVar1 = PackedFloatingMUL(CONCAT44((int)uVar1,(int)uVar1),DAT_362ae720);
    uVar4 = PackedFloatingADD(in_MM0 & DAT_362ae75c,uVar1);
    uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = PackedFloatingADD(uVar4,CONCAT44(uVar3,uVar3));
    uVar1 = CONCAT44((int)uVar1,(int)uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = PackedFloatingSUBR(uVar1,DAT_362ae730);
    }
    uVar4 = PackedFloatingMUL(uVar1,uVar1);
    uVar6 = PackedFloatingMUL(DAT_362ae728,uVar4);
    uVar5 = PackedFloatingMUL(DAT_362ae738,uVar4);
    uVar7 = PackedFloatingADD(uVar6,DAT_362ae6d8);
    uVar6 = PackedFloatingMUL(DAT_362ae740,uVar4);
    uVar5 = PackedFloatingMUL(uVar7,uVar5);
    uVar7 = PackedFloatingADD(uVar5,DAT_362ae6d8);
    uVar5 = PackedFloatingMUL(DAT_362ae748,uVar4);
    uVar4 = PackedFloatingMUL(uVar6,uVar7);
    uVar4 = PackedFloatingADD(uVar4,DAT_362ae6d8);
    uVar4 = PackedFloatingMUL(uVar4,CONCAT44((int)DAT_362ae6d8,(int)uVar5));
    uVar4 = PackedFloatingADD(uVar4,DAT_362ae6d8 >> 0x20);
    PackedFloatingMUL(uVar4,CONCAT44((int)uVar1,(int)DAT_362ae6d8));
  }
  return;
}

