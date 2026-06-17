
/* public: void __thiscall CBrushArchive::LinkPortalsAndSectors(void) */

void __thiscall CBrushArchive::LinkPortalsAndSectors(CBrushArchive *this)

{
  int *this_00;
  int *this_01;
  CBrushPolygon *this_02;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CBrushArchive *this_03;
  float fVar5;
  int *local_c0;
  int local_b8;
  int local_b0;
  int local_a8;
  int local_a0;
  BSPPolygon<double,3> local_94 [32];
  CListHead local_74 [20];
  undefined4 local_60;
  undefined4 local_5c [10];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x136d50  2541  ?LinkPortalsAndSectors@CBrushArchive@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219366;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SetFPUPrecision(1);
  this_03 = this + 0x14;
  local_a0 = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  iVar1 = FUN_360cb6c0((int)this_03);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb850(this_03,local_a0);
      if ((*(int *)(iVar1 + 0x668) != 0) &&
         (iVar1 = FUN_360cb850(this_03,local_a0),
         (*(byte *)(*(int *)(iVar1 + 0x668) + 0x10) & 2) != 0)) {
        iVar1 = FUN_360cb850(this_03,local_a0);
        local_c0 = *(int **)(iVar1 + 0x674);
        while (*local_c0 != 0) {
          this_00 = local_c0 + -6;
          iVar3 = 0;
          iVar1 = FUN_36043600((int)this_00);
          if (0 < iVar1) {
            do {
              local_b0 = 0;
              local_4._0_1_ = 2;
              iVar1 = FUN_360cb6c0((int)this_03);
              if (0 < iVar1) {
                do {
                  iVar1 = FUN_360cb850(this_03,local_b0);
                  if ((*(int *)(iVar1 + 0x668) != 0) &&
                     (iVar1 = FUN_360cb850(this_03,local_b0),
                     (*(byte *)(*(int *)(iVar1 + 0x668) + 0x10) & 2) != 0)) {
                    iVar1 = FUN_360cb850(this_03,local_b0);
                    for (piVar4 = *(int **)(iVar1 + 0x674); *piVar4 != 0; piVar4 = (int *)*piVar4) {
                      fVar5 = 0.1;
                      iVar1 = FUN_36043710(this_00,iVar3);
                      iVar1 = FUN_360cd6d0(piVar4 + 3,iVar1 + 0x54,fVar5);
                      if (iVar1 != 0) {
                        this_01 = piVar4 + -6;
                        local_b8 = 0;
                        iVar1 = FUN_36043600((int)this_01);
                        if (0 < iVar1) {
                          do {
                            iVar1 = FUN_36043710(this_01,local_b8);
                            iVar2 = FUN_36043710(this_00,iVar3);
                            if (iVar2 != iVar1) {
                              iVar1 = FUN_36043710(this_01,local_b8);
                              fVar5 = 0.1;
                              iVar2 = FUN_36043710(this_00,iVar3);
                              iVar1 = FUN_360cd6d0((void *)(iVar1 + 0x54),iVar2 + 0x54,fVar5);
                              if (iVar1 != 0) {
                                iVar1 = FUN_36043710(this_01,local_b8);
                                local_a8 = 0;
                                local_4._0_1_ = 4;
                                if (0 < *(int *)(iVar1 + 0x18)) {
                                  do {
                                    this_02 = (CBrushPolygon *)
                                              (local_a8 * 0x1d0 + *(int *)(iVar1 + 0x1c));
                                    if ((*(uint *)(this_02 + 200) & 0x400800) != 0) {
                                      fVar5 = 0.1;
                                      iVar2 = FUN_36043710(this_00,iVar3);
                                      iVar2 = FUN_360cd6d0(this_02 + 0x194,iVar2 + 0x54,fVar5);
                                      if (iVar2 != 0) {
                                        FUN_3604b9a0(local_74);
                                        local_60 = 0xffffffff;
                                        local_4._0_1_ = 5;
                                        CBrushPolygon::CreateBSPPolygonNonPrecise(this_02,local_94);
                                        iVar2 = FUN_36043710(this_00,iVar3);
                                        FUN_360e3830(local_5c,(double *)local_94,
                                                     *(double **)(*(int *)(iVar2 + 0x8c) + 8));
                                        local_4 = CONCAT31(local_4._1_3_,6);
                                        iVar2 = FUN_3604b9e0((int)local_5c);
                                        if (((0 < iVar2) ||
                                            (iVar2 = FUN_3604b9e0((int)local_34), 0 < iVar2)) ||
                                           (iVar2 = FUN_3604b9e0((int)local_20), 0 < iVar2)) {
                                          iVar2 = FUN_36043710(this_00,iVar3);
                                          AddRelationPair((CRelationSrc *)
                                                          (local_a8 * 0x1d0 + 0x1b0 +
                                                          *(int *)(iVar1 + 0x1c)),
                                                          (CRelationDst *)(iVar2 + 0x90));
                                        }
                                        local_4._0_1_ = 5;
                                        FUN_360e15a0(local_5c);
                                        local_4._0_1_ = 4;
                                        thunk_FUN_3604c3a0((undefined4 *)local_74);
                                      }
                                    }
                                    local_a8 = local_a8 + 1;
                                  } while (local_a8 < *(int *)(iVar1 + 0x18));
                                }
                              }
                            }
                            local_b8 = local_b8 + 1;
                            iVar1 = FUN_36043600((int)this_01);
                          } while (local_b8 < iVar1);
                        }
                        local_4._0_1_ = 2;
                      }
                    }
                  }
                  local_b0 = local_b0 + 1;
                  iVar1 = FUN_360cb6c0((int)this_03);
                } while (local_b0 < iVar1);
              }
              iVar3 = iVar3 + 1;
              iVar1 = FUN_36043600((int)this_00);
            } while (iVar3 < iVar1);
          }
          local_c0 = (int *)*local_c0;
          local_4._0_1_ = 0;
        }
      }
      local_a0 = local_a0 + 1;
      iVar1 = FUN_360cb6c0((int)this_03);
    } while (local_a0 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

