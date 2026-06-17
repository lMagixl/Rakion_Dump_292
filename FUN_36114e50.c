
void __fastcall FUN_36114e50(void *param_1)

{
  char *pcVar1;
  void *this;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iStack_7c;
  int local_74;
  undefined1 local_6c [20];
  undefined1 auStack_58 [28];
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36218558;
  local_c = ExceptionList;
  this = (void *)((int)param_1 + 0xdcc);
  local_74 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar4 = FUN_360caf20((int)this);
  if (0 < iVar4) {
    do {
      piVar5 = (int *)FUN_360cafb0(this,local_74);
      if ((int *)piVar5[0x2e] != (int *)0x0) {
        uVar6 = (**(code **)(*(int *)piVar5[0x2e] + 100))(local_6c,0x7fff);
        uVar6 = (**(code **)(*piVar5 + 100))(auStack_58,uVar6);
        FUN_36114d60(param_1,uVar6);
      }
      for (iVar4 = *(int *)(piVar5[0x1e] + 0x20); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
        iStack_7c = 0;
        if (0 < *(int *)(iVar4 + 0xc)) {
          iVar9 = 0;
          do {
            iVar8 = *(int *)(iVar4 + 8) + iVar9;
            if (*(int *)(*(int *)(iVar4 + 8) + iVar9) == 7) {
              pcVar7 = *(char **)(iVar8 + 0x10);
              pcVar1 = pcVar7 + 1;
              do {
                cVar2 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar2 != '\0');
              if ((pcVar7 != pcVar1) &&
                 (piVar3 = *(int **)((int)piVar5 + *(int *)(iVar8 + 0xc)), piVar3 != (int *)0x0)) {
                uVar6 = (**(code **)(*piVar3 + 100))(auStack_3c,*(undefined4 *)(iVar8 + 0x1c));
                uVar6 = (**(code **)(*piVar5 + 100))(auStack_28,uVar6);
                FUN_36114d60(param_1,uVar6);
              }
            }
            iStack_7c = iStack_7c + 1;
            iVar9 = iVar9 + 0x20;
          } while (iStack_7c < *(int *)(iVar4 + 0xc));
        }
      }
      local_74 = local_74 + 1;
      iVar4 = FUN_360caf20((int)this);
    } while (local_74 < iVar4);
  }
  ExceptionList = local_c;
  return;
}

