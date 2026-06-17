
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CWorld::ReadState_net_t(class CTStream *) */

void __thiscall CWorld::ReadState_net_t(CWorld *this,CTStream *param_1)

{
  CPlacement3D *pCVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  CMovableEntity *pCVar9;
  int *piVar10;
  CEntity *pCVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  CWorld *this_00;
  float10 fVar15;
  int iStack_7c;
  int iStack_78;
  CEntity *pCStack_74;
  char *local_70;
  float fStack_6c;
  int *piStack_68;
  undefined4 *local_64;
  undefined1 local_60;
  ulong local_5c;
  undefined1 local_58;
  int iStack_54;
  int *piStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  CWorld *pCStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  void *pvStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xdac80  2989  ?ReadState_net_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215281;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  SetFPUPrecision(1);
  local_58 = DAT_36232618;
  local_5c = DAT_36232614;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_5c);
  local_5c = **(ulong **)(param_1 + 0x14);
  *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
  local_64 = (undefined4 *)DAT_3623261c;
  local_60 = DAT_36232620;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_64);
  iVar13 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < iVar13) {
    _DAT_36300874 = 0;
    FUN_36026d00(&DAT_3630086c,iVar13);
  }
  local_70 = StringDuplicate(&DAT_36222fa0);
  iVar12 = 0;
  local_4 = 0;
  if (0 < iVar13) {
    do {
      CTString::ReadFromStreamShort((CTString *)&local_70,param_1);
      lVar4 = ska_StringToID((CTString *)&local_70);
      *(long *)(DAT_36300870 + iVar12 * 4) = lVar4;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar13);
  }
  local_64 = DAT_36232624;
  local_60 = DAT_36232628;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_64);
  FUN_36130460();
  iVar13 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < iVar13) {
    do {
      puVar5 = (undefined4 *)FUN_361bf99c(0xc);
      local_4._0_1_ = 1;
      local_64 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        pcVar6 = StringDuplicate(&DAT_36222fa0);
        puVar5[1] = pcVar6;
        puVar5[2] = 0;
        *puVar5 = 0xffffffff;
      }
      *puVar5 = **(undefined4 **)(param_1 + 0x14);
      local_4 = (uint)local_4._1_3_ << 8;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      CTString::ReadFromStreamShort((CTString *)(puVar5 + 1),param_1);
      FUN_360dbdf0(&DAT_362fce74,puVar5);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  local_64 = (undefined4 *)DAT_3623262c;
  local_60 = DAT_36232630;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_64);
  DAT_362cbf10 = 1;
  iStack_78 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  iStack_54 = 0;
  piStack_50 = (int *)0x0;
  local_4._0_1_ = 2;
  if (iStack_78 != 0) {
    iStack_54 = iStack_78;
    piStack_50 = (int *)thunk_FUN_361bf99c((iStack_78 * 9 + 9) * 4);
  }
  pcVar6 = Translate(s_ETRSreceiving_entity_list_36232634,4);
  pCStack_74 = (CEntity *)StringDuplicate(pcVar6);
  local_4._0_1_ = 3;
  SetProgressDescription((CTString *)&pCStack_74);
  local_4 = CONCAT31(local_4._1_3_,2);
  StringFree((char *)pCStack_74);
  CallProgressHook_t(0.0);
  iStack_7c = 0;
  if (0 < iStack_78) {
    pCStack_74 = (CEntity *)(float)iStack_78;
    iVar13 = 0;
    do {
      puVar5 = *(undefined4 **)(param_1 + 0x14);
      uVar2 = *puVar5;
      *(undefined4 **)(param_1 + 0x14) = puVar5 + 1;
      fStack_6c = (float)puVar5[1];
      *(undefined4 **)(param_1 + 0x14) = puVar5 + 2;
      ::operator>>(param_1,(CPlacement3D *)&iStack_24);
      *(undefined4 *)(iVar13 + (int)piStack_50) = uVar2;
      *(float *)(iVar13 + 4 + (int)piStack_50) = fStack_6c;
      piVar10 = (int *)(iVar13 + 8 + (int)piStack_50);
      *piVar10 = iStack_24;
      piVar10[1] = (int)pvStack_20;
      piVar10[2] = iStack_1c;
      piVar10[3] = iStack_18;
      piVar10[4] = iStack_14;
      piVar10[5] = iStack_10;
      *(undefined4 *)(iVar13 + 0x20 + (int)piStack_50) = 0;
      CallProgressHook_t((float)iStack_7c / (float)pCStack_74);
      iStack_7c = iStack_7c + 1;
      iVar13 = iVar13 + 0x24;
    } while (iStack_7c < iStack_78);
  }
  CallProgressHook_t(1.0);
  pcVar6 = Translate(s_ETRSUpdating_entities_36232650,4);
  pCStack_74 = (CEntity *)StringDuplicate(pcVar6);
  local_4._0_1_ = 4;
  SetProgressDescription((CTString *)&pCStack_74);
  local_4 = CONCAT31(local_4._1_3_,2);
  StringFree((char *)pCStack_74);
  CallProgressHook_t(0.0);
  iStack_7c = 0;
  iStack_24 = 0;
  pvStack_20 = (void *)0x0;
  iStack_1c = 0;
  iStack_18 = 0x10;
  this_00 = this + 0x3c;
  iVar12 = 0;
  iStack_44 = 0;
  pCStack_40 = this_00;
  iVar13 = FUN_360caf20((int)this_00);
  pvVar14 = (void *)0x0;
  if (0 < iVar13) {
    piStack_48 = &iStack_54;
    do {
      iVar13 = 0;
      iStack_7c = iStack_7c + 1;
      pCStack_74 = (CEntity *)0x0;
      iStack_4c = 0;
      local_4._0_1_ = 7;
      piVar10 = piStack_50;
      if (0 < iStack_54) {
LAB_360db030:
        iVar7 = FUN_360cafb0(this_00,iVar12);
        if (*(int *)(iVar7 + 0x1c) != *piVar10) goto code_r0x360db03f;
        pCStack_74 = (CEntity *)(iVar13 * 0x24 + 0x14);
        iVar7 = 0x48;
        iStack_4c = iVar13;
        do {
          fStack_6c = *(float *)(pCStack_74 + (int)piStack_50);
          fVar15 = (float10)_CIfmod();
          piStack_68 = piStack_50 + iVar13 * 9;
          fStack_6c = (float)(fVar15 + (float10)_DAT_36227ce0);
          fVar15 = (float10)_CIfmod();
          *(float *)(iVar7 + -0x34 + (int)piStack_68) = (float)fVar15;
          iVar8 = FUN_360cafb0(this_00,iVar12);
          piStack_68 = *(int **)(iVar8 + iVar7);
          fVar15 = (float10)_CIfmod();
          piStack_68 = (int *)(float)(fVar15 + (float10)_DAT_36227ce0);
          fStack_6c = (float)FUN_360cafb0(this_00,iVar12);
          fVar15 = (float10)_CIfmod();
          *(float *)(iVar7 + (int)fStack_6c) = (float)fVar15;
          pCStack_74 = pCStack_74 + 4;
          iVar7 = iVar7 + 4;
        } while (iVar7 < 0x51);
        iVar7 = FUN_360cafb0(this_00,iVar12);
        pCVar1 = (CPlacement3D *)(piStack_50 + iVar13 * 9 + 2);
        if (((((*(float *)(iVar7 + 0x3c) != (float)piStack_50[iVar13 * 9 + 2]) ||
              (*(float *)(iVar7 + 0x40) != *(float *)(pCVar1 + 4))) ||
             (*(float *)(iVar7 + 0x44) != *(float *)(pCVar1 + 8))) ||
            ((*(float *)(iVar7 + 0x48) != *(float *)(pCVar1 + 0xc) ||
             (*(float *)(iVar7 + 0x4c) != *(float *)(pCVar1 + 0x10))))) ||
           (*(float *)(iVar7 + 0x50) != *(float *)(pCVar1 + 0x14))) {
          pCVar11 = (CEntity *)FUN_360cafb0(this_00,iVar12);
          CEntity::SetPlacement(pCVar11,pCVar1);
        }
        iVar7 = FUN_360cafb0(this_00,iVar12);
        if ((*(uint *)(iVar7 + 8) & 0x200) != 0) {
          local_64 = *(undefined4 **)(_pTimer + 0xc);
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          pCVar9 = (CMovableEntity *)FUN_360cafb0(this_00,iVar12);
          piVar10 = piStack_50 + iVar13 * 9 + 2;
          CMovableEntity::AdjustDeadReckoning
                    (pCVar9,*piVar10,piVar10[1],piVar10[2],piVar10[3],piVar10[4],piVar10[5],0,
                     uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,local_64);
        }
        pCStack_74 = (CEntity *)0x1;
        piStack_50[iVar13 * 9 + 8] = 1;
      }
LAB_360db268:
      local_4 = CONCAT31(local_4._1_3_,6);
      iStack_4c = 0xffffffff;
      if (pCStack_74 == (CEntity *)0x0) {
        piVar10 = (int *)FUN_360cafb0(this_00,iVar12);
        iVar13 = (**(code **)(*piVar10 + 0x90))();
        if ((iVar13 != 0) &&
           (iVar13 = FUN_360cafb0(this_00,iVar12), (~*(uint *)(iVar13 + 0x10) & 0x8000000) != 0)) {
          iVar7 = iStack_1c + 1;
          iStack_1c = iVar7;
          iVar13 = FUN_360637d0(&iStack_24);
          if (iVar13 < iVar7) {
            iVar13 = FUN_360637d0(&iStack_24);
            FUN_36063ab0(&iStack_24,iVar13 + iStack_18);
          }
          iVar13 = FUN_360cafb0(this_00,iVar12);
          *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = *(undefined4 *)(iVar13 + 0x1c);
        }
      }
      fStack_6c = (float)iStack_7c;
      piStack_68 = (int *)FUN_360caf20((int)(this + 0x3c));
      CallProgressHook_t(fStack_6c / (float)(int)piStack_68);
      iVar12 = iVar12 + 1;
      iStack_44 = iVar12;
      iVar13 = FUN_360caf20((int)this_00);
      pvVar14 = pvStack_20;
    } while (iVar12 < iVar13);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar12 = 0;
  iVar7 = 0;
  iVar13 = FUN_360d8710((int)&iStack_24);
  if (0 < iVar13) {
    do {
      iVar13 = EntityExists(this,*(ulong *)((int)pvVar14 + iVar7 * 4),&pCStack_74);
      if (iVar13 != 0) {
        UntargetEntity(this,pCStack_74);
        iVar13 = EntityExists(this,*(ulong *)((int)pvVar14 + iVar7 * 4),&pCStack_74);
        if (iVar13 != 0) {
          (**(code **)(*(int *)pCStack_74 + 0x58))(1);
        }
      }
      iVar7 = iVar7 + 1;
      iVar13 = FUN_360d8710((int)&iStack_24);
    } while (iVar7 < iVar13);
  }
  iStack_1c = 0;
  CallProgressHook_t(1.0);
  pcVar6 = Translate(s_ETRSloading_entities_36232668,4);
  pCStack_74 = (CEntity *)StringDuplicate(pcVar6);
  local_4._0_1_ = 8;
  SetProgressDescription((CTString *)&pCStack_74);
  local_4._0_1_ = 5;
  StringFree((char *)pCStack_74);
  CallProgressHook_t(0.0);
  pCStack_40 = (CWorld *)&iStack_54;
  iStack_44 = 0;
  local_4._0_1_ = 9;
  if (0 < iStack_54) {
    pCStack_74 = (CEntity *)(float)iStack_78;
    do {
      iVar13 = iStack_44;
      if (piStack_50[iStack_44 * 9 + 8] == 0) {
        iVar7 = FUN_361300d0(piStack_50[iStack_44 * 9 + 1]);
        CreateEntity_t(this,(CPlacement3D *)(piStack_50 + iVar13 * 9 + 2),(CTFileName *)(iVar7 + 4),
                       piStack_50[iVar13 * 9],1);
      }
      iVar12 = iVar12 + 1;
      CallProgressHook_t(((float)iVar12 / (float)pCStack_74) * _DAT_36227cf0);
      iStack_44 = iVar13 + 1;
    } while (iStack_44 < iStack_54);
  }
  pCStack_40 = (CWorld *)&iStack_54;
  iStack_44 = 0;
  local_4._0_1_ = 10;
  if (0 < iStack_54) {
    pCStack_74 = (CEntity *)(float)iStack_78;
    do {
      iVar13 = iStack_44;
      pCVar11 = EntityFromID(this,piStack_50[iStack_44 * 9]);
      CEntity::End(pCVar11);
      (**(code **)(*(int *)pCVar11 + 0x1c))(param_1,1);
      *(undefined4 *)(pCVar11 + 0x24) = *(undefined4 *)(pCVar11 + 0x3c);
      *(undefined4 *)(pCVar11 + 0x28) = *(undefined4 *)(pCVar11 + 0x40);
      *(undefined4 *)(pCVar11 + 0x2c) = *(undefined4 *)(pCVar11 + 0x44);
      *(undefined4 *)(pCVar11 + 0x30) = *(undefined4 *)(pCVar11 + 0x48);
      *(undefined4 *)(pCVar11 + 0x34) = *(undefined4 *)(pCVar11 + 0x4c);
      *(undefined4 *)(pCVar11 + 0x38) = *(undefined4 *)(pCVar11 + 0x50);
      iStack_78 = iStack_78 + 1;
      CallProgressHook_t(((float)iStack_78 / (float)pCStack_74) * _DAT_36227cf0);
      iStack_44 = iVar13 + 1;
    } while (iStack_44 < iStack_54);
  }
  local_4._0_1_ = 5;
  CallProgressHook_t(1.0);
  pcVar6 = Translate(s_ETRSfinishing_36232680,4);
  pCStack_74 = (CEntity *)StringDuplicate(pcVar6);
  local_4._0_1_ = 0xb;
  SetProgressDescription((CTString *)&pCStack_74);
  local_4._0_1_ = 5;
  StringFree((char *)pCStack_74);
  pCStack_40 = (CWorld *)&iStack_54;
  iStack_44 = 0;
  local_4._0_1_ = 0xc;
  if (0 < iStack_54) {
    do {
      iVar13 = iStack_44;
      if ((piStack_50 + iStack_44 * 9)[8] == 0) {
        pCVar11 = EntityFromID(this,piStack_50[iStack_44 * 9]);
        CEntity::End(pCVar11);
        (**(code **)(*(int *)pCVar11 + 0x54))();
      }
      iStack_44 = iVar13 + 1;
    } while (iStack_44 < iStack_54);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  CallProgressHook_t(0.25);
  if (local_5c == 0xffffffff) {
    pCVar11 = (CEntity *)0x0;
  }
  else {
    pCVar11 = EntityFromID(this,local_5c);
  }
  SetBackgroundViewer(this,pCVar11);
  CallProgressHook_t(0.5);
  local_58 = DAT_36232694;
  local_5c = DAT_36232690;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_5c);
  iVar13 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  for (; iVar13 != 0; iVar13 = iVar13 + -1) {
    uVar3 = **(ulong **)(param_1 + 0x14);
    *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
    iVar12 = EntityExists(this,uVar3,&pCStack_74);
    if (iVar12 != 0) {
      UntargetEntity(this,pCStack_74);
      (**(code **)(*(int *)pCStack_74 + 0x58))(1);
    }
  }
  CallProgressHook_t(0.75);
  RebuildLinks(this);
  iVar13 = *(int *)(_pNetwork + 0x18);
  iVar12 = 0;
  if (0 < *(int *)(iVar13 + 0xc)) {
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar7 + 4 + *(int *)(iVar13 + 0x10)) = 0;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + 0x100;
    } while (iVar12 < *(int *)(iVar13 + 0xc));
  }
  CallProgressHook_t(1.0);
  if (iStack_24 != 0) {
    operator_delete__(pvStack_20);
  }
  if (iStack_54 != 0) {
    operator_delete__(piStack_50);
    iStack_54 = 0;
    piStack_50 = (int *)0x0;
  }
  local_4 = 0xffffffff;
  StringFree(local_70);
  ExceptionList = pvStack_c;
  return;
code_r0x360db03f:
  iVar13 = iVar13 + 1;
  piVar10 = piVar10 + 9;
  if (iStack_54 <= iVar13) goto LAB_360db268;
  goto LAB_360db030;
}

