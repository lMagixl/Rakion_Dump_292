
void FUN_36177a80(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int unaff_EBX;
  float *pfVar5;
  float *this;
  int local_14;
  int local_10;
  int local_8;
  int local_4;
  
  local_4 = FUN_361743a0((undefined4 *)(unaff_EBX + 0xf8));
  if (1 < local_4) {
    local_4 = local_4 + -1;
    local_14 = 0x10;
    do {
      local_8 = *(int *)(*(int *)(unaff_EBX + 0xfc) + 4 + local_14);
      if (0 < local_8) {
        iVar1 = *(int *)(*(int *)(unaff_EBX + 0xfc) + local_14) * 0x2c;
        do {
          this = (float *)(*(int *)(unaff_EBX + 0xf4) + iVar1);
          pfVar5 = this + 7;
          local_10 = 4;
          do {
            if (*pfVar5 != -NAN) {
              pfVar2 = (float *)((int)*pfVar5 * 0x2c + *(int *)(unaff_EBX + 0xf4));
              iVar3 = 1;
              pfVar4 = this + 3;
              do {
                if (*pfVar4 < pfVar4[-3]) {
                  *this = *pfVar2;
                  this[1] = pfVar2[1];
                  this[2] = pfVar2[2];
                  this[3] = pfVar2[3];
                  this[4] = pfVar2[4];
                  this[5] = pfVar2[5];
                  goto LAB_36177b22;
                }
                iVar3 = iVar3 + 1;
                pfVar4 = pfVar4 + 1;
              } while (iVar3 < 4);
              FUN_360b1850(this,pfVar2);
            }
LAB_36177b22:
            pfVar5 = pfVar5 + 1;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          iVar1 = iVar1 + 0x2c;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      local_14 = local_14 + 0x10;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

