
void __thiscall FUN_360164a0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x70,*(int *)((int)pvVar1 + -4),MappingSurface::~MappingSurface);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = FUN_3600c0e0(param_1);
  if (iVar2 != 0) {
    FUN_3600c050(this,iVar2);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        MappingSurface::operator=
                  ((MappingSurface *)(*(int *)((int)this + 4) + iVar3),
                   (MappingSurface *)(param_1[1] + iVar3));
        iVar3 = iVar3 + 0x70;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

