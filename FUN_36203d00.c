
undefined4 * __cdecl
FUN_36203d00(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            byte param_6,char param_7,char param_8,int param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_74;
  int local_70 [3];
  undefined1 local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621d098;
  local_c = ExceptionList;
  local_74 = (undefined4 *)0x0;
  param_1 = (undefined4 *)param_4;
  puVar1 = puVar3;
  ExceptionList = &local_c;
  if (((char)param_9 != '\0') && (ExceptionList = &local_c, param_4 == 4)) {
    param_1 = (undefined4 *)0x3;
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_361bf99c(param_2 * param_3 * 3);
    local_74 = puVar1;
    if (0 < param_3) {
      param_9 = param_3;
      puVar2 = puVar1;
      do {
        iVar4 = param_2;
        puVar5 = puVar3;
        if (0 < param_2) {
          do {
            puVar3 = puVar5 + 1;
            *(undefined1 *)puVar2 = *(undefined1 *)((int)puVar5 + 2);
            *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)puVar5 + 1);
            *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)puVar5;
            puVar2 = (undefined4 *)((int)puVar2 + 3);
            iVar4 = iVar4 + -1;
            puVar5 = puVar3;
          } while (iVar4 != 0);
        }
        param_9 = param_9 + -1;
      } while (param_9 != 0);
    }
  }
  if (param_8 != '\0') {
    if (param_1 == (undefined4 *)0x4) {
      FUN_3620ba30((int)puVar1,param_2,param_3,param_6,param_7,param_7,param_7);
    }
    else {
      FUN_3620c030((int)puVar1,param_2,param_3,param_7,param_7,param_7);
    }
  }
  local_3c = (undefined4 *)0x0;
  local_40[0] = (char)param_9;
  local_38 = (undefined4 *)0x0;
  local_34 = 0;
  local_4 = 0;
  FUN_362040b0(local_40,(undefined4 *)0x0,(undefined4 *)0x0);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_64 = (char)param_9;
  local_60 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  local_58 = 0;
  local_18 = (undefined4 *)0x0;
  local_1c[0] = (char)param_9;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_362040b0(local_1c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  puVar3 = FUN_36204100(local_5c,local_5c,local_60);
  FUN_362040f0();
  local_5c = puVar3;
  puVar3 = FUN_36204100(local_38,local_38,local_3c);
  FUN_362040f0();
  local_38 = puVar3;
  puVar3 = FUN_36204100(local_14,local_14,local_18);
  FUN_362040f0();
  local_14 = puVar3;
  FUN_3620aaa0(puVar1,(int)&local_54,param_3,param_2,param_1,1,1,0x1000000);
  FUN_3620a510(&local_54,puVar1,local_70,param_2,param_3);
  if (param_5[4] == 0) {
    FUN_3620aaa0(puVar1,(int)param_5,param_3,param_2,param_1,1,1,0x100);
  }
  FUN_3620a040(param_5,&local_54,&local_30);
  puVar3 = malloc(param_2 * param_3);
  FUN_36209d10(&local_30,local_70,puVar3);
  if (local_74 != (undefined4 *)0x0) {
    operator_delete(local_74);
  }
  local_4._0_1_ = 2;
  FUN_36204080((int)local_1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_362040f0();
  operator_delete(local_60);
  local_60 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  local_58 = 0;
  operator_delete(local_3c);
  ExceptionList = local_c;
  return puVar3;
}

