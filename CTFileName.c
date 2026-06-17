
/* public: __thiscall CTFileName::CTFileName(class CTFileName const &) */

CTFileName * __thiscall CTFileName::CTFileName(CTFileName *this,CTFileName *param_1)

{
  char *pcVar1;
  
                    /* 0x1790  241  ??0CTFileName@@QAE@ABV0@@Z */
  pcVar1 = StringDuplicate(*(char **)param_1);
  *(char **)this = pcVar1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

