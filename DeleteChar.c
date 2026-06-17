
/* public: void __thiscall CTString::DeleteChar(long) */

void __thiscall CTString::DeleteChar(CTString *this,long param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
                    /* 0x23ca0  1462  ?DeleteChar@CTString@@QAEXJ@Z */
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(pcVar2 + 1);
  if (iVar4 != 0) {
    if (param_1 < iVar4) {
      if (param_1 < 0) {
        param_1 = 0;
      }
    }
    else {
      param_1 = iVar4 + -1;
    }
    memmove(pcVar2 + param_1,pcVar2 + param_1 + 1,iVar4 - param_1);
    FUN_36023350((void **)this,iVar4,iVar4 + -1);
  }
  return;
}

