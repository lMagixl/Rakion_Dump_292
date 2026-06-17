
/* public: __thiscall CTCriticalSection::CTCriticalSection(void) */

CTCriticalSection * __thiscall CTCriticalSection::CTCriticalSection(CTCriticalSection *this)

{
  undefined4 *puVar1;
  
                    /* 0x447a0  240  ??0CTCriticalSection@@QAE@XZ */
  *(undefined4 *)(this + 4) = 0xffffffff;
  puVar1 = (undefined4 *)FUN_361bf99c(0x10);
  *(undefined4 **)this = puVar1;
  FUN_36044670(puVar1);
  return this;
}

