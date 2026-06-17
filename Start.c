
/* public: virtual void __thiscall CAOTimeInfo::Start(unsigned long) */

void __thiscall CAOTimeInfo::Start(CAOTimeInfo *this,ulong param_1)

{
                    /* 0x19ea30  3654  ?Start@CAOTimeInfo@@UAEXK@Z */
  *(ulong *)(this + 0xc) = param_1;
  *(undefined4 *)(this + 8) = 1;
  return;
}

