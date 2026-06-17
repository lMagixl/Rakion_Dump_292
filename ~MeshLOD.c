
/* public: __thiscall MeshLOD::~MeshLOD(void) */

void __thiscall MeshLOD::~MeshLOD(MeshLOD *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x156780  531  ??1MeshLOD@@QAE@XZ */
  puStack_8 = &LAB_36219d88;
  local_c = ExceptionList;
  local_4 = 7;
  ExceptionList = &local_c;
  FUN_361565b0();
  local_4 = CONCAT31(local_4._1_3_,6);
  StringFree(*(char **)(this + 0x50));
  if (*(int *)(this + 0x30) != 0) {
    operator_delete__(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  local_4._0_1_ = 4;
  if (*(int *)(this + 0x28) != 0) {
    pvVar1 = *(void **)(this + 0x2c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x10,*(int *)((int)pvVar1 + -4),MeshMorphMap::~MeshMorphMap);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  local_4._0_1_ = 3;
  if (*(int *)(this + 0x20) != 0) {
    pvVar1 = *(void **)(this + 0x24);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0xc,*(int *)((int)pvVar1 + -4),MeshWeightMap::~MeshWeightMap);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  local_4._0_1_ = 2;
  if (*(int *)(this + 0x18) != 0) {
    pvVar1 = *(void **)(this + 0x1c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x48,*(int *)((int)pvVar1 + -4),MeshSurface::~MeshSurface);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)(this + 0x10) != 0) {
    pvVar1 = *(void **)(this + 0x14);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),MeshUVMap::~MeshUVMap);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)(this + 0xc));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)this != 0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  ExceptionList = local_c;
  return;
}

