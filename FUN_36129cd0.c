
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36129cd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *this;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  CEntityEvent *local_c;
  CEntityEvent *local_8;
  uint local_4;
  
  if (((param_1[0x32] & 0x420000U) == 0) &&
     ((*(uint *)(*(int *)(*(int *)(*(int *)(param_1[0x6b] + 0x38) + 0x14) + 0x668) + 0x10) &
      0x200000) == 0)) {
    iVar4 = *param_1;
    this = (float *)(iVar4 + 4);
    local_1c = (DAT_362fcd20 * *this +
               DAT_362fcd28 * *(float *)(iVar4 + 0xc) + DAT_362fcd24 * *(float *)(iVar4 + 8)) -
               *(float *)(iVar4 + 0x10);
    if ((((_DAT_3622e4f0 <= local_1c) &&
         (((local_1c = ABS(local_1c), local_1c <= DAT_362fcc08 &&
           (FUN_3605fbc0(this,&local_18,&DAT_362fcd20),
           (float)param_1[0x65] - _DAT_362280f0 <= local_18)) &&
          (local_18 <= (float)param_1[0x68] + _DAT_362280f0)))) &&
        ((((float)param_1[0x66] - _DAT_362280f0 <= local_14 &&
          (local_14 <= (float)param_1[0x69] + _DAT_362280f0)) &&
         ((float)param_1[0x67] - _DAT_362280f0 <= local_10)))) &&
       (local_10 <= (float)param_1[0x6a] + _DAT_362280f0)) {
      FUN_360cd910(this,&local_24,&local_20);
      local_c = (&_eeVoid)[local_24];
      iVar4 = param_1[1];
      local_8 = (&_eeVoid)[local_20];
      local_4 = 0;
      uVar6 = 0;
      if (0 < iVar4) {
        piVar5 = (int *)param_1[2];
        iVar1 = local_24 * 4 + -4;
        do {
          iVar2 = *(int *)*piVar5;
          iVar3 = ((int *)*piVar5)[1];
          CIntersector::AddEdge
                    ((CIntersector *)&local_c,*(float *)(iVar1 + iVar2 + 4),
                     *(float *)(local_20 * 4 + iVar2),*(float *)(iVar1 + iVar3 + 4),
                     *(float *)(local_20 * 4 + iVar3));
          piVar5 = piVar5 + 2;
          iVar4 = iVar4 + -1;
          uVar6 = local_4;
        } while (iVar4 != 0);
      }
      uVar6 = uVar6 & 0x80000001;
      bVar7 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar7 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar7) {
        DAT_362fcc08 = local_1c;
        DAT_362fcc10 = param_1;
        DAT_362fcd2c = local_18;
        DAT_362fcd30 = local_14;
        DAT_362fcd34 = local_10;
        return;
      }
    }
  }
  return;
}

