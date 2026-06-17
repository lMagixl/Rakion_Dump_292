
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3611a150(void *this,int param_1)

{
  CEntity *pCVar1;
  CModelObject *pCVar2;
  bool bVar3;
  size_t _NumOfElements;
  void *_Base;
  int iVar4;
  CPlacement3D *pCVar5;
  float *pfVar6;
  CAnyProjection3D *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  size_t _SizeOfElements;
  int iVar10;
  float fVar11;
  _PtFuncCompare *_PtFuncCompare;
  uint uVar12;
  int local_140;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  AABBox<float,3> aAStack_108 [8];
  undefined4 auStack_100 [4];
  AABBox<float,3> aAStack_f0 [16];
  undefined4 uStack_e0;
  float afStack_d8 [3];
  float afStack_cc [3];
  float afStack_c0 [3];
  float afStack_b4 [3];
  CPlacement3D aCStack_a8 [24];
  CPlacement3D aCStack_90 [24];
  float afStack_78 [3];
  float afStack_6c [3];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  if (DAT_362cce78 == 0) {
    if ((DAT_362a418c == 0) && (*(int *)((int)this + 0xd40) == 0)) {
      return;
    }
  }
  else {
    DAT_362a418c = 1;
  }
  _PtFuncCompare = (_PtFuncCompare *)&LAB_36114180;
  iVar4 = (int)this + 0xdb0;
  _SizeOfElements = 4;
  _NumOfElements = FUN_3611f3f0(iVar4);
  _Base = (void *)FUN_3611f400(iVar4);
  qsort(_Base,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  pCVar7 = (CAnyProjection3D *)((int)this + 0x6c8);
  if (param_1 == 0) {
    pCVar7 = (CAnyProjection3D *)((int)this + 0x3c);
  }
  if (*(int *)((int)this + 0xd40) == 0) {
    BeginModelRenderingView(pCVar7,*(CDrawPort **)((int)this + 8));
    RM_BeginRenderingView(pCVar7,*(CDrawPort **)((int)this + 8));
  }
  else {
    BeginModelRenderingMask
              (pCVar7,*(uchar **)((int)this + 0xd48),*(long *)((int)this + 0xd4c),
               *(long *)((int)this + 0xd50));
    RM_BeginModelRenderingMask
              (pCVar7,*(uchar **)((int)this + 0xd48),*(long *)((int)this + 0xd4c),
               *(long *)((int)this + 0xd50));
  }
  local_140 = 0;
  iVar4 = FUN_3611f3f0(iVar4);
  if (0 < iVar4) {
    do {
      iVar4 = FUN_3611fde0((void *)((int)this + 0xdb0),local_140);
      pCVar1 = *(CEntity **)(iVar4 + 0xc);
      if ((*(int *)((int)this + 0x6c0) == 0) || ((*(uint *)(pCVar1 + 0x10) & 0x200) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (param_1 == 0) {
        if (!bVar3) goto LAB_3611a270;
LAB_3611a276:
        *(float *)(pCVar1 + 0xe8) =
             CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc);
      }
      else {
        if (!bVar3) goto LAB_3611a276;
LAB_3611a270:
        if ((*(byte *)(iVar4 + 8) & 2) == 0) goto LAB_3611a276;
        (**(code **)(*(int *)pCVar1 + 0x124))();
        if ((*(int *)(pCVar1 + 4) == 9) || (*(int *)(pCVar1 + 4) == 10)) {
          uVar12 = *(uint *)(iVar4 + 8);
          fVar11 = *(float *)(iVar4 + 4);
          uVar9 = 1;
          pCVar5 = (CPlacement3D *)(**(code **)(*(int *)pCVar1 + 100))(auStack_48);
          FUN_36119d00(this,pCVar1,pCVar5,uVar9,fVar11,uVar12);
          if ((*(int *)((int)this + 0xd40) == 0) &&
             (((DAT_362fcbf8 == 1 && (DAT_362fcbec != (CModelObject *)0x0)) &&
              (((byte)pCVar1[0x10] & 1) != 0)))) {
            iVar10 = 1;
            do {
              *(undefined4 *)(aAStack_108 + iVar10 * 4 + -4) = 0x7f61b1e6;
              auStack_100[iVar10] = 0xff61b1e6;
              iVar10 = iVar10 + 1;
            } while (iVar10 < 4);
            CModelInstance::GetCurrentColisionBox(*(CModelInstance **)(pCVar1 + 0x7c),aAStack_108);
            if (*(int *)(pCVar1 + 0x84) != 0) {
              (**(code **)(*(int *)pCVar1 + 0xf4))();
              CModelInstance::GetCollisionBoxMin
                        (*(CModelInstance **)(pCVar1 + 0x7c),(long)afStack_d8);
              CModelInstance::GetCollisionBoxMax
                        (*(CModelInstance **)(pCVar1 + 0x7c),(long)afStack_b4);
              pfVar6 = FUN_360bef70(auStack_18,afStack_d8,afStack_b4);
              FUN_360b1850(aAStack_108,pfVar6);
            }
            iVar10 = *(int *)(pCVar1 + 0x7c);
            FUN_360de4f0(aAStack_108,*(float *)(iVar10 + 0x90),*(float *)(iVar10 + 0x94),
                         *(float *)(iVar10 + 0x98));
            pfVar6 = (float *)FUN_3605ccc0(aAStack_108,afStack_6c);
            pCVar2 = DAT_362fcbec;
            fVar11 = SQRT(pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6) *
                     _DAT_36237a78;
            *(float *)(DAT_362fcbec + 0x84) = fVar11;
            *(float *)(pCVar2 + 0x88) = fVar11;
            *(float *)(pCVar2 + 0x8c) = fVar11;
            (**(code **)(*(int *)pCVar1 + 100))(aCStack_90);
            uStack_110 = auStack_100[2];
            uStack_114 = 0;
            uStack_10c = 0;
            CPlacement3D::Translate_OwnSystem(aCStack_90,(Vector<float,3> *)&uStack_114);
            pCVar5 = aCStack_90;
            goto LAB_3611a602;
          }
        }
        else {
          uVar12 = *(uint *)(iVar4 + 8);
          uVar8 = *(undefined4 *)(iVar4 + 4);
          pCVar2 = *(CModelObject **)(iVar4 + 0x10);
          iVar10 = 1;
          pCVar5 = (CPlacement3D *)(**(code **)(*(int *)pCVar1 + 100))(auStack_60);
          FUN_36119600(this,pCVar1,pCVar2,pCVar5,uVar8,iVar10,uVar12);
          if (((*(int *)((int)this + 0xd40) == 0) && (DAT_362fcbf8 == 1)) &&
             ((DAT_362fcbec != (CModelObject *)0x0 && (((byte)pCVar1[0x10] & 1) != 0)))) {
            FUN_3600f9b0((undefined4 *)aAStack_f0);
            CModelObject::GetCurrentFrameBBox(pCVar2,aAStack_f0);
            if ((*(int *)(pCVar1 + 0x84) != 0) &&
               ((*(int *)(pCVar1 + 4) == 3 || (*(int *)(pCVar1 + 4) == 5)))) {
              (**(code **)(*(int *)pCVar1 + 0xf4))();
              CModelObject::GetCollisionBoxMin(pCVar2,(long)afStack_cc);
              CModelObject::GetCollisionBoxMax(pCVar2,(long)afStack_c0);
              pfVar6 = FUN_360bef70(auStack_30,afStack_cc,afStack_c0);
              FUN_360b1850(aAStack_f0,pfVar6);
            }
            FUN_360de4f0(aAStack_f0,*(float *)(pCVar2 + 0x84),*(float *)(pCVar2 + 0x88),
                         *(float *)(pCVar2 + 0x8c));
            pfVar6 = (float *)FUN_3605ccc0(aAStack_f0,afStack_78);
            pCVar2 = DAT_362fcbec;
            fVar11 = SQRT(pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6) *
                     _DAT_36237a78;
            *(float *)(DAT_362fcbec + 0x84) = fVar11;
            *(float *)(pCVar2 + 0x88) = fVar11;
            *(float *)(pCVar2 + 0x8c) = fVar11;
            (**(code **)(*(int *)pCVar1 + 100))(aCStack_a8);
            uStack_11c = uStack_e0;
            uStack_120 = 0;
            uStack_118 = 0;
            CPlacement3D::Translate_OwnSystem(aCStack_a8,(Vector<float,3> *)&uStack_120);
            pCVar5 = aCStack_a8;
LAB_3611a602:
            FUN_36119600(this,pCVar1,DAT_362fcbec,pCVar5,*(undefined4 *)(iVar4 + 4),0,0x80);
          }
        }
      }
      local_140 = local_140 + 1;
      iVar4 = FUN_3611f3f0((int)this + 0xdb0);
    } while (local_140 < iVar4);
  }
  if (*(int *)((int)this + 0xd40) != 0) {
    EndModelRenderingMask();
    RM_EndModelRenderingMask();
    return;
  }
  EndModelRenderingView(0);
  RM_EndRenderingView(0);
  return;
}

