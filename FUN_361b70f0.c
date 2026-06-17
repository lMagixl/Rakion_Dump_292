
void __cdecl FUN_361b70f0(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *_Dst;
  
  _Dst = (char *)*param_1;
  if (*_Dst == '\"') {
    pcVar3 = _Dst;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    _Dst[(int)(pcVar3 + (-1 - (int)(_Dst + 1)))] = '\0';
    memmove(_Dst,_Dst + 1,(size_t)(pcVar3 + (-1 - (int)(_Dst + 1))));
  }
  cVar2 = *_Dst;
  pcVar3 = _Dst;
  while (cVar2 != '\0') {
    if (cVar2 == '\\') {
      cVar2 = _Dst[1];
      _Dst = _Dst + 1;
      if (cVar2 == 'n') {
        *pcVar3 = '\n';
      }
      else if (cVar2 == 'r') {
        *pcVar3 = '\r';
      }
      else {
        *pcVar3 = cVar2;
      }
    }
    else {
      *pcVar3 = cVar2;
    }
    pcVar1 = _Dst + 1;
    _Dst = _Dst + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar3 = '\0';
  return;
}

