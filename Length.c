
/* public: long __thiscall CTWString::Length(void)const  */

long __thiscall CTWString::Length(CTWString *this)

{
  size_t sVar1;
  
                    /* 0x24c70  2533  ?Length@CTWString@@QBEJXZ */
  sVar1 = wcslen(*(wchar_t **)this);
  return sVar1;
}

