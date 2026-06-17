
/* public: void __thiscall CWorld::WriteState_net_t(class CTStream *) */

void __thiscall CWorld::WriteState_net_t(CWorld *this,CTStream *param_1)

{
  CTStream *this_00;
  int iVar1;
  CEntity *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  CWorld *pCVar10;
  int iVar11;
  CWorld *pCVar12;
  CWorld *local_1c;
  CWorld *local_18;
  int local_14;
  CWorld *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
                    /* 0xd8f10  3993  ?WriteState_net_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621513e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  SetFPUPrecision(1);
  local_18._0_1_ = DAT_3623269c;
  local_1c = (CWorld *)DAT_36232698;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_1c);
  pCVar2 = GetBackgroundViewer(this);
  if (pCVar2 == (CEntity *)0x0) {
    **(undefined4 **)(param_1 + 0x14) = 0xffffffff;
    iVar3 = *(int *)(param_1 + 0x14);
  }
  else {
    **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(pCVar2 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x14) = iVar3 + 4;
  iVar3 = FUN_36026a90(0x3630085c);
  local_1c = (CWorld *)DAT_362326a0;
  local_18 = (CWorld *)CONCAT31(local_18._1_3_,DAT_362326a4);
  CTStream::WriteID_t(param_1,(CChunkID *)&local_1c);
  **(int **)(param_1 + 0x14) = iVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  if (0 < iVar3) {
    iVar11 = 0;
    do {
      CTString::WriteToStreamShort((CTString *)(DAT_36300860 + iVar11 * 4),param_1);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  iVar3 = FUN_360d8720(0x362fce74);
  local_18 = (CWorld *)CONCAT31(local_18._1_3_,DAT_362326ac);
  local_1c = (CWorld *)DAT_362326a8;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_1c);
  **(int **)(param_1 + 0x14) = iVar3;
  iVar11 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  if (0 < iVar3) {
    do {
      puVar4 = (undefined4 *)FUN_360d8730(&DAT_362fce74,iVar11);
      **(undefined4 **)(param_1 + 0x14) = *puVar4;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      CTString::WriteToStreamShort((CTString *)(puVar4 + 1),param_1);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  local_18 = (CWorld *)CONCAT31(local_18._1_3_,DAT_362326b4);
  local_1c = (CWorld *)DAT_362326b0;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_1c);
  pCVar12 = this + 0x15c;
  local_1c = pCVar12;
  param_1 = (CTStream *)FUN_360caf20((int)pCVar12);
  iVar11 = 0;
  local_14 = 0;
  local_4 = 0;
  local_10 = pCVar12;
  iVar3 = FUN_360caf20((int)pCVar12);
  if (0 < iVar3) {
    do {
      piVar5 = (int *)FUN_360cafb0(pCVar12,iVar11);
      iVar3 = (**(code **)(*piVar5 + 0x90))();
      if ((iVar3 == 0) ||
         (((iVar3 = FUN_360cafb0(pCVar12,iVar11), (*(uint *)(iVar3 + 0x10) & 0x8000000) != 0 &&
           (iVar3 = FUN_360cafb0(pCVar12,iVar11), (~*(uint *)(iVar3 + 0x10) & 0x2000000) != 0)) &&
          (iVar3 = FUN_360cafb0(pCVar12,iVar11), (~*(uint *)(iVar3 + 0x10) & 0x800000) != 0)))) {
        param_1 = param_1 + -1;
      }
      iVar11 = iVar11 + 1;
      local_14 = iVar11;
      iVar3 = FUN_360caf20((int)pCVar12);
    } while (iVar11 < iVar3);
  }
  **(int **)(this_00 + 0x14) = (int)(param_1 + -3);
  iVar11 = 0;
  *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
  local_14 = 0;
  local_4 = 1;
  local_10 = pCVar12;
  iVar3 = FUN_360caf20((int)pCVar12);
  if (0 < iVar3) {
    do {
      piVar5 = (int *)FUN_360cafb0(pCVar12,iVar11);
      iVar3 = (**(code **)(*piVar5 + 0x90))();
      if (((iVar3 != 0) &&
          (((iVar3 = FUN_360cafb0(pCVar12,iVar11), (*(uint *)(iVar3 + 0x10) & 0x8000000) == 0 ||
            (iVar3 = FUN_360cafb0(pCVar12,iVar11), (~*(uint *)(iVar3 + 0x10) & 0x2000000) == 0)) ||
           (iVar3 = FUN_360cafb0(pCVar12,iVar11), (~*(uint *)(iVar3 + 0x10) & 0x800000) == 0)))) &&
         (((iVar3 = lstrcmpA(*(LPCSTR *)(piVar5[0x1e] + 0xc),s_Classes_Player_ecl_362326b8),
           iVar3 != 0 &&
           (iVar3 = lstrcmpA(*(LPCSTR *)(piVar5[0x1e] + 0xc),s_Classes_PlayerWeapons_ecl_362326cc),
           iVar3 != 0)) &&
          (iVar3 = lstrcmpA(*(LPCSTR *)(piVar5[0x1e] + 0xc),s_Classes_PlayerAnimator_ecl_362326e8),
          iVar3 != 0)))) {
        **(int **)(this_00 + 0x14) = piVar5[7];
        iVar3 = *(int *)(this_00 + 0x14);
        *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar3 + 4);
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(*(int *)(piVar5[0x1e] + 0x20) + 0x28);
        *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
        ::operator<<(this_00,(CPlacement3D *)(piVar5 + 0xf));
      }
      iVar11 = iVar11 + 1;
      local_14 = iVar11;
      iVar3 = FUN_360caf20((int)pCVar12);
    } while (iVar11 < iVar3);
  }
  pCVar12 = local_1c;
  pCVar10 = (CWorld *)0x0;
  local_18 = local_1c;
  local_1c = (CWorld *)0x0;
  local_4 = 2;
  iVar3 = FUN_360caf20((int)pCVar12);
  if (0 < iVar3) {
    do {
      piVar5 = (int *)FUN_360cafb0(pCVar12,(int)pCVar10);
      iVar3 = (**(code **)(*piVar5 + 0x90))();
      if (((iVar3 != 0) &&
          ((((iVar3 = FUN_360cafb0(pCVar12,(int)pCVar10), (*(uint *)(iVar3 + 0x10) & 0x8000000) == 0
             || (iVar3 = FUN_360cafb0(pCVar12,(int)pCVar10),
                (~*(uint *)(iVar3 + 0x10) & 0x2000000) == 0)) ||
            (iVar3 = FUN_360cafb0(pCVar12,(int)pCVar10), (~*(uint *)(iVar3 + 0x10) & 0x800000) == 0)
            ) && ((iVar3 = lstrcmpA(*(LPCSTR *)(piVar5[0x1e] + 0xc),s_Classes_Player_ecl_36232704),
                  iVar3 != 0 &&
                  (iVar3 = lstrcmpA(*(LPCSTR *)(piVar5[0x1e] + 0xc),
                                    s_Classes_PlayerWeapons_ecl_36232718), iVar3 != 0)))))) &&
         (iVar3 = lstrcmpA(*(LPCSTR *)(piVar5[0x1e] + 0xc),s_Classes_PlayerAnimator_ecl_36232734),
         iVar3 != 0)) {
        lVar6 = CTStream::GetPos_t(this_00);
        piVar5 = (int *)FUN_360cafb0(pCVar12,(int)pCVar10);
        (**(code **)(*piVar5 + 0x20))(this_00,1);
        lVar7 = CTStream::GetPos_t(this_00);
        CTStream::SetPos_t(this_00,lVar6 + 8);
        **(int **)(this_00 + 0x14) = (lVar7 - lVar6) + -0xc;
        *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
        CTStream::SetPos_t(this_00,lVar7);
        pCVar10 = local_1c;
      }
      pCVar10 = (CWorld *)((int)pCVar10 + 1);
      local_1c = pCVar10;
      iVar3 = FUN_360caf20((int)pCVar12);
    } while ((int)pCVar10 < iVar3);
  }
  local_4 = 0xffffffff;
  local_1c = (CWorld *)DAT_36232750;
  local_18._0_1_ = DAT_36232754;
  CTStream::WriteID_t(this_00,(CChunkID *)&local_1c);
  uVar8 = FUN_360d8710((int)(this + 0x84));
  **(uint **)(this_00 + 0x14) = uVar8;
  puVar4 = (undefined4 *)(*(int *)(this_00 + 0x14) + 4);
  *(undefined4 **)(this_00 + 0x14) = puVar4;
  uVar9 = 0;
  if (uVar8 != 0) {
    do {
      *puVar4 = *(undefined4 *)(*(int *)(this + 0x88) + uVar9 * 4);
      puVar4 = (undefined4 *)(*(int *)(this_00 + 0x14) + 4);
      uVar9 = uVar9 + 1;
      *(undefined4 **)(this_00 + 0x14) = puVar4;
    } while (uVar9 < uVar8);
  }
  local_18 = (CWorld *)CONCAT31(local_18._1_3_,DAT_3623275c);
  local_1c = (CWorld *)DAT_36232758;
  CTStream::WriteID_t(this_00,(CChunkID *)&local_1c);
  iVar3 = *(int *)(_pNetwork + 0x18);
  piVar5 = (int *)(iVar3 + 0xc);
  local_14 = 0;
  local_4 = 3;
  local_10 = (CWorld *)piVar5;
  if (0 < *piVar5) {
    do {
      iVar1 = local_14;
      iVar11 = *(int *)(local_14 * 0x100 + 4 + *(int *)(iVar3 + 0x10));
      if (iVar11 == 0) {
LAB_360d9444:
        **(undefined4 **)(this_00 + 0x14) = 0xffffffff;
LAB_360d944c:
        *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
      }
      else {
        if ((*(int *)(iVar11 + 4) != 9) && (*(int *)(iVar11 + 4) != 10)) {
          if ((iVar11 == 0) || ((*(int *)(iVar11 + 4) != 9 && (*(int *)(iVar11 + 4) != 10))))
          goto LAB_360d9444;
          **(undefined4 **)(this_00 + 0x14) = 0xfffffffe;
          goto LAB_360d944c;
        }
        **(undefined4 **)(this_00 + 0x14) = *(undefined4 *)(iVar11 + 0x1c);
        *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
        CEntity::WriteSKAQueue(*(CEntity **)(local_14 * 0x100 + 4 + *(int *)(iVar3 + 0x10)),this_00)
        ;
      }
      local_14 = iVar1 + 1;
    } while (local_14 < *piVar5);
  }
  ExceptionList = pvStack_c;
  return;
}

