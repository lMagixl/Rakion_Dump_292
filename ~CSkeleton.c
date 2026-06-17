
/* public: virtual __thiscall CSkeleton::~CSkeleton(void) */

void __thiscall CSkeleton::~CSkeleton(CSkeleton *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1710c0  478  ??1CSkeleton@@UAE@XZ */
  puStack_8 = &LAB_3621a664;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(int *)(this + 0x14) != 0) {
    pvVar1 = *(void **)(this + 0x18);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x18,*(int *)((int)pvVar1 + -4),SkeletonLOD::~SkeletonLOD);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

