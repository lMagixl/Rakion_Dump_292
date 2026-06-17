
undefined4 * __fastcall FUN_3619d4c0(undefined4 *param_1)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  uintptr_t uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_1c;
  undefined4 *local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b3cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &ThreadBase<0,10>::_vftable_;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  local_18 = param_1;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[3] = pvVar1;
  local_4 = 0;
  *param_1 = &PTR_onEvent_36242fe8;
  iVar2 = FUN_3619d340();
  param_1[6] = iVar2;
  *(undefined1 *)(iVar2 + 0x11) = 1;
  *(undefined4 *)(param_1[6] + 4) = param_1[6];
  *(undefined4 *)param_1[6] = param_1[6];
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  local_4._0_1_ = 1;
  uVar3 = thunk_FUN_361bf99c(0x40000);
  param_1[8] = uVar3;
  local_4._0_1_ = 2;
  uVar3 = thunk_FUN_361bf99c(0x8000);
  param_1[9] = uVar3;
  local_4._0_1_ = 3;
  uVar3 = thunk_FUN_361bf99c(0x8000);
  param_1[10] = uVar3;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  local_4 = CONCAT31(local_4._1_3_,5);
  DVar4 = GetTickCount();
  srand_(DVar4);
  puVar6 = (undefined4 *)param_1[8];
  for (iVar2 = 0x10000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)param_1[9];
  for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)param_1[10];
  for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar7 = 0;
  do {
    FUN_3619d220(param_1,uVar7);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x2000);
  local_1c = 0;
  do {
    uVar7 = local_1c;
    FUN_36016c40(param_1 + 5,local_14,&local_1c);
    local_1c = uVar7 + 1;
  } while (local_1c < 0x10000);
  iVar2 = rand_();
  param_1[0xc] = iVar2;
  param_1[4] = 1;
  uVar5 = _beginthreadex((void *)0x0,0,ThreadBase<0,10>::mainThread,param_1,0,param_1 + 1);
  param_1[2] = uVar5;
  ExceptionList = local_c;
  return param_1;
}

