
/* public: void __thiscall CCommunicationInterface::OpenSocket_t(unsigned long,unsigned long) */

void __thiscall
CCommunicationInterface::OpenSocket_t(CCommunicationInterface *this,ulong param_1,ulong param_2)

{
                    /* 0xfcb10  2721  ?OpenSocket_t@CCommunicationInterface@@QAEXKK@Z */
  CreateSocket_t(this);
  Bind_t(this,param_1,param_2);
  SetNonBlocking_t(this);
  *(undefined4 *)this = 1;
  return;
}

