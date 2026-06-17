
/* public: long __thiscall CTString::FindSubstr(class CTString const &) */

long __thiscall CTString::FindSubstr(CTString *this,CTString *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
                    /* 0x235b0  1647  ?FindSubstr@CTString@@QAEJABV1@@Z */
  pcVar7 = *(char **)this;
  pcVar1 = pcVar7 + 1;
  pcVar4 = pcVar7;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar3 = *(char **)param_1;
  pcVar5 = pcVar3;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iVar8 = 0;
  if (0 < (int)(pcVar4 + (-((int)pcVar5 - (int)(pcVar3 + 1)) - (int)pcVar1) + 1)) {
    do {
      iVar6 = 0;
      while( true ) {
        if ((int)pcVar5 - (int)(pcVar3 + 1) <= iVar6) {
          return iVar8;
        }
        if (pcVar7[iVar6] != pcVar3[iVar6]) break;
        iVar6 = iVar6 + 1;
      }
      if (0x7f < (byte)pcVar7[iVar6]) {
        iVar8 = iVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      iVar8 = iVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (iVar8 < (int)(pcVar4 + (-((int)pcVar5 - (int)(pcVar3 + 1)) - (int)pcVar1) + 1));
  }
  return -1;
}

