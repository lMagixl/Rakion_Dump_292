
/* public: class CEntity * __thiscall CSessionState::GetMasterGolem(enum ETeamClass) */

CEntity * __thiscall CSessionState::GetMasterGolem(CSessionState *this,ETeamClass param_1)

{
  int iVar1;
  
                    /* 0x10e2a0  1967
                       ?GetMasterGolem@CSessionState@@QAEPAVCEntity@@W4ETeamClass@@@Z */
  if (((param_1 == 0) || (param_1 == 1)) && (*(ulong *)(this + param_1 * 4 + 0x2040) != 0xffffffff))
  {
    iVar1 = CWorld::EntityExists
                      ((CWorld *)(_pNetwork + 0x11e4),*(ulong *)(this + param_1 * 4 + 0x2040),
                       (CEntity **)&param_1);
    return (CEntity *)(-(uint)(iVar1 != 0) & param_1);
  }
  return (CEntity *)0x0;
}

