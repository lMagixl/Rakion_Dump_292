
/* char * __cdecl StringDuplicate(unsigned short const *) */

char * __cdecl StringDuplicate(ushort *param_1)

{
  ushort uVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  
                    /* 0x233f0  3699  ?StringDuplicate@@YAPADPBG@Z */
  sVar2 = wcslen((wchar_t *)param_1);
  pcVar3 = FUN_360232c0(sVar2);
  iVar4 = 0;
  if (0 < (int)sVar2) {
    do {
      uVar1 = param_1[iVar4];
      if (uVar1 == 0x178) {
        pcVar3[iVar4] = -0x61;
      }
      else if (uVar1 == 0x20ac) {
        pcVar3[iVar4] = -0x80;
      }
      else if ((char)(uVar1 >> 8) == '\0') {
        pcVar3[iVar4] = (char)param_1[iVar4];
      }
      else {
        pcVar3[iVar4] = '\x1f';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)sVar2);
  }
  pcVar3[sVar2] = '\0';
  return pcVar3;
}

