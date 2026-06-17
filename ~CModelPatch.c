
/* public: __thiscall CModelPatch::~CModelPatch(void) */

void __thiscall CModelPatch::~CModelPatch(CModelPatch *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6cf0  446  ??1CModelPatch@@QAE@XZ */
  puStack_8 = &LAB_3620d2a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CAnimObject::~CAnimObject((CAnimObject *)(this + 4));
  local_4 = 0xffffffff;
  StringFree(*(char **)this);
  ExceptionList = local_c;
  return;
}

