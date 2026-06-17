
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360e3550(void *this,double *param_1,double *param_2)

{
  CListHead *pCVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uStack_208;
  double *local_1e0;
  double local_1dc [4];
  CListHead local_1bc [20];
  undefined4 local_1a8;
  double local_1a4 [4];
  CListHead local_184 [20];
  undefined4 local_170;
  double local_16c [4];
  undefined4 local_14c [6];
  double local_134 [4];
  undefined4 local_114 [6];
  CListHead local_fc [20];
  CListHead local_e8 [60];
  CListHead local_ac [20];
  CListHead local_98 [60];
  undefined4 local_5c [5];
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621561a;
  local_c = ExceptionList;
  pCVar1 = (CListHead *)(param_1 + 4);
  ExceptionList = &local_c;
  iVar3 = FUN_3604b9e0((int)pCVar1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_2 + 4);
    if (iVar3 == 1) {
      FUN_3604bda0(this,pCVar1);
    }
    else if (iVar3 == 2) {
      FUN_3604bda0((void *)((int)this + 0x14),pCVar1);
    }
    else if (iVar3 == 3) {
      FUN_3604b9a0(local_184);
      local_170 = 0xffffffff;
      local_4 = 0;
      FUN_3604b9a0(local_1bc);
      local_1a8 = 0xffffffff;
      local_4._0_1_ = 1;
      uStack_208 = 0x360e360a;
      iVar3 = FUN_360e24d0(param_1,param_2,*(undefined4 *)((int)param_2 + 0x2c),
                           (undefined4 *)local_1a4,(undefined4 *)local_1dc);
      if (iVar3 == 0) {
        FUN_360e3550(this,local_1a4,*(double **)((int)param_2 + 0x24));
        FUN_360e3550(this,local_1dc,*(double **)(param_2 + 5));
      }
      else {
        dVar2 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
        if (dVar2 <= (double)_DAT_362a29a0 * _DAT_36232860) {
          pdVar4 = local_1e0;
          if (dVar2 < (double)_DAT_362a29a0 * _DAT_36232878) {
            local_1e0 = *(double **)(param_2 + 5);
            pdVar4 = *(double **)((int)param_2 + 0x24);
          }
        }
        else {
          local_1e0 = *(double **)((int)param_2 + 0x24);
          pdVar4 = *(double **)(param_2 + 5);
        }
        FUN_360e3830(local_5c,param_1,local_1e0);
        local_4._0_1_ = 2;
        FUN_3604cf00(&uStack_208,local_5c);
        FUN_3604cf80(local_134,(undefined4 *)param_1);
        local_4._0_1_ = 3;
        FUN_360e3830(local_ac,local_134,pdVar4);
        local_4._0_1_ = 4;
        FUN_3604cf00(&uStack_208,local_48);
        FUN_3604cf80(local_16c,(undefined4 *)param_1);
        local_4._0_1_ = 5;
        FUN_360e3830(local_fc,local_16c,pdVar4);
        local_4._0_1_ = 6;
        FUN_3604bda0(this,local_ac);
        FUN_3604bda0((void *)((int)this + 0x14),local_e8);
        FUN_3604bda0((void *)((int)this + 0x28),local_98);
        FUN_3604bda0((void *)((int)this + 0x3c),local_fc);
        local_4._0_1_ = 5;
        FUN_360e15a0((undefined4 *)local_fc);
        local_4._0_1_ = 4;
        thunk_FUN_3604c3a0(local_14c);
        local_4._0_1_ = 3;
        FUN_360e15a0((undefined4 *)local_ac);
        local_4._0_1_ = 2;
        thunk_FUN_3604c3a0(local_114);
        local_4._0_1_ = 1;
        FUN_360e15a0(local_5c);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      thunk_FUN_3604c3a0((undefined4 *)local_1bc);
      local_4 = 0xffffffff;
      thunk_FUN_3604c3a0((undefined4 *)local_184);
    }
  }
  ExceptionList = local_c;
  return;
}

