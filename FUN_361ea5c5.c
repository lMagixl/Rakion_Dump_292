
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361ea5c5(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 in_MM4;
  undefined8 uVar7;
  
  FastExitMediaState();
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = (undefined4)(uVar4 >> 0x20);
  uVar5 = PackedFloatingCompareGE(CONCAT44(uVar6,uVar6),_DAT_3624b828);
  if ((int)uVar5 == 0) {
    uVar1 = FUN_361f8000();
    uVar2 = FUN_361f8700();
    uVar5 = PackedFloatingCompareGE(uVar2 & _DAT_3624b7e0,DAT_3624b7e8);
    uVar3 = *param_2;
    uVar4 = param_2[1];
    if ((int)uVar5 != 0) {
      uVar7 = FloatingReciprocalAprox(in_MM4,uVar2);
      uVar5 = PackedFloatingReciprocalIter1(uVar2,uVar7);
      uVar5 = PackedFloatingReciprocalIter2(uVar5,uVar7);
      uVar5 = PackedFloatingMUL(CONCAT44((int)uVar1,(int)uVar1),uVar5);
      uVar3 = PackedFloatingMUL(uVar3,uVar5);
      uVar4 = PackedFloatingMUL(uVar4,uVar5);
    }
  }
  uVar4 = uVar4 & _DAT_3624b7f0;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  FastExitMediaState();
  return;
}

