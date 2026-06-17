
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_360b2fe0(void *this,void *param_1,void *param_2)

{
  void *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  char *pcVar4;
  void *this_01;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  double *pdVar9;
  float *pfVar10;
  void *pvVar11;
  int iVar12;
  CObjectPolygonEdge *this_02;
  int *piVar13;
  int iVar14;
  int iVar15;
  CObjectVertex **ppCVar16;
  CObjectVertex **ppCVar17;
  int local_d8;
  int local_c8;
  CObjectVertex *local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CObjectVertex *local_94;
  int local_90 [32];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213da1;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  pcVar4 = StringDuplicate(&DAT_36222fa0);
  iVar14 = 0;
  local_4 = 0;
  FUN_3604a790(param_2,0);
  FUN_360502d0();
  FUN_3604a790(param_1,0);
  FUN_360502d0();
  this_01 = (void *)FUN_3604a790(param_2,0);
  iVar5 = FUN_36054350((int)this_01 + 0x28);
  FUN_360b43d0(this,iVar5);
  iVar15 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = FUN_360b3a90((int)this);
  if (0 < iVar5) {
    do {
      puVar6 = (undefined4 *)FUN_360b3a80(this,iVar15);
      iVar5 = FUN_3604f3f0((void *)((int)this_01 + 0x28),iVar14);
      pcVar7 = StringDuplicate(*(char **)(iVar5 + 8));
      StringFree((char *)*puVar6);
      *puVar6 = pcVar7;
      iVar5 = FUN_360b3a80(this,iVar15);
      iVar8 = FUN_3604f3f0((void *)((int)this_01 + 0x28),iVar14);
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 1;
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar8 + 0x14);
      iVar5 = FUN_360b3a90((int)this);
    } while (iVar15 < iVar5);
  }
  local_4 = local_4 & 0xffffff00;
  this_00 = (void *)((int)this + 0x28);
  iVar5 = FUN_3604aa70((int)this_01);
  FUN_360b4470(this_00,iVar5);
  iVar14 = 0;
  iVar5 = FUN_360b0fc0((int)this_00);
  if (0 < iVar5) {
    do {
      pdVar9 = (double *)FUN_3604a710(this_01,iVar14);
      dVar1 = pdVar9[2];
      dVar2 = pdVar9[1];
      dVar3 = *pdVar9;
      pfVar10 = (float *)FUN_360b3ab0(this_00,iVar14);
      *pfVar10 = (float)dVar3;
      pfVar10[1] = (float)dVar2;
      pfVar10[2] = (float)dVar1;
      pvVar11 = (void *)FUN_3604a790(param_1,0);
      pdVar9 = (double *)FUN_3604a710(pvVar11,iVar14);
      dVar1 = pdVar9[2];
      dVar2 = pdVar9[1];
      dVar3 = *pdVar9;
      iVar5 = FUN_360b3ab0(this_00,iVar14);
      *(float *)(iVar5 + 0xc) = (float)dVar3;
      *(float *)(iVar5 + 0x10) = (float)dVar2;
      *(float *)(iVar5 + 0x14) = (float)dVar1;
      pfVar10 = (float *)FUN_360b3ab0(this_00,iVar14);
      local_ac = *pfVar10;
      local_a8 = pfVar10[1];
      local_a4 = pfVar10[2];
      local_a0 = local_ac;
      local_9c = local_a8;
      local_98 = local_a4;
      FUN_360b1850((void *)((int)this + 0x3c),&local_ac);
      iVar14 = iVar14 + 1;
      iVar5 = FUN_360b0fc0((int)this_00);
    } while (iVar14 < iVar5);
  }
  pvVar11 = (void *)((int)this + 0x14);
  iVar5 = FUN_3604a760((int)this_01 + 0x50);
  FUN_360b4420(pvVar11,iVar5);
  local_c8 = 0;
  local_d8 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar5 = FUN_360b3d10((int)pvVar11);
  if (0 < iVar5) {
    do {
      iVar5 = FUN_3604a750((void *)((int)this_01 + 0x50),local_c8);
      iVar14 = FUN_360b3aa0(pvVar11,local_d8);
      iVar15 = FUN_3604aa50(iVar5 + 0x4c);
      iVar8 = 0;
      if (0 < iVar15) {
        do {
          iVar12 = FUN_361bf99c(0xc);
          local_90[iVar8] = iVar12;
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar15);
      }
      iVar8 = 0;
      if (0 < iVar15) {
        do {
          piVar13 = (int *)local_90[iVar8];
          ppCVar17 = &local_94;
          ppCVar16 = &local_b0;
          this_02 = (CObjectPolygonEdge *)FUN_3604a700((void *)(iVar5 + 0x4c),iVar8);
          CObjectPolygonEdge::GetVertices(this_02,ppCVar16,ppCVar17);
          iVar12 = thunk_FUN_360b1400(this_01,(int)local_b0);
          piVar13[1] = iVar14;
          iVar12 = FUN_360b3ab0(this_00,iVar12);
          piVar13[2] = iVar12;
          iVar8 = iVar8 + 1;
          *piVar13 = local_90[iVar8 % iVar15];
        } while (iVar8 < iVar15);
      }
      piVar13 = (int *)FUN_360b3aa0(pvVar11,local_d8);
      *piVar13 = local_90[0];
      iVar14 = FUN_360b3aa0(pvVar11,local_d8);
      iVar5 = thunk_FUN_360b1430((void *)((int)this_01 + 0x28),*(int *)(iVar5 + 0x60));
      *(int *)(iVar14 + 4) = iVar5;
      local_c8 = local_c8 + 1;
      local_d8 = local_d8 + 1;
      iVar5 = FUN_360b3d10((int)pvVar11);
    } while (local_d8 < iVar5);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_3604a790(param_1,0);
  FUN_360502e0();
  FUN_3604a790(param_2,0);
  FUN_360502e0();
  local_4 = 0xffffffff;
  StringFree(pcVar4);
  ExceptionList = local_c;
  return;
}

