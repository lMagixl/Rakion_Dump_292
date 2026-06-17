
/* public: __thiscall CAttachedModel::~CAttachedModel(void) */

void __thiscall CAttachedModel::~CAttachedModel(CAttachedModel *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xa8c40  385  ??1CAttachedModel@@QAE@XZ */
  puStack_8 = &LAB_362134ec;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  Clear(this);
  local_4 = local_4 & 0xffffff00;
  StringFree(*(char **)(this + 0xb0));
  local_4 = 0xffffffff;
  CModelObject::~CModelObject((CModelObject *)(this + 4));
  ExceptionList = local_c;
  return;
}

