
/* public: void __thiscall CTString::OnlyFirstLine(void) */

void __thiscall CTString::OnlyFirstLine(CTString *this)

{
  char *pcVar1;
  
                    /* 0x237a0  2719  ?OnlyFirstLine@CTString@@QAEXXZ */
  pcVar1 = strchr(*(char **)this,10);
  if (pcVar1 != (char *)0x0) {
    TrimRight(this,(int)pcVar1 - *(int *)this);
  }
  return;
}

