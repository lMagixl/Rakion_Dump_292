
void __thiscall FUN_361a8a70(void *this,int param_1,int param_2)

{
  void *pvVar1;
  _String_base *p_Var2;
  undefined4 *puVar3;
  uint unaff_EDI;
  undefined4 in_stack_ffffff40;
  void *in_stack_ffffff44;
  void *in_stack_ffffff48;
  undefined1 *local_90 [2];
  _String_base local_88 [4];
  void *local_84;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined1 local_68 [8];
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [4];
  void *local_44;
  uint local_30;
  undefined1 local_2c [4];
  void *local_28;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bc83;
  local_c = ExceptionList;
  if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
    ExceptionList = &local_c;
    p_Var2 = FUN_361a7d20(local_48,(_String_base *)((int)this + 4),param_1);
    local_90[0] = &stack0xffffff44;
    local_4 = 0;
    FUN_361a7dd0(&stack0xffffff44,p_Var2,(_String_base *)&DAT_3624373c);
    puVar3 = FUN_361a7b90(local_68,*(undefined4 *)this,in_stack_ffffff44,in_stack_ffffff48);
    local_4._0_1_ = 1;
    FUN_361a8c40((void *)param_2,param_1,puVar3);
    pvVar1 = local_60;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_4c) {
      FUN_36018c30();
      operator_delete(pvVar1);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    pvVar1 = local_44;
    local_14 = local_30;
  }
  else {
    local_90[0] = &stack0xffffff40;
    ExceptionList = &local_c;
    FUN_361a7d20(&stack0xffffff40,(_String_base *)((int)this + 4),param_1);
    p_Var2 = FUN_361a7e90(local_2c,in_stack_ffffff40,in_stack_ffffff44);
    local_4 = 2;
    local_70 = 0xf;
    local_74 = 0;
    local_84 = (void *)((uint)local_84 & 0xffffff00);
    FUN_3601cb20(local_88,p_Var2,0,0xffffffff,unaff_EDI);
    local_6c = *(undefined4 *)(p_Var2 + 0x1c);
    local_4._0_1_ = 3;
    FUN_361a8630(*(void **)this,(int *)local_90,local_88);
    pvVar1 = local_84;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0xf < local_70) {
      FUN_36018c30();
      operator_delete(pvVar1);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = (void *)((uint)local_84 & 0xffffff00);
    pvVar1 = local_28;
  }
  if (0xf < local_14) {
    local_4 = 0xffffffff;
    FUN_36018c30();
    operator_delete(pvVar1);
  }
  ExceptionList = local_c;
  return;
}

