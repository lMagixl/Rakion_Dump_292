
/* public: void __thiscall CSessionState::CreateMasterGolem(enum ETeamClass) */

void __thiscall CSessionState::CreateMasterGolem(CSessionState *this,ETeamClass param_1)

{
  CEntity *this_00;
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
  undefined4 local_4;
  
                    /* 0x111490  1421  ?CreateMasterGolem@CSessionState@@QAEXW4ETeamClass@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218218;
  local_c = ExceptionList;
  local_3c = (char *)0x0;
  local_24 = 0;
  local_38 = 0;
  local_34 = 0;
  local_20 = 0;
  local_30 = 0;
  local_1c = 0;
  local_2c = 0;
  local_18 = 0;
  local_28 = 0;
  local_14 = 0;
  local_10 = 0;
  if (*(int *)(this + param_1 * 4 + 0x2040) == -1) {
    ExceptionList = &local_c;
    local_3c = StringDuplicate(s_EFNMClasses_NpcMasterGolem_ecl_3623794c + 4);
    local_38 = 0;
    local_4 = 0;
    this_00 = CWorld::CreateMasterGolem_t
                        ((CWorld *)(_pNetwork + 0x11e4),(CPlacement3D *)&local_24,
                         (CTFileName *)&local_3c,0xffffffff,1);
    local_4 = 0xffffffff;
    StringFree(local_3c);
    CEntity::Initialize(this_00,_eeVoid,0);
  }
  ExceptionList = local_c;
  return;
}

