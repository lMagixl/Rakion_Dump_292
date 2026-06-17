
/* WARNING: Removing unreachable block (ram,0x362034c8) */

void __fastcall FUN_36203400(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621d03b;
  local_c = ExceptionList;
  local_4 = 0;
  iVar4 = 0xc;
  puVar3 = param_1;
  ExceptionList = &local_c;
  do {
    puVar1 = (undefined4 *)*puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_36208cb0(puVar1);
      operator_delete(puVar1);
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  for (local_14 = 1;
      (iVar4 = param_1[0xf], iVar4 != 0 && (local_14 < (uint)(param_1[0x10] - iVar4 >> 2)));
      local_14 = local_14 + 1) {
    pvVar2 = *(void **)(iVar4 + local_14 * 4);
    iVar4 = 5;
    puVar3 = (undefined4 *)((int)pvVar2 + 8);
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        operator_delete((void *)*puVar3);
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    operator_delete(pvVar2);
  }
  operator_delete((void *)param_1[0xc]);
  operator_delete(*(void **)param_1[0xf]);
  param_1[0x10] = param_1[0xf];
  pvVar2 = (void *)param_1[0xd];
  if (pvVar2 != (void *)0x0) {
    FUN_36208e90((int)pvVar2);
    operator_delete(pvVar2);
  }
  operator_delete((void *)param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return;
}

