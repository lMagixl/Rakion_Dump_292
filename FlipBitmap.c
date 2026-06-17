
/* void __cdecl FlipBitmap(unsigned char *,unsigned char *,long,long,long,int) */

void __cdecl
FlipBitmap(uchar *param_1,uchar *param_2,long param_3,long param_4,long param_5,int param_6)

{
  uchar uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uchar *local_c;
  int local_8;
  int local_4;
  
                    /* 0x8a970  1655  ?FlipBitmap@@YAXPAE0JJJH@Z */
  iVar6 = (param_6 != 0) + 3;
  if (param_5 == 0) {
    if (param_1 == param_2) {
      return;
    }
    uVar7 = iVar6 * param_3 * param_4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  local_c = param_1;
  if (param_5 == 1) {
    local_4 = param_4;
    param_4 = -iVar6;
    iVar5 = param_3;
  }
  else {
    if (param_5 == 2) {
      iVar4 = (param_4 + -1) * iVar6 * param_3;
      local_4 = (param_4 + 1) / 2;
      iVar12 = -(iVar6 * param_3);
      iVar5 = param_3;
      param_4 = iVar6;
      goto LAB_3608aa5c;
    }
    iVar5 = param_3 * param_4;
    local_4 = (param_4 + 1) / 2;
    param_4 = iVar6;
  }
  iVar4 = (iVar5 + -1) * iVar6;
  iVar12 = iVar6 * param_3;
  iVar5 = (param_3 + 1) / 2;
LAB_3608aa5c:
  param_6 = (int)param_1 + iVar4;
  param_5 = iVar4 + (int)param_2;
  if (0 < local_4) {
    iVar4 = (int)param_2 - (int)param_1;
    do {
      if (0 < iVar5) {
        iVar10 = param_5 - param_6;
        puVar9 = local_c;
        puVar11 = (undefined4 *)param_6;
        local_8 = iVar5;
        do {
          if (iVar6 == 3) {
            uVar2 = *(undefined2 *)puVar9;
            *(undefined2 *)(puVar9 + iVar4) = *(undefined2 *)puVar11;
            *(undefined2 *)((int)puVar11 + iVar10) = uVar2;
            uVar1 = puVar9[2];
            puVar9[iVar4 + 2] = *(uchar *)((int)puVar11 + 2);
            *(uchar *)((int)puVar11 + iVar10 + 2) = uVar1;
          }
          else {
            uVar3 = *(undefined4 *)puVar9;
            *(undefined4 *)(puVar9 + iVar4) = *puVar11;
            *(undefined4 *)((int)puVar11 + iVar10) = uVar3;
          }
          puVar11 = (undefined4 *)((int)puVar11 + param_4);
          puVar9 = puVar9 + iVar6;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      local_c = local_c + iVar6 * param_3;
      param_6 = param_6 + iVar12;
      param_5 = param_5 + iVar12;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

