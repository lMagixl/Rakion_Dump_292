
/* public: void __thiscall CSessionState::RemoveAllGeneralNpcs(unsigned char) */

void __thiscall CSessionState::RemoveAllGeneralNpcs(CSessionState *this,uchar param_1)

{
  int iVar1;
  CEntityEvent *pCVar2;
  CSessionState *pCVar3;
  int iVar4;
  undefined3 in_stack_00000005;
  EDeath local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1108f0  3118  ?RemoveAllGeneralNpcs@CSessionState@@QAEXE@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218132;
  local_c = ExceptionList;
  pCVar3 = this + (uint)param_1 * 0x24 + 0x1d70;
  iVar4 = 9;
  ExceptionList = &local_c;
  do {
    if (*(ulong *)pCVar3 != 0xffffffff) {
      iVar1 = CWorld::EntityExists
                        ((CWorld *)(_pNetwork + 0x11e4),*(ulong *)pCVar3,(CEntity **)&param_1);
      if (iVar1 != 0) {
        pCVar2 = (CEntityEvent *)EDeath::EDeath(local_40);
        local_4 = 0;
        CEntity::SendEvent(_param_1,pCVar2,0);
        local_4 = 0xffffffff;
        EDeath::~EDeath(local_40);
      }
    }
    pCVar3 = pCVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  ExceptionList = local_c;
  return;
}

