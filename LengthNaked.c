
/* public: long __thiscall CTString::LengthNaked(void)const  */

long __thiscall CTString::LengthNaked(CTString *this)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
                    /* 0x24ba0  2534  ?LengthNaked@CTString@@QBEJXZ */
  puVar3 = (undefined4 *)Undecorated(this);
  pcVar4 = (char *)*puVar3;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  StringFree((char *)this);
  return (int)pcVar4 - (int)pcVar1;
}

