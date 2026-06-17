
/* public: void __thiscall CTStream::PutLine_t(char const *) */

void __thiscall CTStream::PutLine_t(CTStream *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  CTSingleLock local_c [12];
  
                    /* 0x3e300  2878  ?PutLine_t@CTStream@@QAEXPBD@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  if (0 < iVar3) {
    do {
      **(char **)(this + 0x14) = *param_1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    } while (iVar3 != 0);
  }
  **(undefined1 **)(this + 0x14) = 0xd;
  iVar3 = *(int *)(this + 0x14);
  *(undefined1 **)(this + 0x14) = (undefined1 *)(iVar3 + 1);
  *(undefined1 *)(iVar3 + 1) = 10;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

