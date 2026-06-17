
/* public: unsigned long __thiscall CTString::GetHash(void)const  */

ulong __thiscall CTString::GetHash(CTString *this)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
                    /* 0x23890  1903  ?GetHash@CTString@@QBEKXZ */
  pcVar3 = *(char **)this;
  pcVar1 = pcVar3 + 1;
  uVar6 = 0;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar5 = 0;
  if (0 < (int)pcVar3 - (int)pcVar1) {
    do {
      iVar4 = toupper((int)*(char *)(*(int *)this + iVar5));
      uVar6 = (uVar6 << 4 | uVar6 >> 0x1c) + iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)pcVar3 - (int)pcVar1);
  }
  return uVar6;
}

