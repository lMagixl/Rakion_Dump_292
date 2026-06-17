
bool __cdecl FUN_36146700(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar1 = *(int *)(*param_1 + 0x48);
  iVar2 = *(int *)(*param_1 + 0x4c);
  if (((((float)param_1[iVar1 + 100] <= *(float *)(param_2 + -4 + iVar1 * 4)) &&
       (*(float *)(param_2 + -4 + iVar1 * 4) <= (float)param_1[iVar1 + 0x67])) &&
      ((float)param_1[iVar2 + 100] <= *(float *)(param_2 + -4 + iVar2 * 4))) &&
     (*(float *)(param_2 + -4 + iVar2 * 4) <= (float)param_1[iVar2 + 0x67])) {
    local_c = *(undefined4 *)(param_2 + -4 + iVar1 * 4);
    iVar5 = param_1[1];
    local_8 = *(undefined4 *)(param_2 + -4 + iVar2 * 4);
    local_4 = 0;
    if (0 < iVar5) {
      piVar6 = (int *)param_1[2];
      iVar1 = iVar1 * 4 + -4;
      do {
        iVar3 = *(int *)*piVar6;
        iVar4 = ((int *)*piVar6)[1];
        CIntersector::AddEdge
                  ((CIntersector *)&local_c,*(float *)(iVar1 + iVar3 + 4),
                   *(float *)(iVar2 * 4 + iVar3),*(float *)(iVar1 + iVar4 + 4),
                   *(float *)(iVar2 * 4 + iVar4));
        piVar6 = piVar6 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_4 = local_4 & 0x80000001;
    if ((int)local_4 < 0) {
      local_4 = (local_4 - 1 | 0xfffffffe) + 1;
    }
    return local_4 != 0;
  }
  return false;
}

