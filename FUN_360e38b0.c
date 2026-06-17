
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360e38b0(void *this,float *param_1,float *param_2)

{
  CListHead *pCVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 uStack_1c8;
  float local_1a0;
  float local_19c [4];
  CListHead local_18c [20];
  undefined4 local_178;
  float local_174 [4];
  CListHead local_164 [20];
  undefined4 local_150;
  undefined1 local_14c [16];
  undefined4 local_13c [6];
  undefined1 local_124 [16];
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
  puStack_8 = &LAB_362156ba;
  local_c = ExceptionList;
  pCVar1 = (CListHead *)(param_1 + 4);
  ExceptionList = &local_c;
  iVar3 = FUN_360defb0((int)pCVar1);
  if (iVar3 != 0) {
    fVar2 = param_2[4];
    if (fVar2 == 1.4013e-45) {
      FUN_360dfc70(this,pCVar1);
    }
    else if (fVar2 == 2.8026e-45) {
      FUN_360dfc70((void *)((int)this + 0x14),pCVar1);
    }
    else if (fVar2 == 4.2039e-45) {
      FUN_360dec80(local_164);
      local_150 = 0xffffffff;
      local_4 = 0;
      FUN_360dec80(local_18c);
      local_178 = 0xffffffff;
      local_4._0_1_ = 1;
      uStack_1c8 = 0x360e3967;
      iVar3 = FUN_360e30e0(param_1,param_2,param_2[7],local_174,local_19c);
      if (iVar3 == 0) {
        FUN_360e38b0(this,local_174,(float *)param_2[5]);
        FUN_360e38b0(this,local_19c,(float *)param_2[6]);
      }
      else {
        fVar2 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
        if (fVar2 <= _DAT_362a29a0 * (float)_DAT_36232860) {
          fVar4 = local_1a0;
          if (fVar2 < _DAT_362a29a0 * (float)_DAT_36232878) {
            local_1a0 = param_2[6];
            fVar4 = param_2[5];
          }
        }
        else {
          local_1a0 = param_2[5];
          fVar4 = param_2[6];
        }
        FUN_360e3b80(local_5c,param_1,local_1a0);
        local_4._0_1_ = 2;
        FUN_360e16f0(&uStack_1c8,local_5c);
        FUN_360e1a50(local_124,param_1);
        local_4._0_1_ = 3;
        FUN_360e3b80(local_ac,local_124,fVar4);
        local_4._0_1_ = 4;
        FUN_360e16f0(&uStack_1c8,local_48);
        FUN_360e1a50(local_14c,param_1);
        local_4._0_1_ = 5;
        FUN_360e3b80(local_fc,local_14c,fVar4);
        local_4._0_1_ = 6;
        FUN_360dfc70(this,local_ac);
        FUN_360dfc70((void *)((int)this + 0x14),local_e8);
        FUN_360dfc70((void *)((int)this + 0x28),local_98);
        FUN_360dfc70((void *)((int)this + 0x3c),local_fc);
        local_4._0_1_ = 5;
        FUN_360e17f0((undefined4 *)local_fc);
        local_4._0_1_ = 4;
        thunk_FUN_360e0d40(local_13c);
        local_4._0_1_ = 3;
        FUN_360e17f0((undefined4 *)local_ac);
        local_4._0_1_ = 2;
        thunk_FUN_360e0d40(local_114);
        local_4._0_1_ = 1;
        FUN_360e17f0(local_5c);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      thunk_FUN_360e0d40((undefined4 *)local_18c);
      local_4 = 0xffffffff;
      thunk_FUN_360e0d40((undefined4 *)local_164);
    }
  }
  ExceptionList = local_c;
  return;
}

