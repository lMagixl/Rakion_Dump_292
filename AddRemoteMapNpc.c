
/* public: void __thiscall CSessionState::AddRemoteMapNpc(unsigned char,long,class CPlacement3D) */

void __thiscall CSessionState::AddRemoteMapNpc(CSessionState *this,CEntity param_1,int param_2)

{
  ulong uVar1;
  CEntity *pCVar2;
  int iVar3;
  
                    /* 0x10e500  1006  ?AddRemoteMapNpc@CSessionState@@QAEXEJVCPlacement3D@@@Z */
  pCVar2 = GetMapNpc(this,(uint)(byte)param_1);
  if (pCVar2 == (CEntity *)0x0) {
    this[0x214c] = (CSessionState)((char)this[0x214c] + '\x01');
    uVar1 = *(ulong *)(_pNetwork + 0x1314);
    *(ulong *)(_pNetwork + 0x1314) = uVar1 + 1;
    *(ulong *)(this + (uint)(byte)param_1 * 4 + 0x2048) = uVar1;
    iVar3 = FUN_361300d0(param_2);
    pCVar2 = CWorld::CreateMapNpc_t
                       ((CWorld *)(_pNetwork + 0x11e4),(CPlacement3D *)&stack0x0000000c,
                        (CTFileName *)(iVar3 + 4),uVar1,0);
    pCVar2[0x265] = param_1;
    CEntity::Initialize(pCVar2,_eeVoid,0);
  }
  return;
}

