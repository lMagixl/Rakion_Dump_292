
/* public: __thiscall ModelMipInfo::~ModelMipInfo(void) */

void __thiscall ModelMipInfo::~ModelMipInfo(ModelMipInfo *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xb9c30  536  ??1ModelMipInfo@@QAE@XZ */
  puStack_8 = &LAB_362140b1;
  local_c = ExceptionList;
  local_4 = 7;
  ExceptionList = &local_c;
  Clear(this);
  if (*(int *)(this + 0x50) != 0) {
    operator_delete__(*(void **)(this + 0x54));
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 0x40) != 0) {
    operator_delete__(*(void **)(this + 0x44));
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    operator_delete__(*(void **)(this + 0x3c));
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  if (*(int *)(this + 0x30) != 0) {
    operator_delete__(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(int *)(this + 0x20) != 0) {
    pvVar1 = *(void **)(this + 0x24);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x70,*(int *)((int)pvVar1 + -4),MappingSurface::~MappingSurface);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    operator_delete__(*(void **)(this + 0x1c));
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(this + 0x10) != 0) {
    pvVar1 = *(void **)(this + 0x14);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),ModelPolygon::~ModelPolygon);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  local_4 = 0xffffffff;
  if (*(int *)(this + 8) != 0) {
    pvVar1 = *(void **)(this + 0xc);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x10,*(int *)((int)pvVar1 + -4),PolygonsPerPatch::~PolygonsPerPatch);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  ExceptionList = local_c;
  return;
}

