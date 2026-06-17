
/* public: void __thiscall CTStream::PutString_t(char const *) */

void __thiscall CTStream::PutString_t(CTStream *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  CTSingleLock local_c [12];
  
                    /* 0x3e370  2879  ?PutString_t@CTStream@@QAEXPBD@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  if (0 < iVar4) {
    do {
      if (*param_1 == '\n') {
        **(undefined1 **)(this + 0x14) = 0xd;
        iVar2 = *(int *)(this + 0x14);
        *(undefined1 **)(this + 0x14) = (undefined1 *)(iVar2 + 1);
        *(undefined1 *)(iVar2 + 1) = 10;
      }
      else {
        **(char **)(this + 0x14) = *param_1;
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    } while (iVar4 != 0);
  }
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

