
/* public: void __thiscall CSessionState::DestroyMasterGolems(void) */

void __thiscall CSessionState::DestroyMasterGolems(CSessionState *this)

{
  int iVar1;
  CEntityEvent *pCVar2;
  CSessionState *pCVar3;
  int iVar4;
  CEntity *local_44;
  EDeath local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x111590  1488  ?DestroyMasterGolems@CSessionState@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621822a;
  local_c = ExceptionList;
  pCVar3 = this + 0x2040;
  ExceptionList = &local_c;
  *(ulong *)pCVar3 = 0xffffffff;
  *(undefined4 *)(this + 0x2044) = 0xffffffff;
  iVar4 = 2;
  do {
    if (*(ulong *)pCVar3 != 0xffffffff) {
      iVar1 = CWorld::EntityExists((CWorld *)(_pNetwork + 0x11e4),*(ulong *)pCVar3,&local_44);
      if (iVar1 != 0) {
        pCVar2 = (CEntityEvent *)EDeath::EDeath(local_40);
        local_4 = 0;
        CEntity::SendEvent(local_44,pCVar2,0);
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

