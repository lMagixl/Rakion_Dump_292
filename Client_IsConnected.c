
/* public: int __thiscall CCommunicationInterface::Client_IsConnected(void) */

int __thiscall CCommunicationInterface::Client_IsConnected(CCommunicationInterface *this)

{
  int iVar1;
  CTSingleLock local_c [12];
  
                    /* 0xfc1b0  1323  ?Client_IsConnected@CCommunicationInterface@@QAEHXZ */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362cd148,1);
  iVar1 = DAT_362cf250;
  CTSingleLock::~CTSingleLock(local_c);
  return iVar1;
}

