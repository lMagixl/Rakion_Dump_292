
void __thiscall FUN_361606d0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  iVar3 = 0;
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x20,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36036040);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  local_8 = FUN_36035f90(param_1);
  if ((local_8 != 0) && (FUN_36036300(this,local_8), 0 < local_8)) {
    do {
      puVar5 = (undefined4 *)(param_1[1] + iVar3);
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
      *puVar4 = *puVar5;
      puVar4[1] = puVar5[1];
      puVar4[2] = puVar5[2];
      puVar4[3] = puVar5[3];
      puVar4[4] = puVar5[4];
      puVar4[5] = puVar5[5];
      pcVar2 = StringDuplicate((char *)puVar5[6]);
      StringFree((char *)puVar4[6]);
      puVar4[6] = pcVar2;
      iVar3 = iVar3 + 0x20;
      local_8 = local_8 + -1;
      puVar4[7] = puVar5[7];
    } while (local_8 != 0);
  }
  return;
}

