
/* public: virtual __thiscall CNetworkLibrary::~CNetworkLibrary(void) */

void __thiscall CNetworkLibrary::~CNetworkLibrary(CNetworkLibrary *this)

{
  CSessionState *this_00;
  CServer *this_01;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xf6580  452  ??1CNetworkLibrary@@UAE@XZ */
  puStack_8 = &LAB_362169e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0x12;
  CWorld::Clear((CWorld *)(this + 0x11e4));
  this_00 = *(CSessionState **)(this + 0x24);
  if (this_00 != (CSessionState *)0x0) {
    CSessionState::~CSessionState(this_00);
    operator_delete(this_00);
  }
  this_01 = *(CServer **)(this + 0x18);
  if (this_01 != (CServer *)0x0) {
    CServer::~CServer(this_01);
    operator_delete(this_01);
  }
  if (*(int *)(this + 0x136c) != 0) {
    operator_delete__(*(void **)(this + 0x1370));
    *(undefined4 *)(this + 0x136c) = 0;
    *(undefined4 *)(this + 0x1370) = 0;
  }
  if (*(int *)(this + 0x1364) != 0) {
    operator_delete__(*(void **)(this + 0x1368));
    *(undefined4 *)(this + 0x1364) = 0;
    *(undefined4 *)(this + 0x1368) = 0;
  }
  local_4._0_1_ = 0xf;
  CWorld::~CWorld((CWorld *)(this + 0x11e4));
  local_4._0_1_ = 0xe;
  CNet::~CNet((CNet *)(this + 0x11ac));
  local_4._0_1_ = 0xd;
  StringFree(*(char **)(this + 0x9a8));
  local_4._0_1_ = 0xc;
  StringFree(*(char **)(this + 0x9a0));
  local_4._0_1_ = 0xb;
  StringFree(*(char **)(this + 0x97c));
  local_4._0_1_ = 10;
  CTFileStream::~CTFileStream((CTFileStream *)(this + 0x8f4));
  local_4._0_1_ = 9;
  CTFileStream::~CTFileStream((CTFileStream *)(this + 0x878));
  local_4._0_1_ = 8;
  StringFree(*(char **)(this + 0x54));
  local_4._0_1_ = 7;
  StringFree(*(char **)(this + 0x50));
  local_4._0_1_ = 6;
  StringFree(*(char **)(this + 0x4c));
  local_4._0_1_ = 5;
  StringFree(*(char **)(this + 0x44));
  local_4._0_1_ = 4;
  StringFree(*(char **)(this + 0x3c));
  local_4._0_1_ = 3;
  StringFree(*(char **)(this + 0x34));
  local_4._0_1_ = 2;
  StringFree(*(char **)(this + 0x30));
  local_4._0_1_ = 1;
  if (*(int *)(this + 0x28) != 0) {
    pvVar1 = *(void **)(this + 0x2c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x370,*(int *)((int)pvVar1 + -4),CPlayerSource::~CPlayerSource);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  CTCriticalSection::~CTCriticalSection((CTCriticalSection *)(this + 0x1c));
  local_4 = 0xffffffff;
  CMessageDispatcher::~CMessageDispatcher((CMessageDispatcher *)this);
  ExceptionList = local_c;
  return;
}

