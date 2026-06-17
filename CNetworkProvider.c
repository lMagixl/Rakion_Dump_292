
/* public: __thiscall CNetworkProvider::CNetworkProvider(void) */

CNetworkProvider * __thiscall CNetworkProvider::CNetworkProvider(CNetworkProvider *this)

{
  char *pcVar1;
  
                    /* 0x103750  172  ??0CNetworkProvider@@QAE@XZ */
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)this = pcVar1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}

