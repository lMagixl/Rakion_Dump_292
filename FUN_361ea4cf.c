
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361ea4cf(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,uint param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  undefined8 local_10 [2];
  
  FUN_361ea30b(local_20,param_2,param_5,param_6);
  FUN_361ea30b(local_10,param_3,param_4,param_6);
  uVar1 = (ulonglong)param_6;
  uVar2 = PackedFloatingMUL(uVar1,uVar1);
  uVar2 = PackedFloatingSUB(uVar1,uVar2);
  uVar2 = PackedFloatingMUL(uVar2,_DAT_3624b7a8);
  FUN_361ea30b(param_1,local_20,local_10,(uint)uVar2);
  FastExitMediaState();
  return;
}

