
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36031640(void *this,undefined4 param_1,int param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *this_00;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fa10;
  local_c = ExceptionList;
  if (DAT_362bef9c != 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_360315d0(this,param_2);
    local_4 = 0;
    puVar2 = (undefined4 *)FUN_360315d0(this_00,(int)this);
    local_4._0_1_ = 1;
    CPrintF(s__20_20s___5_2fs__10s__10s___10_1_362255e4,param_1,(double)param_3,*puVar2,*puVar1,
            (double)((float)((int)this >> 10) * (_DAT_36223384 / param_3)),
            (double)((float)(param_2 >> 10) * (_DAT_36223384 / param_3)));
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
    local_4 = 0xffffffff;
    StringFree(local_10);
  }
  ExceptionList = local_c;
  return;
}

