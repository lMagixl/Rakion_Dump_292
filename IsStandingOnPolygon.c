
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CMovableEntity::IsStandingOnPolygon(class CBrushPolygon *) */

int __thiscall CMovableEntity::IsStandingOnPolygon(CMovableEntity *this,CBrushPolygon *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CBrushPolygon *pCVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pCVar4 = param_1;
                    /* 0x1ace30  2478  ?IsStandingOnPolygon@CMovableEntity@@QAEHPAVCBrushPolygon@@@Z
                        */
  if (((*(int *)(this + 0x84) != 0) && ((*(byte *)(*(int *)(this + 0x84) + 0x30) & 4) != 0)) &&
     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0x2a8) + 0x1ac) + 0x38) + 0x14) +
                       0x668) + 0xc) != 0)) {
    iVar7 = *(int *)param_1;
    iVar1 = *(int *)(this + 0x84);
    pfVar6 = (float *)(iVar7 + 4);
    local_10 = *(float *)(iVar1 + 0x14);
    local_18 = *pfVar6 * local_10;
    local_14 = *(float *)(iVar7 + 8) * local_10;
    local_10 = *(float *)(iVar7 + 0xc) * local_10;
    local_24 = (*(float *)(this + 0x58) * *(float *)(iVar1 + 0x10) + *(float *)(this + 0x3c)) -
               local_18;
    local_20 = (*(float *)(this + 100) * *(float *)(iVar1 + 0x10) + *(float *)(this + 0x40)) -
               local_14;
    local_1c = (*(float *)(this + 0x70) * *(float *)(iVar1 + 0x10) + *(float *)(this + 0x44)) -
               local_10;
    if ((local_24 * *pfVar6 + local_1c * *(float *)(iVar7 + 0xc) + local_20 * *(float *)(iVar7 + 8))
        - *(float *)(iVar7 + 0x10) <= _DAT_362280f0) {
      local_c = local_18;
      local_8 = local_14;
      local_4 = local_10;
      FUN_360cd910(pfVar6,&param_1,&local_28);
      iVar7 = *(int *)(pCVar4 + 4);
      local_c = (float)(&local_28)[(int)param_1];
      local_8 = (float)(&local_28)[local_28];
      local_4 = 0.0;
      if (0 < iVar7) {
        piVar8 = *(int **)(pCVar4 + 8);
        iVar1 = (int)param_1 * 4 + -4;
        do {
          iVar2 = *(int *)*piVar8;
          iVar3 = ((int *)*piVar8)[1];
          CIntersector::AddEdge
                    ((CIntersector *)&local_c,*(float *)(iVar1 + iVar2 + 4),
                     *(float *)(local_28 * 4 + iVar2),*(float *)(iVar1 + iVar3 + 4),
                     *(float *)(local_28 * 4 + iVar3));
          piVar8 = piVar8 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar5 = (uint)local_4 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      return (uint)(uVar5 != 0);
    }
    return 0;
  }
  return 0;
}

