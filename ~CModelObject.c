
/* public: __thiscall CModelObject::~CModelObject(void) */

void __thiscall CModelObject::~CModelObject(CModelObject *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xb73f0  445  ??1CModelObject@@QAE@XZ */
  puStack_8 = &LAB_36213f8f;
  local_c = ExceptionList;
  local_4 = 4;
  iVar1 = 0;
  ExceptionList = &local_c;
  do {
    HidePatch(this,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  *(undefined4 *)(this + 0xa8) = 0;
  RemoveAllAttachmentModels(this);
  local_4._0_1_ = 3;
  CAnimObject::~CAnimObject((CAnimObject *)(this + 0x6c));
  local_4._0_1_ = 2;
  CAnimObject::~CAnimObject((CAnimObject *)(this + 0x54));
  local_4._0_1_ = 1;
  CAnimObject::~CAnimObject((CAnimObject *)(this + 0x3c));
  local_4 = (uint)local_4._1_3_ << 8;
  CAnimObject::~CAnimObject((CAnimObject *)(this + 0x24));
  local_4 = 0xffffffff;
  CAnimObject::~CAnimObject((CAnimObject *)this);
  ExceptionList = local_c;
  return;
}

