
int * __cdecl FUN_360c0af0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_EBX;
  int iVar6;
  int *unaff_ESI;
  int iVar7;
  bool bVar8;
  int local_4;
  
  iVar6 = 0;
  local_4 = 0;
  iVar2 = FUN_360c5ad0(&DAT_362cbbb0);
  if (0 < iVar2) {
    do {
      piVar3 = (int *)(DAT_362cbbb4 + iVar6);
      if (*(int *)(DAT_362cbbb4 + 0xc + iVar6) == 0) {
        uVar4 = param_1 & 0x80000001;
        bVar8 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar8 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
        }
        iVar2 = *piVar3;
        if (bVar8) {
          if ((*unaff_EBX == iVar2) && (*unaff_ESI == piVar3[1])) goto LAB_360c0bea;
          *piVar3 = piVar3[1];
          piVar3[1] = piVar3[2];
          iVar5 = *piVar3;
          piVar3[2] = iVar2;
          if ((*unaff_EBX == iVar5) && (*unaff_ESI == piVar3[1])) goto LAB_360c0bea;
          iVar7 = piVar3[1];
          *piVar3 = iVar7;
          piVar3[1] = iVar2;
          piVar3[2] = iVar5;
          if (*unaff_EBX == iVar7) {
            iVar1 = *unaff_ESI;
LAB_360c0bb0:
            if (iVar1 == iVar2) {
LAB_360c0bea:
              *unaff_EBX = *unaff_ESI;
              *unaff_ESI = piVar3[2];
              return piVar3;
            }
          }
        }
        else {
          if ((*unaff_ESI == iVar2) && (*unaff_EBX == piVar3[1])) goto LAB_360c0bea;
          *piVar3 = piVar3[1];
          piVar3[1] = piVar3[2];
          iVar5 = *piVar3;
          piVar3[2] = iVar2;
          if ((*unaff_ESI == iVar5) && (*unaff_EBX == piVar3[1])) goto LAB_360c0bea;
          iVar7 = piVar3[1];
          *piVar3 = iVar7;
          piVar3[1] = iVar2;
          piVar3[2] = iVar5;
          if (*unaff_ESI == iVar7) {
            iVar1 = *unaff_EBX;
            goto LAB_360c0bb0;
          }
        }
        *piVar3 = iVar2;
        piVar3[1] = iVar5;
        piVar3[2] = iVar7;
      }
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 0x10;
      iVar2 = FUN_360c5ad0(&DAT_362cbbb0);
    } while (local_4 < iVar2);
  }
  *unaff_EBX = -1;
  *unaff_ESI = -1;
  return (int *)0x0;
}

