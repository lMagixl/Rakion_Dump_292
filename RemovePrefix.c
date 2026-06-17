
/* public: int __thiscall CTString::RemovePrefix(class CTString const &) */

int __thiscall CTString::RemovePrefix(CTString *this,CTString *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  size_t _MaxCount;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x24100  3140  ?RemovePrefix@CTString@@QAEHABV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ef70;
  local_c = ExceptionList;
  pcVar2 = *(char **)this;
  pcVar6 = pcVar2 + 1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = *(char **)param_1;
  pcVar3 = pcVar5;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _MaxCount = (int)pcVar3 - (int)(pcVar5 + 1);
  ExceptionList = &local_c;
  iVar4 = _strnicmp(*(char **)this,pcVar5,_MaxCount);
  if (iVar4 != 0) {
    ExceptionList = local_c;
    return 0;
  }
  pcVar5 = StringDuplicate((char *)(*(int *)this + _MaxCount));
  local_4 = 0;
  FUN_36023350((void **)this,(int)pcVar2 - (int)pcVar6,((int)pcVar2 - (int)pcVar6) - _MaxCount);
  pcVar6 = *(char **)this;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_4 = 0xffffffff;
  StringFree(pcVar5);
  ExceptionList = local_c;
  return 1;
}

