
/* public: class CTString __thiscall CTString::Undecorated(void)const  */

undefined4 * __thiscall CTString::Undecorated(CTString *this)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x241d0  3873  ?Undecorated@CTString@@QBE?AV1@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ef9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = StringDuplicate(*(char **)this);
  pcVar5 = *(char **)this;
  cVar1 = *pcVar5;
  local_4 = 1;
  pcVar4 = pcVar2;
  do {
    if (cVar1 == '\0') {
      *pcVar4 = '\0';
      pcVar5 = StringDuplicate(pcVar2);
      *in_stack_00000004 = pcVar5;
      local_4 = local_4 & 0xffffff00;
      StringFree(pcVar2);
      ExceptionList = local_c;
      return in_stack_00000004;
    }
    if (cVar1 != '^') {
      *pcVar4 = cVar1;
      goto LAB_3602430a;
    }
    bVar7 = pcVar5[1] == 'r';
    switch(pcVar5[1]) {
    case 'A':
    case 'B':
    case 'C':
    case 'F':
    case 'I':
    case 'b':
    case 'i':
    case 'o':
    case 'r':
      pcVar5 = pcVar5 + 2;
      break;
    default:
      *pcVar4 = '^';
      goto LAB_3602430a;
    case '^':
      pcVar6 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      *pcVar4 = *pcVar6;
LAB_3602430a:
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
      break;
    case 'a':
      iVar3 = 2;
      pcVar6 = pcVar5 + 2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *pcVar6 == '\0';
        pcVar6 = pcVar6 + 1;
      } while (!bVar7);
      pcVar5 = pcVar5 + ((4 - iVar3) - (uint)bVar7);
      break;
    case 'c':
      iVar3 = 6;
      pcVar6 = pcVar5 + 2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *pcVar6 == '\0';
        pcVar6 = pcVar6 + 1;
      } while (!bVar7);
      pcVar5 = pcVar5 + ((8 - iVar3) - (uint)bVar7);
      break;
    case 'f':
      iVar3 = 2;
      pcVar6 = pcVar5 + 2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *pcVar6 == '\0';
        pcVar6 = pcVar6 + 1;
      } while (!bVar7);
      pcVar5 = pcVar5 + ((4 - iVar3) - (uint)bVar7);
    }
    cVar1 = *pcVar5;
  } while( true );
}

