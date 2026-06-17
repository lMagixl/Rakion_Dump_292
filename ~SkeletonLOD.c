
/* public: __thiscall SkeletonLOD::~SkeletonLOD(void) */

void __thiscall SkeletonLOD::~SkeletonLOD(SkeletonLOD *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13150  540  ??1SkeletonLOD@@QAE@XZ */
  puStack_8 = &LAB_3620dfb6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  StringFree(*(char **)(this + 0x14));
  if (*(int *)(this + 0xc) != 0) {
    operator_delete__(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  ExceptionList = local_c;
  return;
}

