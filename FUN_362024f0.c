
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_362024f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  
  iVar1 = param_1[2];
  iVar2 = *param_1;
  iVar3 = param_1[1];
  iVar5 = FUN_361bf99c(iVar1 * iVar3 * iVar2);
  local_1c = 0;
  if (0 < iVar3) {
    local_18 = 0;
    do {
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = 0;
          if (0 < iVar1) {
            do {
              uVar4 = ftol();
              iVar6 = iVar6 + 1;
              *(undefined1 *)((local_18 + iVar7) * iVar1 + iVar5 + -1 + iVar6) = uVar4;
            } while (iVar6 < iVar1);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + iVar2;
    } while (local_1c < iVar3);
  }
  return;
}

