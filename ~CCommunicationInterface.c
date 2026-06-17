
/* public: __thiscall CCommunicationInterface::~CCommunicationInterface(void) */

void __thiscall CCommunicationInterface::~CCommunicationInterface(CCommunicationInterface *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x63d0  406  ??1CCommunicationInterface@@QAE@XZ */
  puStack_8 = &LAB_3620d1cb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_360ff140((undefined4 *)(this + 0x50));
  local_4 = 0xffffffff;
  FUN_360ff140((undefined4 *)(this + 0x18));
  ExceptionList = local_c;
  return;
}

