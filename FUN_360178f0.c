
void __thiscall FUN_360178f0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  
  iVar3 = 0;
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),CInputDevice::~CInputDevice);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  local_8 = FUN_3600aa00(param_1);
  if ((local_8 != 0) && (FUN_3600bca0(this,local_8), 0 < local_8)) {
    do {
      iVar5 = param_1[1] + iVar3;
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
      *puVar4 = *(undefined4 *)(param_1[1] + iVar3);
      puVar4[1] = *(undefined4 *)(iVar5 + 4);
      puVar4[2] = *(undefined4 *)(iVar5 + 8);
      pcVar2 = StringDuplicate(*(char **)(iVar5 + 0xc));
      StringFree((char *)puVar4[3]);
      puVar4[3] = pcVar2;
      pcVar2 = StringDuplicate(*(char **)(iVar5 + 0x10));
      StringFree((char *)puVar4[4]);
      puVar4[4] = pcVar2;
      FUN_36013e90(puVar4 + 5,(undefined4 *)(iVar5 + 0x14));
      iVar3 = iVar3 + 0x1c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

