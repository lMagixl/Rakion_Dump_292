
/* public: long __thiscall CTString::TrimLeft(long) */

long __thiscall CTString::TrimLeft(CTString *this,long param_1)

{
  char cVar1;
  char *_Dst;
  char *pcVar2;
  int iVar3;
  
                    /* 0x23630  3857  ?TrimLeft@CTString@@QAEJJ@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  _Dst = *(char **)this;
  pcVar2 = _Dst;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = ((int)pcVar2 - (int)(_Dst + 1)) - param_1;
  if (iVar3 < 1) {
    return 0;
  }
  memmove(_Dst,_Dst + iVar3,param_1 + 1);
  FUN_36023350((void **)this,(int)pcVar2 - (int)(_Dst + 1),param_1);
  return iVar3;
}

