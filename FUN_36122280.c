
void __thiscall FUN_36122280(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x38,*(int *)((int)pvVar1 + -4),COneLensFlare::~COneLensFlare);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = FUN_3611f5f0(param_1);
  if ((iVar2 != 0) && (FUN_36120010(this,iVar2), 0 < iVar2)) {
    iVar5 = 0;
    do {
      iVar3 = param_1[1] + iVar5;
      iVar4 = *(int *)((int)this + 4) + iVar5;
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_1[1] + 0x18 + iVar5);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar3 + 0x30);
      iVar5 = iVar5 + 0x38;
      iVar2 = iVar2 + -1;
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar3 + 0x34);
    } while (iVar2 != 0);
  }
  return;
}

