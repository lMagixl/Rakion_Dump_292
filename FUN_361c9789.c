
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361c9789(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,float param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_78 [64];
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_4 != (undefined4 *)0x0) {
    local_28 = *param_4;
    local_20 = 0x3f800000;
    local_24 = param_4[1];
  }
  if (param_5 != (undefined4 *)0x0) {
    local_1c = *param_5;
    local_14 = 0;
    local_18 = param_5[1];
  }
  fVar5 = (float10)param_6;
  if (fVar5 != (float10)_DAT_3622376c) {
    local_38 = 0;
    local_34 = 0;
    fVar6 = (float10)fsin((float10)_DAT_3622e4f0 * fVar5);
    local_30 = (float)fVar6;
    fVar6 = (float10)fcos((float10)_DAT_3622e4f0 * fVar5);
    local_2c = (float)fVar6;
  }
  if (param_7 != (undefined4 *)0x0) {
    local_10 = *param_7;
    local_8 = 0;
    local_c = param_7[1];
  }
  if (fVar5 == (float10)_DAT_3622376c) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = &local_38;
  }
  uVar2 = -(uint)(param_7 != (undefined4 *)0x0) & (uint)&local_10;
  uVar3 = -(uint)(param_5 != (undefined4 *)0x0) & (uint)&local_1c;
  uVar4 = -(uint)(param_4 != (undefined4 *)0x0) & (uint)&local_28;
  uVar9 = 0;
  uVar8 = 0;
  puVar7 = local_78;
  thunk_FUN_361c66aa();
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2,param_3,local_78,param_8,puVar7,uVar8,uVar9,uVar4,uVar3,puVar1,uVar2);
  return;
}

