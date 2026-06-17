
void __cdecl FUN_360e1c30(undefined4 *param_1)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int local_18;
  int local_10;
  
  iVar3 = FUN_3604b9e0((int)param_1);
  if (iVar3 != 0) {
    do {
      bVar2 = false;
      local_10 = 0;
      iVar3 = FUN_3604b9e0((int)param_1);
      if (iVar3 < 1) break;
      do {
        pdVar4 = (double *)FUN_3604bc20(param_1,local_10);
        if (*(int *)(pdVar4 + 6) != 0) {
          pdVar1 = pdVar4 + 3;
          if (((*pdVar4 == pdVar4[3]) && (pdVar4[1] == pdVar4[4])) && (pdVar4[2] == pdVar4[5])) {
            *(undefined4 *)(pdVar4 + 6) = 0;
LAB_360e1e2e:
            bVar2 = true;
          }
          else {
            local_18 = 0;
            iVar3 = FUN_3604b9e0((int)param_1);
            if (0 < iVar3) {
              do {
                pdVar5 = (double *)FUN_3604bc20(param_1,local_18);
                if (((pdVar4 != pdVar5) && (*(int *)(pdVar5 + 6) != 0)) &&
                   (*(int *)(pdVar4 + 6) == *(int *)(pdVar5 + 6))) {
                  if (((*pdVar4 == pdVar5[3]) && (pdVar4[1] == pdVar5[4])) &&
                     ((pdVar4[2] == pdVar5[5] &&
                      (((*pdVar1 == *pdVar5 && (pdVar4[4] == pdVar5[1])) && (pdVar4[5] == pdVar5[2])
                       ))))) {
                    *(undefined4 *)(pdVar4 + 6) = 0;
                    *(undefined4 *)(pdVar5 + 6) = 0;
                    goto LAB_360e1e2e;
                  }
                  if (((*pdVar1 == *pdVar5) && (pdVar4[4] == pdVar5[1])) && (pdVar4[5] == pdVar5[2])
                     ) {
                    *(undefined4 *)pdVar1 = *(undefined4 *)(pdVar5 + 3);
                    *(undefined4 *)((int)pdVar4 + 0x1c) = *(undefined4 *)((int)pdVar5 + 0x1c);
                    *(undefined4 *)(pdVar4 + 4) = *(undefined4 *)(pdVar5 + 4);
                    *(undefined4 *)((int)pdVar4 + 0x24) = *(undefined4 *)((int)pdVar5 + 0x24);
                    *(undefined4 *)(pdVar4 + 5) = *(undefined4 *)(pdVar5 + 5);
                    *(undefined4 *)((int)pdVar4 + 0x2c) = *(undefined4 *)((int)pdVar5 + 0x2c);
                    *(undefined4 *)(pdVar5 + 6) = 0;
                  }
                  else {
                    if (((*pdVar4 != pdVar5[3]) || (pdVar4[1] != pdVar5[4])) ||
                       (pdVar4[2] != pdVar5[5])) goto LAB_360e1e0b;
                    *(undefined4 *)pdVar4 = *(undefined4 *)pdVar5;
                    *(undefined4 *)((int)pdVar4 + 4) = *(undefined4 *)((int)pdVar5 + 4);
                    *(undefined4 *)(pdVar4 + 1) = *(undefined4 *)(pdVar5 + 1);
                    *(undefined4 *)((int)pdVar4 + 0xc) = *(undefined4 *)((int)pdVar5 + 0xc);
                    *(undefined4 *)(pdVar4 + 2) = *(undefined4 *)(pdVar5 + 2);
                    *(undefined4 *)((int)pdVar4 + 0x14) = *(undefined4 *)((int)pdVar5 + 0x14);
                    *(undefined4 *)(pdVar5 + 6) = 0;
                  }
                  bVar2 = true;
                }
LAB_360e1e0b:
                local_18 = local_18 + 1;
                iVar3 = FUN_3604b9e0((int)param_1);
              } while (local_18 < iVar3);
            }
          }
        }
        local_10 = local_10 + 1;
        iVar3 = FUN_3604b9e0((int)param_1);
      } while (local_10 < iVar3);
    } while (bVar2);
    FUN_360e1b40(param_1);
  }
  return;
}

