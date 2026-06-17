
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_3611e240(float *param_1)

{
  int *this;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 unaff_EDI;
  int iVar14;
  bool bVar15;
  int local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  int local_120;
  float local_11c;
  float local_118;
  int local_114 [3];
  int local_108;
  float local_104 [3];
  float local_f8;
  float local_f4 [3];
  CSetFPUPrecision local_e8 [8];
  CDrawPort local_e0 [8];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  Matrix<float,3,3> local_3c [40];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_362186b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)((int)param_1[1] + 0x158) == 0) {
    ExceptionList = &local_14;
    CSetFPUPrecision::CSetFPUPrecision((CSetFPUPrecision *)&local_128,1);
    local_c = 0;
    CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)((int)param_1[1] + 0x34));
    *(undefined4 *)((int)param_1[1] + 0x158) = 1;
    local_c = 0xffffffff;
    CSetFPUPrecision::~CSetFPUPrecision((CSetFPUPrecision *)&local_128);
  }
  FUN_36114310(0);
  CSetFPUPrecision::CSetFPUPrecision(local_e8,0);
  local_c = 1;
  FUN_3611b1d0((int)param_1);
  fVar1 = param_1[2];
  if (fVar1 != 0.0) {
    FUN_36123ab0(*(int *)((int)fVar1 + 0x10) - *(int *)((int)fVar1 + 8),
                 *(int *)((int)fVar1 + 0x14) - *(int *)((int)fVar1 + 0xc));
  }
  FUN_3611dd90(param_1);
  FUN_3611e1d0(param_1);
  FUN_36114360(0x10);
  if (DAT_362a40b8 < 0) {
    DAT_362a40b8 = 0;
  }
  else if (3 < DAT_362a40b8) {
    DAT_362a40b8 = 3;
  }
  if (DAT_362c53e4 < 0) {
    DAT_362c53e4 = 0;
  }
  else if (3 < DAT_362c53e4) {
    DAT_362c53e4 = 3;
  }
  if (((DAT_362a40b8 == 1) && (*(int *)(_pGfx + 0xa38) == 0)) ||
     ((DAT_362c53e4 == 1 && (*(int *)(_pGfx + 0xa38) == 1)))) {
    (*DAT_362c46b4)(DAT_362c53d8);
  }
  if ((param_1[0x350] == 0.0) && (*param_1 == 0.0)) {
    if ((*(int *)(_pGfx + 0xa38) == 0) || (DAT_362c53dc != 0)) {
      FUN_36114360(6);
      FUN_36064560((int *)param_1[2],0.0);
    }
    DAT_362fa9c4 = 0;
  }
  FUN_36114360(0);
  fVar1 = param_1[0x350];
  if (((fVar1 == 0.0) && ((float *)param_1[0x1a5] == param_1 + 0xd2)) && ((int)*param_1 < 1)) {
    iVar5 = FUN_3611f440((int)(param_1 + 0x37b));
    if ((0 < iVar5) && (*(int *)((int)param_1[2] + 0x48) == 0)) {
      FUN_36116f80((int)param_1);
      iVar14 = (int)*param_1 * 0xfe0;
      local_144 = 0;
      iVar5 = FUN_3611f440((int)(param_1 + 0x37b));
      if (0 < iVar5) {
        do {
          piVar6 = (int *)FUN_3611fee0(param_1 + 0x37b,local_144);
          if ((-1 < *piVar6) && (FUN_36116e60((int)piVar6), _DAT_3622dd0c <= (float)piVar6[0xd])) {
            fVar1 = param_1[2];
            iVar11 = *(int *)((int)fVar1 + 0x10) - *(int *)((int)fVar1 + 8);
            iVar12 = *(int *)((int)fVar1 + 0x14) - *(int *)((int)fVar1 + 0xc);
            this = piVar6 + 8;
            piVar6[10] = piVar6[10] + 1;
            *this = *this + -1;
            piVar6[0xb] = piVar6[0xb] + 1;
            piVar6[9] = piVar6[9] + -1;
            local_114[0] = 0;
            local_114[1] = 0;
            local_114[2] = iVar11;
            local_108 = iVar12;
            piVar7 = (int *)FUN_36069100(local_7c,local_114,local_114 + 2);
            FUN_360bb960(this,piVar7);
            dVar2 = (double)(piVar6[0xb] - piVar6[9]) / (double)iVar12;
            dVar4 = (double)(piVar6[10] - *this) / (double)iVar11;
            dVar3 = (double)piVar6[9] / (double)iVar12;
            CDrawPort::CDrawPort
                      (local_e0,(CDrawPort *)param_1[2],
                       (double)CONCAT44(SUB84(dVar3,0),
                                        (int)((ulonglong)((double)*this / (double)iVar11) >> 0x20)),
                       (double)CONCAT44(SUB84(dVar4,0),(int)((ulonglong)dVar3 >> 0x20)),
                       (double)CONCAT44(SUB84(dVar2,0),(int)((ulonglong)dVar4 >> 0x20)),
                       (double)CONCAT44(unaff_EDI,(int)((ulonglong)dVar2 >> 0x20)));
            local_c = CONCAT31(local_c._1_3_,2);
            CDrawPort::SetAsCurrent(local_e0);
            local_120 = *(int *)((int)param_1[2] + 8);
            iVar5 = *(int *)((int)param_1[2] + 0xc);
            iVar13 = local_d8 - local_120;
            iVar8 = local_d4 - iVar5;
            local_120 = local_d0 - local_120;
            iVar5 = local_cc - iVar5;
            iVar9 = local_120 - iVar13;
            *(float *)(&DAT_362fba9c + iVar14) = param_1[1];
            CAnyProjection3D::operator=
                      ((CAnyProjection3D *)(iVar14 + 0x362fbad4),(CAnyProjection3D *)(param_1 + 0xf)
                      );
            *(CDrawPort **)(&DAT_362fbaa0 + iVar14) = local_e0;
            FUN_36117000(&DAT_362fba98 + iVar14,0,0,iVar9,iVar5 - iVar8);
            local_11c = (float)iVar11;
            local_118 = (float)iVar12;
            local_104[0] = 0.0;
            local_104[1] = 0.0;
            pfVar10 = FUN_36069060(local_6c,local_104,&local_11c);
            local_104[2] = (float)local_120;
            iVar9 = *(int *)(&DAT_362fc12c + iVar14);
            local_f8 = (float)iVar5;
            *(float *)(iVar9 + 0x54) = *pfVar10;
            *(float *)(iVar9 + 0x58) = pfVar10[1];
            local_128 = (float)iVar13;
            *(float *)(iVar9 + 0x5c) = pfVar10[2];
            *(float *)(iVar9 + 0x60) = pfVar10[3];
            local_124 = (float)iVar8;
            pfVar10 = FUN_36069060(local_5c,&local_128,local_104 + 2);
            iVar5 = *(int *)(&DAT_362fc12c + iVar14);
            *(float *)(iVar5 + 0x19c) = *pfVar10;
            *(float *)(iVar5 + 0x1a0) = pfVar10[1];
            *(float *)(iVar5 + 0x1a4) = pfVar10[2];
            *(float *)(iVar5 + 0x1a8) = pfVar10[3];
            iVar5 = *(int *)(&DAT_362fc12c + iVar14);
            if ((*(byte *)(piVar6 + 0xe) & 1) == 0) {
              *(undefined4 *)(&DAT_362fbacc + iVar14) = 0;
              *(int **)(&DAT_362fbad0 + iVar14) = piVar6 + 0x1d;
              *(undefined4 *)(iVar5 + 0x7c) = 1;
              *(int *)(iVar5 + 0x84) = piVar6[1];
              *(int *)(iVar5 + 0x88) = piVar6[2];
              *(int *)(iVar5 + 0x8c) = piVar6[3];
              *(int *)(iVar5 + 0x90) = piVar6[4];
              iVar5 = *(int *)(&DAT_362fc12c + iVar14);
              *(undefined4 *)(iVar5 + 0x7c) = 1;
              *(float *)(iVar5 + 0x90) = *(float *)(iVar5 + 0x90) + _DAT_362253e8;
            }
            else {
              *(int *)(&DAT_362fbacc + iVar14) = piVar6[0x1b];
              *(undefined4 *)(&DAT_362fbad0 + iVar14) = 0;
              *(undefined4 *)(iVar5 + 0x80) = 1;
              local_f4[0] = 0.0;
              local_f4[1] = 0.0;
              local_f4[2] = -1.0;
              pfVar10 = FUN_3605f8b0(local_4c,local_f4,(float *)(piVar6 + 5));
              *(float *)(iVar5 + 0x84) = *pfVar10;
              *(float *)(iVar5 + 0x88) = pfVar10[1];
              *(float *)(iVar5 + 0x8c) = pfVar10[2];
              *(float *)(iVar5 + 0x90) = pfVar10[3];
              iVar5 = *(int *)(&DAT_362fc12c + iVar14);
              local_140 = *(undefined4 *)(iVar5 + 0x28);
              local_13c = *(undefined4 *)(iVar5 + 0x2c);
              local_138 = *(undefined4 *)(iVar5 + 0x30);
              local_134 = *(undefined4 *)(iVar5 + 0x34);
              local_130 = *(undefined4 *)(iVar5 + 0x38);
              local_12c = *(undefined4 *)(iVar5 + 0x3c);
              MakeRotationMatrixFast(local_3c,(Vector<float,3> *)&local_134);
              CPlacement3D::AbsoluteToRelativeSmooth
                        ((CPlacement3D *)&local_140,(CPlacement3D *)(piVar6 + 0xf));
              CPlacement3D::RelativeToAbsoluteSmooth
                        ((CPlacement3D *)&local_140,(CPlacement3D *)(piVar6 + 0x15));
              iVar5 = *(int *)(&DAT_362fc12c + iVar14);
              *(undefined4 *)(iVar5 + 0x28) = local_140;
              *(undefined4 *)(iVar5 + 0x2c) = local_13c;
              *(undefined4 *)(iVar5 + 0x30) = local_138;
              *(undefined4 *)(iVar5 + 0x34) = local_134;
              *(undefined4 *)(iVar5 + 0x38) = local_130;
              *(undefined4 *)(iVar5 + 0x3c) = local_12c;
              if (((*(int *)(&DAT_362fc12c + iVar14) == iVar14 + 0x362fbde0) &&
                  (_DAT_36223384 <= (float)piVar6[0x1c])) &&
                 ((float)piVar6[0x1c] < _DAT_36237a8c != ((float)piVar6[0x1c] == _DAT_36237a8c))) {
                *(int *)(*(int *)(&DAT_362fc12c + iVar14) + 0x184) = piVar6[0x1c];
              }
            }
            bVar15 = DAT_362a4160 == 0;
            *(undefined4 *)(&DAT_362fc7d8 + iVar14) = 0;
            (&DAT_362fc7f4)[iVar14] = 0;
            if (bVar15) {
              CDrawPort::Fill(local_e0,0x7f7f7fff);
            }
            else {
              FUN_361142a0();
              FUN_3611e240((float *)(&DAT_362fba98 + iVar14));
              FUN_36114310(0);
            }
            CDrawPort::SetAsCurrent((CDrawPort *)param_1[2]);
            CDrawPort::FillZBuffer((CDrawPort *)param_1[2],1.0);
            FUN_3611c3b0(param_1,(int)piVar6);
            DAT_362fa9c4 = 1;
            local_c = CONCAT31(local_c._1_3_,1);
            CDrawPort::~CDrawPort(local_e0);
          }
          local_144 = local_144 + 1;
          iVar5 = FUN_3611f440((int)(param_1 + 0x37b));
        } while (local_144 < iVar5);
      }
      FUN_36123300((CListHead *)(param_1 + 0x37b));
      if (((DAT_362fa9c4 == 0) && (*(int *)((CDrawPort *)param_1[2] + 0x48) == 0)) &&
         (DAT_362fcbc0 != 0)) {
        CDrawPort::FillZBuffer((CDrawPort *)param_1[2],1.0);
      }
      FUN_3611c0e0(param_1);
      goto LAB_3611e91a;
    }
  }
  if ((0 < (int)*param_1) ||
     (((fVar1 == 0.0 && (*(int *)((int)param_1[2] + 0x48) == 0)) && (DAT_362fcbc0 != 0)))) {
    CDrawPort::FillZBuffer((CDrawPort *)param_1[2],1.0);
  }
  FUN_3611c0e0(param_1);
  FUN_36116f80((int)param_1);
LAB_3611e91a:
  FUN_36071fd0();
  FUN_36071fe0();
  if (*param_1 == 0.0) {
    _DAT_362c3a7c = 0;
  }
  if ((param_1[0x350] == 0.0) &&
     (((*(int *)(_pGfx + 0xa38) == 1 && (DAT_362c53dc == 0)) || (0 < (int)*param_1)))) {
    FUN_36064560((int *)param_1[2],*param_1);
  }
  FUN_36123790();
  FUN_361142a0();
  local_c = 0xffffffff;
  CSetFPUPrecision::~CSetFPUPrecision(local_e8);
  ExceptionList = local_14;
  return;
}

