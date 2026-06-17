
void __thiscall FUN_36203590(void *this,int param_1,undefined *param_2)

{
  float *pfVar1;
  int iVar2;
  void *this_00;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  uint local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621d05b;
  pvStack_c = ExceptionList;
  pfVar1 = *(float **)((int)this + 0x34);
  local_18 = 1;
  pfVar4 = pfVar1;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar2 = *(int *)((int)this + 0x3c);
    pfVar5 = (float *)0x0;
    if ((iVar2 == 0) || ((uint)(*(int *)((int)this + 0x40) - iVar2 >> 2) <= local_18)) break;
    iVar2 = *(int *)(iVar2 + local_18 * 4);
    this_00 = (void *)FUN_361bf99c(0x1c);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      pfVar5 = (float *)FUN_36208d70(this_00,((int)*pfVar4 + 1) / 2,((int)pfVar4[1] + 1) / 2);
    }
    local_4 = 0xffffffff;
    if (((int)*pfVar4 < 5) || ((int)pfVar4[1] < 5)) {
      FUN_36202730(pfVar4,(int *)pfVar5);
    }
    else {
      FUN_36203530(pfVar4,pfVar5);
    }
    if ((pfVar4 != pfVar1) && (pfVar4 != (float *)0x0)) {
      FUN_36208e90((int)pfVar4);
      operator_delete(pfVar4);
    }
    uVar3 = FUN_362024f0((int *)pfVar5);
    *(undefined4 *)(iVar2 + 8 + param_1 * 4) = uVar3;
    if (param_2 != (undefined *)0x0) {
      (*(code *)param_2)(local_18);
    }
    local_18 = local_18 + 1;
    pfVar4 = pfVar5;
  }
  if ((pfVar4 != pfVar1) && (pfVar4 != (float *)0x0)) {
    FUN_36208e90((int)pfVar4);
    operator_delete(pfVar4);
  }
  ExceptionList = pvStack_c;
  return;
}

