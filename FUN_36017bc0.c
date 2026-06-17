
void __thiscall FUN_36017bc0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_36010a40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar3 = FUN_3600caa0(param_1);
  if (iVar3 != 0) {
    FUN_36014780(this,iVar3);
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        iVar2 = param_1[1];
        puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar5);
        *puVar4 = *(undefined4 *)(iVar2 + iVar5);
        FUN_36010b30(puVar4 + 1,(undefined4 *)(iVar2 + iVar5 + 4));
        iVar5 = iVar5 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

