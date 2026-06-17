
/* WARNING: Removing unreachable block (ram,0x36203310) */

undefined4 * __thiscall
FUN_362032d0(void *this,undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  void *this_00;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_2;
  puVar6 = param_1;
  puStack_8 = &LAB_3621d026;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x38) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  FUN_36203210(this);
  puVar2 = (undefined1 *)FUN_361bf99c(param_2 * param_3 * 4);
  *(undefined1 **)((int)this + 0x30) = puVar2;
  if (0 < param_3) {
    param_1 = (undefined1 *)param_3;
    do {
      puVar4 = puVar6;
      param_2 = iVar1;
      if (0 < iVar1) {
        do {
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          puVar5 = puVar4 + 3;
          if (param_5 == 4) {
            puVar2[3] = *puVar5;
            puVar5 = puVar4 + 4;
          }
          else {
            puVar2[3] = 0xff;
          }
          puVar2 = puVar2 + 4;
          param_2 = param_2 + -1;
          puVar4 = puVar5;
        } while (param_2 != 0);
      }
      puVar6 = puVar6 + param_4;
      param_1 = param_1 + -1;
    } while (param_1 != (undefined1 *)0x0);
  }
  this_00 = (void *)FUN_361bf99c(0x1c);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_36208d70(this_00,iVar1,param_3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(int **)((int)this + 0x34) = piVar3;
  FUN_36202630(*(int *)((int)this + 0x30),piVar3);
  FUN_36202ae0((int)this);
  ExceptionList = local_c;
  return this;
}

