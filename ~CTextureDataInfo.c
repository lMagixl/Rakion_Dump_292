
/* public: __thiscall CTextureDataInfo::~CTextureDataInfo(void) */

void __thiscall CTextureDataInfo::~CTextureDataInfo(CTextureDataInfo *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa7970  497  ??1CTextureDataInfo@@QAE@XZ */
  puStack_8 = &LAB_36213338;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  StringFree(*(char **)(this + 0xc));
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)this);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)this);
  }
  ExceptionList = local_c;
  return;
}

