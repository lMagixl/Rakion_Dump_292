
void __fastcall FUN_36030760(int param_1)

{
  void *pvVar1;
  char *pcVar2;
  
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  StringFree(*(char **)(param_1 + 8));
  *(char **)(param_1 + 8) = pcVar2;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  StringFree(*(char **)(param_1 + 0xc));
  *(char **)(param_1 + 0xc) = pcVar2;
  if (*(int *)(param_1 + 0x10) != 0) {
    pvVar1 = *(void **)(param_1 + 0x14);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,8,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3600bb40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    pvVar1 = *(void **)(param_1 + 0x1c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x20,*(int *)((int)pvVar1 + -4),FUN_3600bb50);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

