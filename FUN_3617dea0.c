
void FUN_3617dea0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int *piVar6;
  int local_c;
  int local_8;
  
  local_8 = FUN_36179270(unaff_ESI + 0x110);
  if (0 < local_8) {
    local_c = 0;
    do {
      iVar5 = *(int *)(unaff_ESI + 0x104);
      iVar4 = *(int *)(*(int *)(unaff_ESI + 0x114) + local_c) * 0x160;
      iVar1 = *(int *)(iVar4 + 0xc + iVar5);
      iVar2 = *(int *)(iVar4 + 8 + iVar5);
      piVar6 = (int *)(iVar4 + iVar5 + 0x18);
      iVar5 = 4;
      do {
        iVar4 = *piVar6;
        if ((-1 < iVar4) &&
           ((iVar3 = *(int *)(iVar4 * 0x160 + 0xc + *(int *)(unaff_ESI + 0x104)), iVar2 <= iVar3 ||
            (iVar1 <= iVar3)))) {
          FUN_36178920(unaff_ESI,iVar4,1);
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_c = local_c + 0xc;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

