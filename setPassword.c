
/* public: void __thiscall Xenesis::xFileManager::setPassword(char const *) */

void __thiscall Xenesis::xFileManager::setPassword(xFileManager *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  
                    /* 0xd190  4293  ?setPassword@xFileManager@Xenesis@@QAEXPBD@Z */
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != param_1 + 1) {
      this[0x10ec] = (xFileManager)0x1;
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_361a3a60(this + 0xa4,(uint)param_1,(int)pcVar3 - (int)(param_1 + 1));
      goto LAB_3600d1df;
    }
  }
  this[0x10ec] = (xFileManager)0x0;
LAB_3600d1df:
  bVar2 = FUN_361a2f00((int *)(this + 0x40));
  if (bVar2) {
    this[0x10ee] = (xFileManager)0x1;
  }
  return;
}

