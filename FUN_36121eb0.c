
void * __thiscall FUN_36121eb0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  FUN_3611fc40(this,param_1);
  pvVar1 = FUN_36120d60(this,param_1);
  if (0 < param_1) {
    iVar2 = iVar2 * 4;
    pvVar3 = pvVar1;
    do {
      *(void **)(iVar2 + *(int *)((int)this + 0xc)) = pvVar3;
      iVar2 = iVar2 + 4;
      pvVar3 = (void *)((int)pvVar3 + 0x20);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return pvVar1;
}

