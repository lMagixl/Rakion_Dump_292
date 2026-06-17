
/* public: int __thiscall CNetworkLibrary::GetLocalPause(void) */

int __thiscall CNetworkLibrary::GetLocalPause(CNetworkLibrary *this)

{
  int iVar1;
  
                    /* 0xf3a10  1957  ?GetLocalPause@CNetworkLibrary@@QAEHXZ */
  iVar1 = 1;
  if (this != (CNetworkLibrary *)0x0) {
    iVar1 = *(int *)(this + 0x870);
  }
  return iVar1;
}

