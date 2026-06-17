
void __thiscall FUN_3615be60(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a0ab;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_3615b0f0(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar4 = param_1 + 1;
  ExceptionList = &local_c;
  piVar2 = (int *)thunk_FUN_361bf99c(iVar4 * 0x48 + 4);
  local_4 = 0;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    *piVar2 = iVar4;
    _eh_vector_constructor_iterator_
              (piVar3,0x48,iVar4,MeshSurface::MeshSurface,MeshSurface::~MeshSurface);
  }
  iVar4 = 0;
  local_4 = 0xffffffff;
  if (0 < *(int *)this) {
    iVar5 = 0;
    do {
      MeshSurface::operator=
                ((MeshSurface *)(iVar5 + (int)piVar3),
                 (MeshSurface *)(*(int *)((int)this + 4) + iVar5));
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x48;
    } while (iVar4 < *(int *)this);
  }
  pvVar1 = *(void **)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x48,*(int *)((int)pvVar1 + -4),MeshSurface::~MeshSurface);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  *(int **)((int)this + 4) = piVar3;
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}

