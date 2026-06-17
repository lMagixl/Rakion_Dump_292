
/* public: __thiscall CMessageDispatcher::CMessageDispatcher(void) */

CMessageDispatcher * __thiscall CMessageDispatcher::CMessageDispatcher(CMessageDispatcher *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x103fc0  142  ??0CMessageDispatcher@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362176dd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  CListHead::Clear((CListHead *)(this + 4));
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x10) = pcVar1;
  local_4 = 0;
  CCommunicationInterface::Init(&_cmiComm);
  EnumNetworkProviders_startup(this,(CListHead *)(this + 4));
  ExceptionList = local_c;
  return this;
}

