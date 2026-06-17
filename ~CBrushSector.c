
/* public: __thiscall CBrushSector::~CBrushSector(void) */

void __thiscall CBrushSector::~CBrushSector(CBrushSector *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13d010  397  ??1CBrushSector@@QAE@XZ */
  puStack_8 = &LAB_3621985a;
  local_c = ExceptionList;
  piVar1 = *(int **)(this + 0x8c);
  local_4 = 10;
  ExceptionList = &local_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_360e1540(piVar1);
    operator_delete(piVar1);
  }
  local_4._0_1_ = 9;
  StringFree(*(char **)(this + 0xa8));
  local_4._0_1_ = 8;
  CRelationSrc::~CRelationSrc((CRelationSrc *)(this + 0x9c));
  local_4._0_1_ = 7;
  CRelationDst::~CRelationDst((CRelationDst *)(this + 0x90));
  local_4 = CONCAT31(local_4._1_3_,6);
  iVar3 = CListNode::IsLinked((CListNode *)(this + 0x84));
  if (iVar3 != 0) {
    CListNode::Remove((CListNode *)(this + 0x84));
  }
  if (*(int *)(this + 0x30) != 0) {
    operator_delete__(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    operator_delete__(*(void **)(this + 0x2c));
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  local_4._0_1_ = 3;
  if (*(int *)(this + 0x20) != 0) {
    FreeMemoryAligned(*(void **)(this + 0x24));
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(int *)(this + 0x18) != 0) {
    pvVar2 = *(void **)(this + 0x1c);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x1d0,*(int *)((int)pvVar2 + -4),CBrushPolygon::~CBrushPolygon);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    operator_delete__(*(void **)(this + 0x14));
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

