
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36117180(int param_1)

{
  CModelInstance *this;
  float fVar1;
  CModelObject *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int local_f4;
  char *pcStack_f0;
  float fStack_ec;
  float afStack_e8 [6];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [4];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float afStack_54 [2];
  AABBox<float,3> aAStack_4c [4];
  AABBox<float,3> aAStack_48 [8];
  undefined4 auStack_40 [4];
  float afStack_30 [3];
  undefined1 auStack_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_362185c8;
  local_c = ExceptionList;
  local_f4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_3611f3f0(param_1 + 0xdb0);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_3611fde0((void *)(param_1 + 0xdb0),local_f4);
      piVar9 = *(int **)(iVar2 + 0xc);
      puVar3 = (undefined4 *)(**(code **)(*piVar9 + 0x80))();
      pcStack_f0 = StringDuplicate((char *)*puVar3);
      uStack_4 = 0;
      iVar4 = CTString::operator==((CTString *)&pcStack_f0,&DAT_36237a4b);
      if ((iVar4 == 0) && (((piVar9[1] != 5 && (piVar9[1] != 10)) || (DAT_362fcb8c != 0)))) {
        iVar4 = 1;
        do {
          afStack_e8[iVar4 + -1] = 3e+38;
          afStack_e8[iVar4 + 2] = -3e+38;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        iVar4 = piVar9[1];
        if ((iVar4 == 3) || (iVar4 == 5)) {
          this_00 = *(CModelObject **)(iVar2 + 0x10);
          CModelObject::GetCurrentFrameBBox(this_00,(AABBox<float,3> *)afStack_e8);
          if (piVar9[0x21] != 0) {
            (**(code **)(*piVar9 + 0xf4))();
            CModelObject::GetCollisionBoxMin(this_00,(long)afStack_30);
            CModelObject::GetCollisionBoxMax(this_00,(long)afStack_54);
            pfVar5 = FUN_360bef70(auStack_24,afStack_30,afStack_54);
            FUN_360b1850(afStack_e8,pfVar5);
          }
          fStack_ac = *(float *)(this_00 + 0x84);
          fStack_a8 = *(float *)(this_00 + 0x88);
          fVar1 = *(float *)(this_00 + 0x8c);
          afStack_e8[3] = afStack_e8[3] * ABS(fStack_ac);
          afStack_e8[0] = afStack_e8[0] * ABS(fStack_ac);
          afStack_e8[4] = afStack_e8[4] * ABS(fStack_a8);
          afStack_e8[1] = afStack_e8[1] * ABS(fStack_a8);
          fStack_a4 = fVar1;
        }
        else {
          if ((iVar4 != 9) && (iVar4 != 10)) goto LAB_361176ac;
          this = (CModelInstance *)piVar9[0x1f];
          CModelInstance::GetAllFramesBBox(this,(AABBox<float,3> *)afStack_e8);
          if (piVar9[0x21] != 0) {
            iVar2 = 1;
            do {
              *(undefined4 *)(aAStack_48 + iVar2 * 4 + -4) = 0x7f61b1e6;
              auStack_40[iVar2] = 0xff61b1e6;
              iVar2 = iVar2 + 1;
            } while (iVar2 < 4);
            CModelInstance::GetCurrentColisionBox(this,aAStack_48);
            FUN_360b1850(afStack_e8,(float *)aAStack_48);
          }
          fStack_94 = *(float *)(this + 0x90);
          fStack_90 = *(float *)(this + 0x94);
          fVar1 = *(float *)(this + 0x98);
          afStack_e8[3] = afStack_e8[3] * ABS(fStack_94);
          afStack_e8[0] = afStack_e8[0] * ABS(fStack_94);
          afStack_e8[4] = afStack_e8[4] * ABS(fStack_90);
          afStack_e8[1] = afStack_e8[1] * ABS(fStack_90);
          fStack_8c = fVar1;
        }
        iVar2 = DAT_362fcbec;
        afStack_e8[5] = afStack_e8[5] * ABS(fVar1);
        afStack_e8[2] = afStack_e8[2] * ABS(fVar1);
        fStack_d0 = afStack_e8[3] - afStack_e8[0];
        fStack_cc = afStack_e8[4] - afStack_e8[1];
        fStack_c8 = afStack_e8[5] - afStack_e8[2];
        fVar1 = SQRT(fStack_d0 * fStack_d0 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8) *
                _DAT_36237a78;
        *(float *)(DAT_362fcbec + 0x84) = fVar1;
        *(float *)(iVar2 + 0x88) = fVar1;
        *(float *)(iVar2 + 0x8c) = fVar1;
        fStack_c4 = fStack_d0;
        fStack_c0 = fStack_cc;
        afStack_bc[0] = fStack_c8;
        fStack_a0 = fVar1;
        fStack_9c = fVar1;
        fStack_98 = fVar1;
        (**(code **)(*piVar9 + 100))(&uStack_6c);
        fStack_84 = afStack_e8[3];
        iStack_88 = 0;
        uStack_80 = 0;
        CPlacement3D::Translate_OwnSystem((CPlacement3D *)&uStack_70,(Vector<float,3> *)&iStack_88);
        uStack_74 = uStack_68;
        uStack_78 = uStack_6c;
        uStack_7c = uStack_70;
        afStack_bc[0] = 0.0;
        afStack_bc[1] = 0.0;
        afStack_bc[2] = 0.0;
        (**(code **)(**(int **)(param_1 + 0x694) + 8))(&uStack_7c,afStack_bc);
        if ((((afStack_bc[3] <= _DAT_3622376c) &&
             (fVar1 = (_DAT_36227d20 / (fVar1 + _DAT_36223384)) * afStack_bc[3],
             _DAT_3622376c <= fVar1)) && (fVar1 < _DAT_3622ec8c != (fVar1 == _DAT_3622ec8c))) &&
           ((fVar1 < _DAT_3622376c == (fVar1 == _DAT_3622376c) && (fVar1 < _DAT_3622ec8c)))) {
          fVar1 = fVar1 * _DAT_36237a80;
          if (_DAT_3622376c <= fVar1) {
            if (_DAT_362287e0 < fVar1) {
              fVar1 = (_DAT_36223384 - fVar1) * _DAT_3622879c;
              if (fVar1 < _DAT_3622376c) goto LAB_361176ac;
              fStack_ec = fVar1;
              if (fVar1 < _DAT_36223384 != (fVar1 == _DAT_36223384)) goto LAB_36117628;
            }
LAB_36117729:
            fStack_ec = 1.0;
LAB_3611763f:
            CDrawPort::SetFont(*(CDrawPort **)(param_1 + 8),_pfdConsoleFont);
            uVar8 = FUN_361bfd6c();
            piVar9 = &iStack_88;
            uVar7 = (uint)uVar8 & 0xff | 0xff000000;
            iStack_88 = 0;
            uVar8 = FUN_361bfd6c();
            lVar6 = (long)uVar8;
            uVar8 = FUN_361bfd6c();
            CDrawPort::PutTextC(*(CDrawPort **)(param_1 + 8),(CTString *)&pcStack_f0,(long)uVar8,
                                lVar6,uVar7,piVar9);
          }
          else {
            fVar1 = fVar1 / _DAT_3622376c;
            if (_DAT_3622376c <= fVar1) {
              fStack_ec = fVar1;
              if (fVar1 < _DAT_36223384 == (fVar1 == _DAT_36223384)) goto LAB_36117729;
LAB_36117628:
              if (fStack_ec != _DAT_3622376c) goto LAB_3611763f;
            }
          }
        }
      }
LAB_361176ac:
      uStack_4 = 0xffffffff;
      StringFree(pcStack_f0);
      local_f4 = local_f4 + 1;
      iVar2 = FUN_3611f3f0(param_1 + 0xdb0);
    } while (local_f4 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

