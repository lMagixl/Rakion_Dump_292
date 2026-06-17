
/* public: class CEntity * __thiscall CSessionState::AddQuestModeSwitch(long *) */

CEntity * __thiscall CSessionState::AddQuestModeSwitch(CSessionState *this,long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  CEntity *this_00;
  char *local_44;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x110660  997  ?AddQuestModeSwitch@CSessionState@@QAEPAVCEntity@@PAJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218106;
  local_c = ExceptionList;
  uVar2 = *(ulong *)(_pNetwork + 0x1314);
  ExceptionList = &local_c;
  *(ulong *)(_pNetwork + 0x1314) = uVar2 + 1;
  uVar1 = *(ushort *)(this + 0x2548);
  *(ushort *)(this + 0x2548) = uVar1 + 1;
  *(ulong *)(this + (uint)uVar1 * 4 + 0x2150) = uVar2;
  local_44 = StringDuplicate(&DAT_36222fa0);
  local_40 = 0;
  local_4 = 0;
  pcVar3 = StringDuplicate(s_Classes_QstSwitch_ecl_36237584);
  local_38 = 0;
  local_4._0_1_ = 1;
  local_3c = pcVar3;
  pcVar4 = StringDuplicate(pcVar3);
  StringFree(local_44);
  local_40 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  local_44 = pcVar4;
  StringFree(pcVar3);
  local_24 = 0;
  local_18 = 0;
  local_1c = 0;
  local_10 = 0;
  local_20 = 0;
  local_14 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_3c = (char *)0x0;
  local_38 = 0;
  local_34 = 0;
  this_00 = CWorld::CreateEntity_t
                      ((CWorld *)(_pNetwork + 0x11e4),(CPlacement3D *)&local_24,
                       (CTFileName *)&local_44,uVar2,0);
  CEntity::Initialize(this_00,_eeVoid,0);
  if (param_1 != (long *)0x0) {
    *param_1 = (uint)uVar1;
  }
  local_4 = 0xffffffff;
  StringFree(local_44);
  ExceptionList = local_c;
  return this_00;
}

