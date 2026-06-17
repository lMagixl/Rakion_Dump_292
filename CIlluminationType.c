
/* public: __thiscall CIlluminationType::CIlluminationType(class CIlluminationType const &) */

CIlluminationType * __thiscall
CIlluminationType::CIlluminationType(CIlluminationType *this,CIlluminationType *param_1)

{
  char *pcVar1;
  
                    /* 0x9e640  112  ??0CIlluminationType@@QAE@ABV0@@Z */
  pcVar1 = StringDuplicate(*(char **)param_1);
  *(char **)this = pcVar1;
  return this;
}

