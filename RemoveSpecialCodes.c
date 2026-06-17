
/* class CTString __cdecl RemoveSpecialCodes(class CTString const &) */

CTString * __cdecl RemoveSpecialCodes(CTString *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x24800  3143  ?RemoveSpecialCodes@@YA?AVCTString@@ABV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620effa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = StringDuplicate((char *)*in_stack_00000008);
  cVar1 = *pcVar2;
  local_4 = 1;
  pcVar4 = pcVar2;
  pcVar6 = pcVar2;
  do {
    if (cVar1 == '\0') {
      *pcVar4 = '\0';
      pcVar4 = StringDuplicate(pcVar2);
      *(char **)param_1 = pcVar4;
      local_4 = local_4 & 0xffffff00;
      StringFree(pcVar2);
      ExceptionList = local_c;
      return param_1;
    }
    pcVar5 = pcVar6 + 1;
    if (*pcVar6 == '^') {
      bVar7 = *pcVar5 == 'r';
      switch(*pcVar5) {
      case 'A':
      case 'B':
      case 'C':
      case 'F':
      case 'I':
      case 'b':
      case 'i':
      case 'o':
      case 'r':
        pcVar5 = pcVar6 + 2;
        break;
      case 'a':
        iVar3 = 3;
        pcVar6 = pcVar5;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pcVar6 == '\0';
          pcVar6 = pcVar6 + 1;
        } while (!bVar7);
        pcVar5 = pcVar5 + ((3 - iVar3) - (uint)bVar7);
        break;
      case 'c':
        iVar3 = 7;
        pcVar6 = pcVar5;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pcVar6 == '\0';
          pcVar6 = pcVar6 + 1;
        } while (!bVar7);
        pcVar5 = pcVar5 + ((7 - iVar3) - (uint)bVar7);
        break;
      case 'f':
        iVar3 = 2;
        pcVar6 = pcVar5;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pcVar6 == '\0';
          pcVar6 = pcVar6 + 1;
        } while (!bVar7);
        pcVar5 = pcVar5 + ((2 - iVar3) - (uint)bVar7);
      }
    }
    else {
      *pcVar4 = *pcVar6;
      pcVar4 = pcVar4 + 1;
    }
    cVar1 = *pcVar5;
    pcVar6 = pcVar5;
  } while( true );
}

