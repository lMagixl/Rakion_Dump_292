
uint FUN_3614bc30(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *unaff_ESI;
  
  uVar3 = 0;
  if (unaff_ESI != (void *)0x0) {
    if (*(void **)((int)unaff_ESI + 0x50) != (void *)0x0) {
      free(*(void **)((int)unaff_ESI + 0x50));
    }
    if (*(int *)((int)unaff_ESI + 0x1c) != 0) {
      if (*(char *)((int)unaff_ESI + 0x5c) == 'w') {
        uVar3 = FUN_3614a6e0((int)unaff_ESI);
      }
      else if (*(char *)((int)unaff_ESI + 0x5c) == 'r') {
        uVar3 = FUN_3614f5a0((int)unaff_ESI);
      }
    }
    if (((*(FILE **)((int)unaff_ESI + 0x40) != (FILE *)0x0) &&
        (iVar1 = fclose(*(FILE **)((int)unaff_ESI + 0x40)), iVar1 != 0)) &&
       (piVar2 = _errno(), *piVar2 != 0x1d)) {
      uVar3 = 0xffffffff;
    }
    if ((int)*(uint *)((int)unaff_ESI + 0x38) < 0) {
      uVar3 = *(uint *)((int)unaff_ESI + 0x38);
    }
    if (*(void **)((int)unaff_ESI + 0x44) != (void *)0x0) {
      free(*(void **)((int)unaff_ESI + 0x44));
    }
    if (*(void **)((int)unaff_ESI + 0x48) != (void *)0x0) {
      free(*(void **)((int)unaff_ESI + 0x48));
    }
    if (*(void **)((int)unaff_ESI + 0x54) != (void *)0x0) {
      free(*(void **)((int)unaff_ESI + 0x54));
    }
    free(unaff_ESI);
    return uVar3;
  }
  return 0xfffffffe;
}

