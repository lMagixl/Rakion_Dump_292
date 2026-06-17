
/* public: void __thiscall CDrawPort::PutText(class CTString const &,long,long,unsigned long,int
   const &)const  */

void __thiscall
CDrawPort::PutText(CDrawPort *this,CTString *param_1,long param_2,long param_3,ulong param_4,
                  int *param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
                    /* 0x6ad50  2880  ?PutText@CDrawPort@@QBEXABVCTString@@JJKABH@Z */
  if ((param_3 <= *(int *)(this + 0x14) - *(int *)(this + 0xc)) &&
     (param_2 <= *(int *)(this + 0x10) - *(int *)(this + 8))) {
    pcVar3 = *(char **)param_1;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (pcVar3 != pcVar1 && -1 < (int)pcVar3 - (int)pcVar1) {
      if (*(int *)(*(int *)(this + 4) + 0x3c) == 0) {
        PutTextASCII(this,param_1,param_2,param_3,param_4);
        return;
      }
      if (_buseCreateFontTex != 0) {
        PutTextOthers(this,param_1,&param_2,&param_3,&param_4,param_5);
        return;
      }
      PutTextKS(this,param_1,param_2,param_3,param_4);
    }
  }
  return;
}

