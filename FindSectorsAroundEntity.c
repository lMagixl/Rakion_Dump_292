
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::FindSectorsAroundEntity(void) */

void __thiscall CEntity::FindSectorsAroundEntity(CEntity *this)

{
  CEntity *pCVar1;
  int *this_00;
  CEntity *pCVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  void *this_01;
  int iVar7;
  float10 fVar8;
  double *pdVar9;
  float fVar11;
  double dVar10;
  CEntity *pCVar12;
  int local_13c;
  CSetFPUPrecision local_128 [8];
  double local_120;
  double local_118;
  double local_110;
  float local_108 [15];
  undefined1 local_cc [60];
  double local_90 [15];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x12ab50  1640  ?FindSectorsAroundEntity@CEntity@@QAEXXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_36218a6e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  CSetFPUPrecision::CSetFPUPrecision(local_128,1);
  local_c = 0;
  if (_DAT_3622376c <= *(float *)(this + 0x88)) {
    fVar3 = *(float *)(this + 0x88);
    pCVar1 = this + 0x3c;
    FUN_360bf170(local_108,(float *)(this + 0x8c),(float *)pCVar1,(float *)(this + 0x54));
    FUN_3612ee40(local_90,local_108);
    pCVar2 = this + 0xac;
    FUN_360325c0((undefined4 *)pCVar2);
    this_01 = (void *)(*(int *)(*(int *)(this + 0xa8) + 0x34) + 0x14);
    local_13c = 0;
    iVar4 = FUN_360cb6c0((int)this_01);
    if (0 < iVar4) {
      do {
        iVar4 = FUN_360cb850(this_01,local_13c);
        if ((*(int *)(iVar4 + 0x668) != 0) &&
           (iVar4 = FUN_360cb850(this_01,local_13c),
           (*(byte *)(*(int *)(iVar4 + 0x668) + 0x10) & 2) != 0)) {
          iVar4 = FUN_360cb850(this_01,local_13c);
          for (piVar5 = *(int **)(iVar4 + 0x674); *piVar5 != 0; piVar5 = (int *)*piVar5) {
            this_00 = piVar5 + -6;
            iVar7 = 0;
            local_c = CONCAT31(local_c._1_3_,2);
            iVar4 = FUN_36043600((int)this_00);
            if (0 < iVar4) {
              do {
                pCVar12 = pCVar1;
                fVar11 = fVar3;
                iVar4 = FUN_36043710(this_00,iVar7);
                iVar4 = FUN_360de4a0((void *)(iVar4 + 0x54),(float *)pCVar12,fVar11);
                if (iVar4 != 0) {
                  iVar4 = FUN_36043710(this_00,iVar7);
                  pfVar6 = (float *)FUN_3612ef60(local_cc,(float *)(iVar4 + 0x54));
                  iVar4 = FUN_3612e8f0(local_108,pfVar6);
                  if (iVar4 != 0) {
                    local_120 = (double)*(float *)pCVar1;
                    pdVar9 = &local_120;
                    local_118 = (double)*(float *)(this + 0x40);
                    local_110 = (double)*(float *)(this + 0x44);
                    dVar10 = (double)fVar3;
                    iVar4 = FUN_36043710(this_00,iVar7);
                    fVar8 = FUN_360e0680(*(int *)(iVar4 + 0x8c),pdVar9,dVar10);
                    if ((float10)_DAT_3622376c <= fVar8) {
                      pdVar9 = local_90;
                      iVar4 = FUN_36043710(this_00,iVar7);
                      fVar8 = FUN_360e06b0(*(int *)(iVar4 + 0x8c),pdVar9);
                      if ((float10)_DAT_3622376c <= fVar8) {
                        iVar4 = *(int *)(this + 4);
                        if (((iVar4 == 4) || (iVar4 == 8)) || (iVar4 == 0xb)) {
                          pCVar12 = pCVar2;
                          iVar4 = FUN_36043710(this_00,iVar7);
                          AddRelationPairHeadHead
                                    ((CRelationSrc *)(iVar4 + 0x9c),(CRelationDst *)pCVar12);
                        }
                        else {
                          pCVar12 = pCVar2;
                          iVar4 = FUN_36043710(this_00,iVar7);
                          AddRelationPairTailTail
                                    ((CRelationSrc *)(iVar4 + 0x9c),(CRelationDst *)pCVar12);
                        }
                      }
                    }
                  }
                }
                iVar7 = iVar7 + 1;
                iVar4 = FUN_36043600((int)this_00);
              } while (iVar7 < iVar4);
            }
          }
        }
        local_13c = local_13c + 1;
        iVar4 = FUN_360cb6c0((int)this_01);
      } while (local_13c < iVar4);
    }
  }
  local_c = 0xffffffff;
  CSetFPUPrecision::~CSetFPUPrecision(local_128);
  ExceptionList = local_14;
  return;
}

