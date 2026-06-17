
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBrushSector::FindEntitiesInSector(void) */

void __thiscall CBrushSector::FindEntitiesInSector(CBrushSector *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  void *this_00;
  int iVar6;
  float10 fVar7;
  CSetFPUPrecision local_130 [8];
  int local_128;
  void *local_124;
  double local_120;
  double local_118;
  double local_110;
  float local_108 [15];
  undefined1 local_cc [60];
  undefined1 local_90 [124];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x13d180  1632  ?FindEntitiesInSector@CBrushSector@@QAEXXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_3621987a;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  CSetFPUPrecision::CSetFPUPrecision(local_130,1);
  iVar2 = *(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x668);
  iVar6 = 0;
  local_c = 0;
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x10) & 2) != 0)) {
    FUN_360325f0((undefined4 *)(this + 0x9c));
    FUN_3612ef60(local_cc,(float *)(this + 0x54));
    this_00 = (void *)(*(int *)(iVar2 + 0xa8) + 0x15c);
    local_128 = 0;
    local_c = CONCAT31(local_c._1_3_,1);
    local_124 = this_00;
    iVar2 = FUN_360caf20((int)this_00);
    if (0 < iVar2) {
      do {
        iVar2 = FUN_360cafb0(this_00,iVar6);
        if (_DAT_3622376c <= *(float *)(iVar2 + 0x88)) {
          iVar2 = FUN_360cafb0(this_00,iVar6);
          fVar1 = *(float *)(iVar2 + 0x88);
          iVar2 = FUN_360cafb0(this_00,iVar6);
          iVar3 = FUN_360de4a0(this + 0x54,(float *)(iVar2 + 0x3c),fVar1);
          if (iVar3 != 0) {
            local_120 = (double)*(float *)(iVar2 + 0x3c);
            local_118 = (double)*(float *)(iVar2 + 0x40);
            local_110 = (double)*(float *)(iVar2 + 0x44);
            fVar7 = FUN_360e0680(*(int *)(this + 0x8c),&local_120,(double)fVar1);
            if ((float10)_DAT_3622376c <= fVar7) {
              iVar2 = FUN_360cafb0(this_00,iVar6);
              iVar3 = FUN_360cafb0(this_00,iVar6);
              iVar4 = FUN_360cafb0(this_00,iVar6);
              FUN_360bf170(local_108,(float *)(iVar3 + 0x8c),(float *)(iVar2 + 0x3c),
                           (float *)(iVar4 + 0x54));
              iVar2 = FUN_3612e8f0(local_cc,local_108);
              if (iVar2 != 0) {
                pdVar5 = FUN_3612ee40(local_90,local_108);
                fVar7 = FUN_360e06b0(*(int *)(this + 0x8c),pdVar5);
                if ((float10)_DAT_3622376c <= fVar7) {
                  iVar2 = FUN_360cafb0(this_00,iVar6);
                  if (((*(int *)(iVar2 + 4) == 4) ||
                      (iVar2 = FUN_360cafb0(this_00,iVar6), *(int *)(iVar2 + 4) == 8)) ||
                     (iVar2 = FUN_360cafb0(this_00,iVar6), *(int *)(iVar2 + 4) == 0xb)) {
                    iVar2 = FUN_360cafb0(this_00,iVar6);
                    AddRelationPairHeadHead
                              ((CRelationSrc *)(this + 0x9c),(CRelationDst *)(iVar2 + 0xac));
                  }
                  else {
                    iVar2 = FUN_360cafb0(this_00,iVar6);
                    AddRelationPairTailTail
                              ((CRelationSrc *)(this + 0x9c),(CRelationDst *)(iVar2 + 0xac));
                  }
                }
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        local_128 = iVar6;
        iVar2 = FUN_360caf20((int)this_00);
      } while (iVar6 < iVar2);
    }
  }
  local_c = 0xffffffff;
  CSetFPUPrecision::~CSetFPUPrecision(local_130);
  ExceptionList = local_14;
  return;
}

