
/* public: class CEntity * __thiscall CSessionState::GetMapNpc(long) */

CEntity * __thiscall CSessionState::GetMapNpc(CSessionState *this,long param_1)

{
  int iVar1;
  
                    /* 0x10e2f0  1965  ?GetMapNpc@CSessionState@@QAEPAVCEntity@@J@Z */
  if (((-1 < param_1) && (param_1 < 0x41)) &&
     (*(ulong *)(this + param_1 * 4 + 0x2048) != 0xffffffff)) {
    iVar1 = CWorld::EntityExists
                      ((CWorld *)(_pNetwork + 0x11e4),*(ulong *)(this + param_1 * 4 + 0x2048),
                       (CEntity **)&param_1);
    if (iVar1 != 0) {
      return (CEntity *)param_1;
    }
  }
  return (CEntity *)0x0;
}

