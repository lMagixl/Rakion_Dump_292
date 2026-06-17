
/* public: int __thiscall CNetworkLibrary::IsPlayerLocal(class CEntity *) */

int __thiscall CNetworkLibrary::IsPlayerLocal(CNetworkLibrary *this,CEntity *param_1)

{
  CPlayerSource *pCVar1;
  
                    /* 0xf8e20  2448  ?IsPlayerLocal@CNetworkLibrary@@QAEHPAVCEntity@@@Z */
  pCVar1 = GetPlayerSource(this,param_1);
  return (uint)(pCVar1 != (CPlayerSource *)0x0);
}

