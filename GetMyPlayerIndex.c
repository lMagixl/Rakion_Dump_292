
/* public: long __thiscall CPlayerEntity::GetMyPlayerIndex(void) */

long __thiscall CPlayerEntity::GetMyPlayerIndex(CPlayerEntity *this)

{
  long lVar1;
  CEntity *pCVar2;
  int iVar3;
  
                    /* 0x1b6ec0  2000  ?GetMyPlayerIndex@CPlayerEntity@@QAEJXZ */
  iVar3 = 0;
  lVar1 = CEntity::GetMaxPlayers();
  if (0 < lVar1) {
    do {
      pCVar2 = CEntity::GetPlayerEntity(iVar3);
      if (pCVar2 == (CEntity *)this) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar1 = CEntity::GetMaxPlayers();
    } while (iVar3 < lVar1);
  }
  return 0xf;
}

