
/* public: void __thiscall CTString::Split(long,class CTString &,class CTString &) */

void __thiscall CTString::Split(CTString *this,long param_1,CTString *param_2,CTString *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* 0x245c0  3647  ?Split@CTString@@QAEXJAAV1@0@Z */
  pcVar2 = StringDuplicate(*(char **)this);
  StringFree(*(char **)param_2);
  *(char **)param_2 = pcVar2;
  pcVar2 = StringDuplicate(*(char **)this);
  StringFree(*(char **)param_3);
  *(char **)param_3 = pcVar2;
  TrimRight(param_2,param_1);
  pcVar3 = *(char **)param_3;
  pcVar2 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  TrimLeft(param_3,(long)(pcVar3 + (-param_1 - (int)pcVar2)));
  return;
}

