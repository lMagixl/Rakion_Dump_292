
/* public: __thiscall CSoundObject::~CSoundObject(void) */

void __thiscall CSoundObject::~CSoundObject(CSoundObject *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa35d0  481  ??1CSoundObject@@QAE@XZ */
  puStack_8 = &LAB_362131aa;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Stop_internal(this,1);
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)this);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)this);
  }
  ExceptionList = local_c;
  return;
}

