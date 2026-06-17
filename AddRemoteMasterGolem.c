
/* public: void __thiscall CSessionState::AddRemoteMasterGolem(unsigned char,long,class
   CPlacement3D) */

void __thiscall CSessionState::AddRemoteMasterGolem(CSessionState *this,byte param_1)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uchar uVar5;
  CEntity *local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x10e590  1007  ?AddRemoteMasterGolem@CSessionState@@QAEXEJVCPlacement3D@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217f90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = CWorld::EntityExists
                    ((CWorld *)(_pNetwork + 0x11e4),*(ulong *)(this + (uint)param_1 * 4 + 0x2040),
                     &local_20);
  if (iVar2 == 0) {
    uVar1 = *(ulong *)(_pNetwork + 0x1314);
    *(ulong *)(_pNetwork + 0x1314) = uVar1 + 1;
    *(ulong *)(this + (uint)param_1 * 4 + 0x2040) = uVar1;
    local_1c = StringDuplicate(&DAT_36222fa0);
    local_18 = 0;
    local_4 = 0;
    pcVar3 = StringDuplicate(s_Classes_NpcMasterGolem_ecl_36237568);
    local_10 = 0;
    local_4._0_1_ = 1;
    local_14 = pcVar3;
    pcVar4 = StringDuplicate(pcVar3);
    StringFree(local_1c);
    local_18 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    local_1c = pcVar4;
    StringFree(pcVar3);
    local_20 = CWorld::CreateMasterGolem_t
                         ((CWorld *)(_pNetwork + 0x11e4),(CPlacement3D *)&stack0x0000000c,
                          (CTFileName *)&local_1c,uVar1,0);
    if (param_1 == 0) {
      param_1 = 0;
      uVar5 = '\0';
    }
    else {
      uVar5 = '\n';
    }
    CMovableEntity::SetEntityIdIndex((CMovableEntity *)local_20,uVar5,param_1);
    CEntity::Initialize(local_20,_eeVoid,0);
    local_4 = 0xffffffff;
    StringFree(local_1c);
  }
  ExceptionList = local_c;
  return;
}

