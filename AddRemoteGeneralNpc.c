
/* public: void __thiscall CSessionState::AddRemoteGeneralNpc(unsigned char,unsigned char,long,class
   CPlacement3D) */

void __thiscall
CSessionState::AddRemoteGeneralNpc(CSessionState *this,CEntity *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  CEntity *pCVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x10e450  1005  ?AddRemoteGeneralNpc@CSessionState@@QAEXEEJVCPlacement3D@@@Z
                        */
  pCVar2 = param_1;
  uVar4 = param_2 & 0xff;
  uVar5 = (uint)param_1 & 0xff;
  uVar1 = *(ulong *)(this + (uVar5 * 9 + uVar4) * 4 + 0x1d70);
  if ((uVar1 != 0xffffffff) &&
     (iVar3 = CWorld::EntityExists((CWorld *)(_pNetwork + 0x11e4),uVar1,&param_1), iVar3 != 0)) {
    return;
  }
  this[uVar5 + 0x2947] = (CSessionState)((char)this[uVar5 + 0x2947] + '\x01');
  uVar1 = *(ulong *)(_pNetwork + 0x1314);
  *(ulong *)(_pNetwork + 0x1314) = uVar1 + 1;
  *(ulong *)(this + (uVar5 * 9 + uVar4) * 4 + 0x1d70) = uVar1;
  iVar3 = FUN_361300d0(param_3);
  param_1 = CWorld::CreateNpc_t((CWorld *)(_pNetwork + 0x11e4),(CPlacement3D *)&stack0x00000010,
                                (CTFileName *)(iVar3 + 4),uVar1,0);
  CMovableEntity::SetEntityIdIndex((CMovableEntity *)param_1,(uchar)pCVar2,(uchar)param_2);
  return;
}

