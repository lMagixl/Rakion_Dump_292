
/* public: void __thiscall CModelInstance::RemoveColisionBox(long) */

void __thiscall CModelInstance::RemoveColisionBox(CModelInstance *this,long param_1)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_24;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15e200  3126  ?RemoveColisionBox@CModelInstance@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a1bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_36035f90((undefined4 *)(this + 0x1c));
  iVar4 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  FUN_36036300(&local_14,iVar2 + -1);
  local_24 = 0;
  if (0 < iVar2) {
    puVar6 = (undefined4 *)((int)local_10 + 0x18);
    do {
      if (param_1 != local_24) {
        puVar5 = (undefined4 *)(*(int *)(this + 0x20) + iVar4);
        puVar6[-6] = *puVar5;
        puVar6[-5] = puVar5[1];
        puVar6[-4] = puVar5[2];
        puVar6[-3] = puVar5[3];
        puVar6[-2] = puVar5[4];
        puVar6[-1] = puVar5[5];
        pcVar3 = StringDuplicate((char *)puVar5[6]);
        StringFree((char *)*puVar6);
        *puVar6 = pcVar3;
        puVar6[1] = puVar5[7];
        puVar6 = puVar6 + 8;
      }
      local_24 = local_24 + 1;
      iVar4 = iVar4 + 0x20;
    } while (local_24 < iVar2);
  }
  FUN_361606d0(this + 0x1c,&local_14);
  local_4 = 0xffffffff;
  if ((local_14 != 0) && (local_10 != (void *)0x0)) {
    pvVar1 = (void *)((int)local_10 + -4);
    _eh_vector_destructor_iterator_
              (local_10,0x20,*(int *)((int)local_10 + -4),(_func_void_void_ptr *)&LAB_36036040);
    operator_delete__(pvVar1);
  }
  ExceptionList = local_c;
  return;
}

