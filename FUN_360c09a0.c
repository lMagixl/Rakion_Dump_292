
void FUN_360c09a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  int local_8;
  int local_4;
  
  local_4 = 0;
  iVar2 = FUN_360c5ad0(&DAT_362cbbb0);
  if (0 < iVar2) {
    local_8 = 0;
    do {
      piVar3 = (int *)(DAT_362cbbb4 + local_8);
      if (piVar3[3] == 0) {
        *unaff_EDI = unaff_ESI[1];
        iVar2 = unaff_ESI[2];
        *unaff_EBX = iVar2;
        if ((iVar2 == *piVar3) && (*unaff_EDI == piVar3[1])) {
          return;
        }
        if ((iVar2 == piVar3[1]) && (*unaff_EDI == piVar3[2])) {
          return;
        }
        if ((iVar2 == piVar3[2]) && (*unaff_EDI == *piVar3)) {
          return;
        }
        uVar1 = *unaff_ESI;
        *unaff_ESI = unaff_ESI[1];
        iVar2 = unaff_ESI[2];
        unaff_ESI[2] = uVar1;
        unaff_ESI[1] = iVar2;
        *unaff_EDI = iVar2;
        iVar2 = unaff_ESI[2];
        *unaff_EBX = iVar2;
        if ((iVar2 == *piVar3) && (*unaff_EDI == piVar3[1])) {
          return;
        }
        if ((iVar2 == piVar3[1]) && (*unaff_EDI == piVar3[2])) {
          return;
        }
        if ((iVar2 == piVar3[2]) && (*unaff_EDI == *piVar3)) {
          return;
        }
        uVar1 = *unaff_ESI;
        *unaff_ESI = unaff_ESI[1];
        iVar2 = unaff_ESI[2];
        unaff_ESI[2] = uVar1;
        unaff_ESI[1] = iVar2;
        *unaff_EDI = iVar2;
        iVar2 = unaff_ESI[2];
        *unaff_EBX = iVar2;
        if ((iVar2 == *piVar3) && (*unaff_EDI == piVar3[1])) {
          return;
        }
        if ((iVar2 == piVar3[1]) && (*unaff_EDI == piVar3[2])) {
          return;
        }
        if ((iVar2 == piVar3[2]) && (*unaff_EDI == *piVar3)) {
          return;
        }
        uVar1 = *unaff_ESI;
        *unaff_ESI = unaff_ESI[1];
        unaff_ESI[1] = unaff_ESI[2];
        unaff_ESI[2] = uVar1;
      }
      local_8 = local_8 + 0x10;
      local_4 = local_4 + 1;
      iVar2 = FUN_360c5ad0(&DAT_362cbbb0);
    } while (local_4 < iVar2);
  }
  *unaff_EDI = -1;
  *unaff_EBX = -1;
  DAT_362cbaa8 = DAT_362cbaa8 + 1;
  return;
}

