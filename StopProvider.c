
/* public: void __thiscall CMessageDispatcher::StopProvider(void) */

void __thiscall CMessageDispatcher::StopProvider(CMessageDispatcher *this)

{
                    /* 0x103ba0  3688  ?StopProvider@CMessageDispatcher@@QAEXXZ */
  CCommunicationInterface::Unprepare(&_cmiComm);
  return;
}

