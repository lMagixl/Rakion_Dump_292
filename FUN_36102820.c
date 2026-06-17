
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36102820(int *param_1)

{
  short *psVar1;
  ushort uVar2;
  double dVar3;
  double dVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  double dVar13;
  ulonglong uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  int local_3c;
  uint local_38;
  uint local_34;
  double local_20;
  
  dVar17 = _DAT_36227d98;
  local_20 = _DAT_36227d98;
  local_3c = 0;
  local_34 = 0;
  local_38 = 0xffffffff;
  if (0 < *param_1) {
    puVar6 = (undefined4 *)thunk_FUN_361bf99c(param_1[1] << 1);
    iVar7 = param_1[1];
    puVar11 = puVar6;
    for (uVar9 = (uint)(iVar7 << 1) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (uVar9 = iVar7 << 1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar7 = 0;
    iVar8 = 0;
    if (0 < *param_1) {
      do {
        iVar10 = param_1[1] * iVar7;
        iVar7 = iVar7 + 1;
        iVar8 = iVar7 * param_1[1];
        uVar9 = 0;
        if (iVar10 < iVar8) {
          piVar12 = (int *)(param_1[4] + 4 + iVar10 * 8);
          iVar8 = iVar8 - iVar10;
          do {
            if (*piVar12 != 0) {
              uVar9 = uVar9 + 1;
              local_3c = local_3c + 1;
            }
            piVar12 = piVar12 + 2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_34 < uVar9) {
            local_34 = uVar9;
          }
        }
        if (uVar9 < local_38) {
          local_38 = uVar9;
        }
        psVar1 = (short *)((int)puVar6 + uVar9 * 2);
        *psVar1 = *psVar1 + 1;
        dVar17 = (double)(int)uVar9 + dVar17;
        local_20 = (double)(int)(uVar9 * uVar9) + local_20;
        iVar8 = local_3c;
      } while (iVar7 < *param_1);
    }
    dVar4 = (double)iVar8;
    if (iVar8 < 0) {
      dVar4 = dVar4 + _DAT_3622dd20;
    }
    iVar7 = *param_1;
    iVar10 = param_1[1];
    dVar3 = dVar17 / (double)iVar7;
    pcVar5 = Translate(s_ETRSHash_table_efficiency_report_36236204,4);
    CPrintF(pcVar5);
    pcVar5 = Translate(s_ETRS_Compartments___ld__Slots_pe_36236228,4);
    CPrintF(pcVar5);
    dVar13 = (dVar4 / (double)(iVar10 * iVar7)) * _DAT_362255b0;
    dVar15 = dVar3;
    pcVar5 = Translate(s_ETRS_Percentage_of_full_slots____36236270,4);
    CPrintF(pcVar5,dVar13,dVar15);
    uVar16 = CONCAT44(local_38,local_34);
    pcVar5 = Translate(s_ETRS_Max_slots_full___ld__Min_sl_362362c8,4);
    CPrintF(pcVar5,uVar16);
    dVar13 = (double)(iVar8 + -1);
    if (iVar8 + -1 < 0) {
      dVar13 = dVar13 + _DAT_3622dd20;
    }
    dVar17 = SQRT((dVar4 * dVar3 * dVar3 + (local_20 - (dVar3 * dVar17 + dVar3 * dVar17))) / dVar13)
    ;
    pcVar5 = Translate(s_ETRS_Standard_deviation_is___5_2_362362fc,4);
    CPrintF(pcVar5,dVar17);
    pcVar5 = Translate(s_ETRS_Distribution_of_number_of_f_36236320,4);
    CPrintF(pcVar5);
    iVar7 = 0;
    if (0 < param_1[1]) {
      do {
        uVar2 = *(ushort *)((int)puVar6 + iVar7 * 2);
        dVar17 = (double)((uint)uVar2 * 100) / (double)*param_1;
        uVar14 = (ulonglong)CONCAT24(uVar2,iVar7);
        pcVar5 = Translate(s_ETRS__d_slots_full_in__4d___5_2f_36236360,4);
        CPrintF(pcVar5,uVar14,dVar17);
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1[1]);
    }
    operator_delete__(puVar6);
    return;
  }
  pcVar5 = Translate(s_I_ETRSHashTable_not_initialized__362361e2 + 2,4);
  CPrintF(pcVar5);
  return;
}

