
/* public: void __thiscall CModelInstance::SetName(class CTString const &) */

void __thiscall CModelInstance::SetName(CModelInstance *this,CTString *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
                    /* 0x15c530  3531  ?SetName@CModelInstance@@QAEXABVCTString@@@Z */
  pcVar2 = StringDuplicate(*(char **)param_1);
  StringFree(*(char **)(this + 0x10c));
  *(char **)(this + 0x10c) = pcVar2;
  pcVar3 = *(char **)param_1;
  pcVar2 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == pcVar2) {
    *(undefined4 *)(this + 0x108) = 0xffffffff;
    return;
  }
  lVar4 = ska_StringToID(param_1);
  *(long *)(this + 0x108) = lVar4;
  return;
}

