
/* public: void __thiscall CWorld::SetDescription(class CTString const &) */

void __thiscall CWorld::SetDescription(CWorld *this,CTString *param_1)

{
  char *pcVar1;
  
                    /* 0xc80a0  3439  ?SetDescription@CWorld@@QAEXABVCTString@@@Z */
  pcVar1 = StringDuplicate(*(char **)param_1);
  StringFree(*(char **)(this + 300));
  *(char **)(this + 300) = pcVar1;
  return;
}

