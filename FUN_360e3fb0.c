
float * FUN_360e3fb0(undefined4 *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c [5];
  float local_88;
  CListHead local_84 [20];
  CListHead local_70 [20];
  float local_5c [4];
  CListHead local_4c [20];
  undefined4 local_38;
  float local_34 [4];
  CListHead local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215799;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_360df050(param_1,0);
  local_ac = *pfVar2;
  local_a8 = pfVar2[1];
  local_a4 = pfVar2[2];
  local_a0 = pfVar2[3];
  FUN_360e16f0(local_9c,pfVar2 + 4);
  local_88 = pfVar2[9];
  local_4 = 0;
  FUN_360df030(local_84);
  local_4._0_1_ = 1;
  FUN_360df030(local_70);
  iVar8 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar3 = FUN_360df090((int)param_1);
  if (0 < iVar3) {
    do {
      FUN_360dec80(local_24);
      local_10 = 0xffffffff;
      local_4._0_1_ = 4;
      FUN_360dec80(local_4c);
      local_38 = 0xffffffff;
      local_4 = CONCAT31(local_4._1_3_,5);
      iVar3 = FUN_360df050(param_1,iVar8);
      fVar1 = local_88;
      if (*(float *)(iVar3 + 0x24) != local_88) {
        pfVar2 = (float *)FUN_360df050(param_1,iVar8);
        iVar3 = FUN_360e30e0(pfVar2,&local_ac,fVar1,local_34,local_5c);
        if (iVar3 == 0) {
          iVar3 = FUN_360defb0((int)local_24);
          if (0 < iVar3) {
            piVar4 = FUN_360e3c10(local_84,1);
            FUN_360dfc70(piVar4 + 4,local_24);
            piVar5 = (int *)FUN_360df050(param_1,iVar8);
            *piVar4 = *piVar5;
            piVar4[1] = piVar5[1];
            piVar4[2] = piVar5[2];
            piVar4[3] = piVar5[3];
            iVar3 = FUN_360df050(param_1,iVar8);
            piVar4[9] = *(int *)(iVar3 + 0x24);
          }
          iVar3 = FUN_360defb0((int)local_4c);
          if (0 < iVar3) {
            piVar4 = FUN_360e3c10(local_70,1);
            FUN_360dfc70(piVar4 + 4,local_4c);
            piVar5 = (int *)FUN_360df050(param_1,iVar8);
            *piVar4 = *piVar5;
            piVar4[1] = piVar5[1];
            piVar4[2] = piVar5[2];
            piVar4[3] = piVar5[3];
            iVar3 = FUN_360df050(param_1,iVar8);
            piVar4[9] = *(int *)(iVar3 + 0x24);
          }
        }
      }
      local_4._0_1_ = 4;
      thunk_FUN_360e0d40((undefined4 *)local_4c);
      local_4 = CONCAT31(local_4._1_3_,3);
      thunk_FUN_360e0d40((undefined4 *)local_24);
      iVar8 = iVar8 + 1;
      iVar3 = FUN_360df090((int)param_1);
    } while (iVar8 < iVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_360e3410(param_1);
  iVar3 = FUN_360df090((int)local_84);
  if (iVar3 < 1) {
    pfVar2 = (float *)FUN_361bf99c(0x20);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)0x0;
    }
    else {
      pfVar2[4] = 1.4013e-45;
      pfVar2[5] = 0.0;
      pfVar2[6] = 0.0;
    }
  }
  else {
    pfVar2 = FUN_360e3fb0((undefined4 *)local_84);
  }
  iVar3 = FUN_360df090((int)local_70);
  if (iVar3 < 1) {
    pfVar6 = (float *)FUN_361bf99c(0x20);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)0x0;
    }
    else {
      pfVar6[4] = 2.8026e-45;
      pfVar6[5] = 0.0;
      pfVar6[6] = 0.0;
    }
  }
  else {
    pfVar6 = FUN_360e3fb0((undefined4 *)local_70);
  }
  pfVar7 = (float *)FUN_361bf99c(0x20);
  if (pfVar7 == (float *)0x0) {
    pfVar7 = (float *)0x0;
  }
  else {
    *pfVar7 = local_ac;
    pfVar7[1] = local_a8;
    pfVar7[2] = local_a4;
    pfVar7[6] = (float)pfVar6;
    pfVar7[3] = local_a0;
    pfVar7[4] = 4.2039e-45;
    pfVar7[5] = (float)pfVar2;
    pfVar7[7] = local_88;
  }
  local_4._0_1_ = 1;
  thunk_FUN_360e3410((undefined4 *)local_70);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_360e3410((undefined4 *)local_84);
  local_4 = 0xffffffff;
  thunk_FUN_360e0d40(local_9c);
  ExceptionList = local_c;
  return pfVar7;
}

