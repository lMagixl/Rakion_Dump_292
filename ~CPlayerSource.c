
/* public: __thiscall CPlayerSource::~CPlayerSource(void) */

void __thiscall CPlayerSource::~CPlayerSource(CPlayerSource *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x107bf0  463  ??1CPlayerSource@@QAE@XZ */
  puStack_8 = &LAB_3621793b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CTCriticalSection::~CTCriticalSection((CTCriticalSection *)(this + 0x4c));
  local_4 = 0xffffffff;
  CPlayerCharacter::~CPlayerCharacter((CPlayerCharacter *)(this + 8));
  ExceptionList = local_c;
  return;
}

