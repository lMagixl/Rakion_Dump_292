
void __thiscall FUN_360140c0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x54,*(int *)((int)pvVar1 + -4),MeshLOD::~MeshLOD);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = FUN_3600c4f0(param_1);
  if (iVar2 != 0) {
    FUN_3600c460(this,iVar2);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        MeshLOD::operator=((MeshLOD *)(*(int *)((int)this + 4) + iVar3),
                           (MeshLOD *)(param_1[1] + iVar3));
        iVar3 = iVar3 + 0x54;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

