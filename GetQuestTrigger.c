
/* public: class CEntity * __thiscall CSessionState::GetQuestTrigger(unsigned short) */

CEntity * __thiscall CSessionState::GetQuestTrigger(CSessionState *this,ushort param_1)

{
  int iVar1;
  undefined2 in_stack_00000006;
  
                    /* 0x10e380  2067  ?GetQuestTrigger@CSessionState@@QAEPAVCEntity@@G@Z */
  if ((param_1 < 0xfe) && (*(ulong *)(this + (uint)param_1 * 4 + 0x2150) != 0xffffffff)) {
    iVar1 = CWorld::EntityExists
                      ((CWorld *)(_pNetwork + 0x11e4),*(ulong *)(this + (uint)param_1 * 4 + 0x2150),
                       (CEntity **)&param_1);
    return (CEntity *)(-(uint)(iVar1 != 0) & (uint)_param_1);
  }
  return (CEntity *)0x0;
}

