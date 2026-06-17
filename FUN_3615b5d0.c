
void __thiscall FUN_3615b5d0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),MeshUVMap::~MeshUVMap);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = FUN_3615a240(param_1);
  if (iVar2 != 0) {
    FUN_3615b070(this,iVar2);
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        iVar3 = param_1[1] + iVar5;
        puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar5);
        *puVar4 = *(undefined4 *)(param_1[1] + iVar5);
        puVar4[1] = *(undefined4 *)(iVar3 + 4);
        FUN_36010290(puVar4 + 2,(undefined4 *)(iVar3 + 8));
        iVar5 = iVar5 + 0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

