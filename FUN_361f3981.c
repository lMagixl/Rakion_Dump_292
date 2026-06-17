
void __cdecl FUN_361f3981(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_10;
  int local_c;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x67] = (int)puVar3;
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = &LAB_361f3545;
  puVar3[1] = FUN_361f355f;
  if ((char)param_1[0x42] != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  if (((char)param_1[0x12] == '\0') || (param_1[0x45] < 2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_c = 0;
  if (0 < param_1[8]) {
    puVar7 = puVar3 + 0xd;
    piVar8 = (int *)(param_1[0x31] + 0x24);
    do {
      iVar4 = (piVar8[-7] * *piVar8) / param_1[0x45];
      iVar5 = (piVar8[-6] * *piVar8) / param_1[0x45];
      iVar9 = param_1[0x44];
      iVar1 = param_1[0x43];
      puVar7[0xc] = iVar5;
      if ((char)piVar8[3] == '\0') {
        *puVar7 = &LAB_361f3630;
      }
      else if ((iVar4 == iVar1) && (iVar5 == iVar9)) {
        *puVar7 = &LAB_361f3625;
      }
      else {
        if (iVar4 * 2 == iVar1) {
          if (iVar5 == iVar9) {
            if ((bVar2) && (2 < (uint)piVar8[1])) {
              *puVar7 = FUN_361f37d6;
            }
            else {
              *puVar7 = FUN_361f3715;
            }
          }
          else {
            if ((iVar4 * 2 != iVar1) || (iVar5 * 2 != iVar9)) goto LAB_361f3ab6;
            if ((bVar2) && (2 < (uint)piVar8[1])) {
              *puVar7 = FUN_361f387a;
              *(undefined1 *)(puVar3 + 2) = 1;
            }
            else {
              *puVar7 = FUN_361f376c;
            }
          }
        }
        else {
LAB_361f3ab6:
          if ((iVar1 % iVar4 == 0) && (iVar9 % iVar5 == 0)) {
            local_10 = (undefined1)(iVar1 / iVar4);
            *puVar7 = FUN_361f3638;
            *(undefined1 *)(local_c + 0x8c + (int)puVar3) = local_10;
            *(char *)(local_c + 0x96 + (int)puVar3) = (char)(iVar9 / iVar5);
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x25;
            (**(code **)*param_1)(param_1);
          }
        }
        iVar9 = param_1[0x44];
        iVar1 = param_1[1];
        iVar4 = FUN_361e38e8(param_1[0x17],param_1[0x43]);
        uVar6 = (**(code **)(iVar1 + 8))(param_1,1,iVar4,iVar9);
        puVar7[-10] = uVar6;
      }
      local_c = local_c + 1;
      puVar7 = puVar7 + 1;
      piVar8 = piVar8 + 0x15;
    } while (local_c < param_1[8]);
  }
  return;
}

