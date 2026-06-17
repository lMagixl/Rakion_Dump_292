
void __cdecl FUN_360e29a0(undefined4 *param_1)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int local_10;
  int local_8;
  
  iVar3 = FUN_360defb0((int)param_1);
  if (iVar3 != 0) {
    do {
      bVar2 = false;
      local_8 = 0;
      iVar3 = FUN_360defb0((int)param_1);
      if (iVar3 < 1) break;
      do {
        pfVar4 = (float *)FUN_360def70(param_1,local_8);
        if (pfVar4[6] != 0.0) {
          pfVar1 = pfVar4 + 3;
          if (((*pfVar4 == pfVar4[3]) && (pfVar4[1] == pfVar4[4])) && (pfVar4[2] == pfVar4[5])) {
            pfVar4[6] = 0.0;
LAB_360e2b69:
            bVar2 = true;
          }
          else {
            local_10 = 0;
            iVar3 = FUN_360defb0((int)param_1);
            if (0 < iVar3) {
              do {
                pfVar5 = (float *)FUN_360def70(param_1,local_10);
                if (((pfVar4 != pfVar5) && (pfVar5[6] != 0.0)) && (pfVar4[6] == pfVar5[6])) {
                  if (((*pfVar4 == pfVar5[3]) && (pfVar4[1] == pfVar5[4])) &&
                     ((pfVar4[2] == pfVar5[5] &&
                      (((*pfVar1 == *pfVar5 && (pfVar4[4] == pfVar5[1])) && (pfVar4[5] == pfVar5[2])
                       ))))) {
                    pfVar4[6] = 0.0;
                    pfVar5[6] = 0.0;
                    goto LAB_360e2b69;
                  }
                  if (((*pfVar1 == *pfVar5) && (pfVar4[4] == pfVar5[1])) && (pfVar4[5] == pfVar5[2])
                     ) {
                    *pfVar1 = pfVar5[3];
                    pfVar4[4] = pfVar5[4];
                    pfVar4[5] = pfVar5[5];
                  }
                  else {
                    if (((*pfVar4 != pfVar5[3]) || (pfVar4[1] != pfVar5[4])) ||
                       (pfVar4[2] != pfVar5[5])) goto LAB_360e2b45;
                    *pfVar4 = *pfVar5;
                    pfVar4[1] = pfVar5[1];
                    pfVar4[2] = pfVar5[2];
                  }
                  bVar2 = true;
                  pfVar5[6] = 0.0;
                }
LAB_360e2b45:
                local_10 = local_10 + 1;
                iVar3 = FUN_360defb0((int)param_1);
              } while (local_10 < iVar3);
            }
          }
        }
        local_8 = local_8 + 1;
        iVar3 = FUN_360defb0((int)param_1);
      } while (local_8 < iVar3);
    } while (bVar2);
    FUN_360e28b0(param_1);
  }
  return;
}

