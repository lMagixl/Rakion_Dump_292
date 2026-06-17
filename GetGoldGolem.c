
/* public: class CEntity * __thiscall CSessionState::GetGoldGolem(void) */

CEntity * __thiscall CSessionState::GetGoldGolem(CSessionState *this)

{
  CEntity *pCVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x10ecb0  1899  ?GetGoldGolem@CSessionState@@QAEPAVCEntity@@XZ */
  iVar3 = 0;
  do {
    pCVar1 = GetMapNpc(*(CSessionState **)(_pNetwork + 0x24),iVar3);
    if (pCVar1 != (CEntity *)0x0) {
      iVar2 = IsOfClass(pCVar1,s_NpcGoldGolem_36237380);
      if (iVar2 != 0) {
        return pCVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x41);
  return (CEntity *)0x0;
}

