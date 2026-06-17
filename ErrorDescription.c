
/* char const * __cdecl ErrorDescription(struct ErrorTable const *,long) */

char * __cdecl ErrorDescription(ErrorTable *param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
                    /* 0x25e50  1580  ?ErrorDescription@@YAPBDPBUErrorTable@@J@Z */
  iVar1 = 0;
  if (0 < *(int *)param_1) {
    piVar3 = *(int **)(param_1 + 4);
    do {
      if (*piVar3 == param_2) {
        return (char *)(*(int **)(param_1 + 4))[iVar1 * 3 + 2];
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar1 < *(int *)param_1);
  }
  pcVar2 = Translate(s_ETRSUnknown_error_36224160,4);
  return pcVar2;
}

