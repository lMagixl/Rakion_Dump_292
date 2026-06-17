
/* public: virtual __thiscall CPlayerEntity::~CPlayerEntity(void) */

void __thiscall CPlayerEntity::~CPlayerEntity(CPlayerEntity *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa2b90  462  ??1CPlayerEntity@@UAE@XZ */
  puStack_8 = &LAB_36213118;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CPlayerCharacter::~CPlayerCharacter((CPlayerCharacter *)(this + 0x368));
  local_4 = 0xffffffff;
  CMovableEntity::~CMovableEntity((CMovableEntity *)this);
  ExceptionList = local_c;
  return;
}

