
/* public: int __thiscall CCommunicationInterface::Server_IsClientLocal(long) */

int __thiscall
CCommunicationInterface::Server_IsClientLocal(CCommunicationInterface *this,long param_1)

{
  CTSingleLock local_c [12];
  
                    /* 0xfbce0  3379  ?Server_IsClientLocal@CCommunicationInterface@@QAEHJ@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362cd148,1);
  CTSingleLock::~CTSingleLock(local_c);
  return (uint)(param_1 == 0);
}

