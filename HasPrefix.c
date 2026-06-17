
/* public: int __thiscall CTString::HasPrefix(class CTString const &)const  */

int __thiscall CTString::HasPrefix(CTString *this,CTString *param_1)

{
  char cVar1;
  char *_Str2;
  char *pcVar2;
  int iVar3;
  
                    /* 0x23570  2258  ?HasPrefix@CTString@@QBEHABV1@@Z */
  _Str2 = *(char **)param_1;
  pcVar2 = _Str2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = _strnicmp(*(char **)this,_Str2,(int)pcVar2 - (int)(_Str2 + 1));
  return (uint)(iVar3 == 0);
}

