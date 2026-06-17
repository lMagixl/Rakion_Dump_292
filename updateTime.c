
/* private: void __thiscall TestLog::updateTime(void) */

void __thiscall TestLog::updateTime(TestLog *this)

{
  tm *ptVar1;
  
                    /* 0x19f4b0  4435  ?updateTime@TestLog@@AAEXXZ */
  time((time_t *)this);
  ptVar1 = localtime((time_t *)this);
  *(tm **)(this + 4) = ptVar1;
  return;
}

