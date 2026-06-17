
/* public: __thiscall CEnvironmentType::CEnvironmentType(class CEnvironmentType const &) */

CEnvironmentType * __thiscall
CEnvironmentType::CEnvironmentType(CEnvironmentType *this,CEnvironmentType *param_1)

{
  char *pcVar1;
  
                    /* 0x9e5b0  100  ??0CEnvironmentType@@QAE@ABV0@@Z */
  pcVar1 = StringDuplicate(*(char **)param_1);
  *(char **)this = pcVar1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

