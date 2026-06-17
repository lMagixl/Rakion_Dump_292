
uint __cdecl FUN_3614abd0(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  
  iVar5 = *(int *)(unaff_ESI + 0x30);
  iVar2 = *(int *)(unaff_ESI + 100) + iVar5;
  if ((*(char *)(iVar5 + param_1) == *(char *)(*(int *)(unaff_ESI + 100) + iVar5)) &&
     (*(char *)(iVar5 + param_1 + 1) == *(char *)(iVar2 + 1))) {
    iVar5 = iVar5 + param_1 + 2;
    uVar4 = iVar2 + 2;
    while (((((uVar3 = uVar4 + 1, *(char *)(uVar4 + 1) == *(char *)(iVar5 + 1) &&
              (uVar3 = uVar4 + 2, *(char *)(uVar4 + 2) == *(char *)(iVar5 + 2))) &&
             (uVar3 = uVar4 + 3, *(char *)(uVar4 + 3) == *(char *)(iVar5 + 3))) &&
            ((uVar3 = uVar4 + 4, *(char *)(uVar4 + 4) == *(char *)(iVar5 + 4) &&
             (uVar3 = uVar4 + 5, *(char *)(uVar4 + 5) == *(char *)(iVar5 + 5))))) &&
           ((uVar3 = uVar4 + 6, *(char *)(uVar4 + 6) == *(char *)(iVar5 + 6) &&
            (uVar3 = uVar4 + 7, *(char *)(uVar4 + 7) == *(char *)(iVar5 + 7)))))) {
      pcVar1 = (char *)(iVar5 + 8);
      uVar3 = uVar4 + 8;
      iVar5 = iVar5 + 8;
      if ((*(char *)(uVar4 + 8) != *pcVar1) || (uVar4 = uVar3, iVar2 + 0x102U <= uVar3)) break;
    }
    uVar4 = (uVar3 - (iVar2 + 0x102U)) + 0x102;
    if (2 < (int)uVar4) {
      *(int *)(unaff_ESI + 0x68) = param_1;
      if (uVar4 <= *(uint *)(unaff_ESI + 0x6c)) {
        return uVar4;
      }
      return *(uint *)(unaff_ESI + 0x6c);
    }
  }
  return 2;
}

