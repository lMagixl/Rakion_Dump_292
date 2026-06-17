
/* public: int __thiscall CCommunicationInterface::Server_IsClientUsed(long) */

int __thiscall
CCommunicationInterface::Server_IsClientUsed(CCommunicationInterface *this,long param_1)

{
  int iVar1;
  CTSingleLock local_c [12];
  
                    /* 0xfbd10  3380  ?Server_IsClientUsed@CCommunicationInterface@@QAEHJ@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362cd148,1);
  iVar1 = *(int *)(&DAT_362cd150 + param_1 * 0x100);
  CTSingleLock::~CTSingleLock(local_c);
  return iVar1;
}

