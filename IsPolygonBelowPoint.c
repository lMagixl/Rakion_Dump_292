
/* WARNING: Removing unreachable block (ram,0x361ad20b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CMovableEntity::IsPolygonBelowPoint(class CBrushPolygon *,class
   Vector<float,3> const &,float) */

int __thiscall
CMovableEntity::IsPolygonBelowPoint
          (CMovableEntity *this,CBrushPolygon *param_1,Vector<float,3> *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  CBrushPolygon *pCVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  
                    /* 0x1ad000  2452
                       ?IsPolygonBelowPoint@CMovableEntity@@QAEHPAVCBrushPolygon@@ABV?$Vector@M$02@@M@Z
                        */
  pCVar7 = param_1;
  if (((*(uint *)(param_1 + 200) & 0x800) == 0) &&
     (iVar8 = (**(code **)(*(int *)this + 0x198))(param_1), iVar8 != 0)) {
    iVar8 = *(int *)pCVar7;
    pfVar9 = (float *)(iVar8 + 4);
    fVar6 = *(float *)(this + 0x180) * *pfVar9 +
            *(float *)(this + 0x188) * *(float *)(iVar8 + 0xc) +
            *(float *)(this + 0x184) * *(float *)(iVar8 + 8);
    if (((fVar6 <= _DAT_362280fc) &&
        (((iVar1 = *(int *)(*(int *)(this + 0xa8) + 0x14) + (uint)(byte)pCVar7[0x188] * 0x28,
          fVar5 = -*(float *)(iVar1 + 8), fVar5 < fVar6 == (fVar5 == fVar6) ||
          (_DAT_3622376c <= fVar6)) && ((*(byte *)(iVar1 + 0x20) & 1) == 0)))) &&
       ((fVar5 = (*pfVar9 * *(float *)param_1 +
                 *(float *)(param_1 + 8) * *(float *)(iVar8 + 0xc) +
                 *(float *)(param_1 + 4) * *(float *)(iVar8 + 8)) - *(float *)(iVar8 + 0x10),
        _DAT_362280fc <= fVar5 && (-(fVar5 / fVar6) <= (float)param_2)))) {
      FUN_360cd910(pfVar9,(undefined4 *)&stack0x00000000,&param_1);
      iVar8 = *(int *)(pCVar7 + 4);
      if (0 < iVar8) {
        piVar10 = *(int **)(pCVar7 + 8);
        iVar1 = (int)param_1 * 4;
        iVar2 = (int)fVar6 * 4 + -4;
        do {
          iVar3 = *(int *)*piVar10;
          iVar4 = ((int *)*piVar10)[1];
          CIntersector::AddEdge
                    ((CIntersector *)&stack0xffffffe4,*(float *)(iVar2 + iVar3 + 4),
                     *(float *)(iVar1 + iVar3),*(float *)(iVar2 + iVar4 + 4),
                     *(float *)(iVar1 + iVar4));
          piVar10 = piVar10 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      return 0;
    }
  }
  return 0;
}

