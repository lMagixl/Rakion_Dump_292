
void __cdecl FUN_3617b1f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_18;
  int local_10;
  
  iVar2 = param_1[6];
  iVar3 = *param_1;
  iVar9 = param_4 - param_2;
  local_10 = param_5 - param_3;
  iVar10 = 0;
  if (0 < local_10) {
    local_1c = param_3;
    iVar11 = param_3 * iVar2;
    do {
      iVar5 = 0;
      if (3 < iVar9) {
        fVar4 = (float)local_1c;
        iVar6 = iVar10 * 0xc;
        iVar8 = param_2 + 1;
        local_18 = (iVar9 - 4U >> 2) + 1;
        iVar5 = local_18 * 4;
        do {
          uVar1 = *(ushort *)(iVar3 + (iVar8 + -1 + iVar11) * 2);
          iVar7 = *(int *)(param_6 + 4);
          *(float *)(iVar7 + iVar6) = (float)(iVar8 + -1);
          iVar7 = iVar7 + iVar6;
          *(float *)(iVar7 + 4) = (float)uVar1;
          *(float *)(iVar7 + 8) = fVar4;
          uVar1 = *(ushort *)(iVar3 + (iVar11 + iVar8) * 2);
          iVar7 = *(int *)(param_6 + 4);
          *(float *)(iVar7 + iVar6 + 0xc) = (float)iVar8;
          iVar7 = iVar7 + iVar6 + 0xc;
          *(float *)(iVar7 + 4) = (float)uVar1;
          *(float *)(iVar7 + 8) = fVar4;
          uVar1 = *(ushort *)(iVar3 + (iVar8 + 1 + iVar11) * 2);
          iVar7 = *(int *)(param_6 + 4);
          *(float *)(iVar7 + iVar6 + 0x18) = (float)(iVar8 + 1);
          iVar7 = iVar7 + iVar6 + 0x18;
          *(float *)(iVar7 + 4) = (float)uVar1;
          *(float *)(iVar7 + 8) = fVar4;
          uVar1 = *(ushort *)(iVar3 + (iVar8 + 2 + iVar11) * 2);
          iVar7 = *(int *)(param_6 + 4);
          *(float *)(iVar7 + iVar6 + 0x24) = (float)(iVar8 + 2);
          iVar7 = iVar7 + iVar6 + 0x24;
          iVar8 = iVar8 + 4;
          iVar10 = iVar10 + 4;
          iVar6 = iVar6 + 0x30;
          *(float *)(iVar7 + 4) = (float)uVar1;
          *(float *)(iVar7 + 8) = fVar4;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      if (iVar5 < iVar9) {
        param_1 = (int *)(param_2 + iVar5);
        iVar5 = iVar9 - iVar5;
        iVar6 = iVar10 * 0xc;
        iVar10 = iVar10 + iVar5;
        do {
          uVar1 = *(ushort *)(iVar3 + ((int)param_1 + iVar11) * 2);
          iVar8 = *(int *)(param_6 + 4);
          *(float *)(iVar8 + iVar6) = (float)(int)param_1;
          iVar8 = iVar8 + iVar6;
          iVar6 = iVar6 + 0xc;
          param_1 = (int *)((int)param_1 + 1);
          iVar5 = iVar5 + -1;
          *(float *)(iVar8 + 4) = (float)uVar1;
          *(float *)(iVar8 + 8) = (float)local_1c;
        } while (iVar5 != 0);
      }
      iVar11 = iVar11 + iVar2;
      local_1c = local_1c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

