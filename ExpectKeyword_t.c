
/* public: void __thiscall CTStream::ExpectKeyword_t(class CTString const &) */

void __thiscall CTStream::ExpectKeyword_t(CTStream *this,CTString *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  CTStream *this_00;
  int iVar4;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3ff70  1591  ?ExpectKeyword_t@CTStream@@QAEXABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210bd6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  pcVar3 = *(char **)param_1;
  iVar4 = 0;
  local_4 = 0;
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  if (0 < (int)pcVar3 - (int)pcVar1) {
    do {
      cVar2 = **(char **)(this + 0x14);
      *(char **)(this + 0x14) = *(char **)(this + 0x14) + 1;
      if (cVar2 != *(char *)(*(int *)param_1 + iVar4)) {
        Translate(s_ETRSExpected_keyword__s_not_foun_36226f34,4);
        Throw_t(this_00,(char *)this);
      }
      pcVar3 = *(char **)param_1;
      iVar4 = iVar4 + 1;
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
    } while (iVar4 < (int)pcVar3 - (int)pcVar1);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

