
/* public: __thiscall CPlayerCharacter::~CPlayerCharacter(void) */

void __thiscall CPlayerCharacter::~CPlayerCharacter(CPlayerCharacter *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xa27e0  461  ??1CPlayerCharacter@@QAE@XZ */
  puStack_8 = &LAB_362130d1;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  StringFree(*(char **)(this + 0x1c));
  local_4._0_1_ = 1;
  StringFree(*(char **)(this + 0x18));
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(*(char **)(this + 0x14));
  local_4 = 0xffffffff;
  StringFree(*(char **)(this + 0x10));
  ExceptionList = local_c;
  return;
}

