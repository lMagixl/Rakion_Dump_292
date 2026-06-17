
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_36147750(void *this,int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  CLightSource *this_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  int iVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  
  DAT_362fdb14 = *(int *)(param_1 + 0x24) >> ((byte)*(undefined4 *)((int)this + 0x1c) & 0x1f);
  DAT_362fdb10 = *(int *)(param_1 + 0x28) >> ((byte)*(undefined4 *)((int)this + 0x1c) & 0x1f);
  bVar17 = (byte)*(undefined4 *)((int)this + 0x1c);
  iVar18 = *(int *)(param_1 + 0x1c) >> (bVar17 & 0x1f);
  iVar19 = *(int *)(param_1 + 0x20) >> (bVar17 & 0x1f);
  if ((*(int *)((int)this + 0x28) < DAT_362fdb14 + iVar18) && (param_2 != 0)) {
    DAT_362fdb14 = *(int *)((int)this + 0x28) - iVar18;
  }
  if (*(int *)((int)this + 0x2c) < DAT_362fdb10 + iVar19) {
    DAT_362fdb10 = *(int *)((int)this + 0x2c) - iVar19;
  }
  _DAT_362fdb0c = (*(int *)((int)this + 0x20) - DAT_362fdb14) * 4;
  DAT_362fdadc = *(int *)((int)this + 0x30) + (*(int *)((int)this + 0x20) * iVar19 + iVar18) * 4;
  this_00 = *(CLightSource **)(param_1 + 0x18);
  *(CLightSource **)((int)this + 0x5c) = this_00;
  iVar16 = *(int *)(this_00 + 0xc);
  iVar3 = **(int **)((int)this + 4);
  DAT_362fdb20 = (float *)(iVar16 + 0x3c);
  _DAT_362fdb04 = (*(int **)((int)this + 4))[0x32];
  _DAT_362fdb1c =
       (*DAT_362fdb20 * *(float *)(iVar3 + 4) +
       *(float *)(iVar16 + 0x40) * *(float *)(iVar3 + 8) +
       *(float *)(iVar16 + 0x44) * *(float *)(iVar3 + 0xc)) - *(float *)(iVar3 + 0x10);
  _DAT_362fdb08 = *(uint *)(this_00 + 0x1c);
  _DAT_362fdb18 = _DAT_36223384 / *(float *)(this_00 + 0x24);
  uVar15 = CLightSource::GetLightColor(this_00);
  *(ulong *)((int)this + 0x60) = uVar15;
  *(ulong *)(param_1 + 0x34) = uVar15;
  bVar17 = (byte)*(undefined4 *)((int)this + 0x1c);
  if ((((*(int *)(param_1 + 0x24) >> (bVar17 & 0x1f) != 0) &&
       (*(int *)(param_1 + 0x28) >> (bVar17 & 0x1f) != 0)) && (0 < DAT_362fdb14)) &&
     (0 < DAT_362fdb10)) {
    if ((_DAT_362fdb08 & 0x10) != 0) {
      uVar4 = *(uint *)(*(int *)(*(int *)((int)this + 4) + 0x1ac) + 0x40);
      *(undefined *)((int)this + 0x61) =
           _pubClipByte[(uint)*(byte *)((int)this + 0x61) - (uVar4 >> 8 & 0xff)];
      *(undefined *)((int)this + 0x62) =
           _pubClipByte[(uint)*(byte *)((int)this + 0x62) - (uVar4 >> 0x10 & 0xff)];
      uVar5 = _DAT_362fdb04 & 0x1000000;
      *(undefined *)((int)this + 99) =
           _pubClipByte[(uint)*(byte *)((int)this + 99) - (uVar4 >> 0x18)];
      if (uVar5 != 0) {
        for (piVar20 = *(int **)(*(int *)this + 0x90); *piVar20 != 0; piVar20 = (int *)*piVar20) {
          if ((*(byte *)(piVar20[5] + 0x1c) & 1) != 0) {
            uVar4 = *(uint *)(piVar20[5] + 0x2c);
            iVar16 = IsBlack(uVar4 & 0xffffff00);
            if (iVar16 == 0) {
              *(undefined *)((int)this + 0x61) =
                   _pubClipByte[(uint)*(byte *)((int)this + 0x61) - (uVar4 >> 8 & 0xff)];
              *(undefined *)((int)this + 0x62) =
                   _pubClipByte[(uint)*(byte *)((int)this + 0x62) - (uVar4 >> 0x10 & 0xff)];
              *(undefined *)((int)this + 99) =
                   _pubClipByte[(uint)*(byte *)((int)this + 99) - (uVar4 >> 0x18)];
            }
          }
        }
      }
    }
    fVar6 = (float)iVar19;
    pfVar1 = (float *)((int)this + 0x50);
    pfVar2 = (float *)((int)this + 0x44);
    fVar7 = (float)iVar18;
    fVar8 = (*(float *)((int)this + 0x38) + *pfVar2 * fVar7 + *pfVar1 * fVar6) - *DAT_362fdb20;
    fVar9 = (*(float *)((int)this + 0x3c) + *(float *)((int)this + 0x48) * fVar7 +
            *(float *)((int)this + 0x54) * fVar6) - DAT_362fdb20[1];
    fVar6 = (*(float *)((int)this + 0x40) + *(float *)((int)this + 0x4c) * fVar7 +
            *(float *)((int)this + 0x58) * fVar6) - DAT_362fdb20[2];
    fVar14 = _DAT_362fdb18 * _DAT_362fdb18 * _DAT_36238bb4;
    fVar7 = *pfVar2 * *pfVar2 +
            *(float *)((int)this + 0x48) * *(float *)((int)this + 0x48) +
            *(float *)((int)this + 0x4c) * *(float *)((int)this + 0x4c);
    fVar10 = *pfVar1 * *pfVar1 +
             *(float *)((int)this + 0x54) * *(float *)((int)this + 0x54) +
             *(float *)((int)this + 0x58) * *(float *)((int)this + 0x58);
    fVar11 = *pfVar1 * *pfVar2 +
             *(float *)((int)this + 0x54) * *(float *)((int)this + 0x48) +
             *(float *)((int)this + 0x58) * *(float *)((int)this + 0x4c);
    fVar12 = fVar8 * *pfVar2 +
             fVar9 * *(float *)((int)this + 0x48) + fVar6 * *(float *)((int)this + 0x4c);
    fVar13 = fVar8 * *pfVar1 +
             fVar9 * *(float *)((int)this + 0x54) + fVar6 * *(float *)((int)this + 0x58);
    DAT_362fdaec = (int)ROUND((fVar13 + fVar13 + fVar10) * fVar14);
    DAT_362fdaf0 = (int)ROUND((fVar12 + fVar12 + fVar7) * fVar14);
    DAT_362fdb00 = (int)ROUND((fVar8 * fVar8 + fVar9 * fVar9 + fVar6 * fVar6) * fVar14);
    DAT_362fdaf4 = (int)ROUND((fVar11 + fVar11) * fVar14);
    DAT_362fdaf8 = (int)ROUND((fVar10 + fVar10) * fVar14);
    DAT_362fdafc = (int)ROUND(fVar14 * (fVar7 + fVar7));
    DAT_362fdae8 = 0xff;
    DAT_362fdae4 = (int)ROUND(_DAT_362fdb18 * *(float *)(*(int *)((int)this + 0x5c) + 0x20) *
                              _DAT_36223774);
    DAT_362fdae0 = (int)ROUND(_DAT_3622dd00 / (_DAT_36223774 - (float)DAT_362fdae4));
    if ((_DAT_362fdb08 & 8) != 0) {
      DAT_362fdae8 = 0xffffff01;
      DAT_362fdae0 = -DAT_362fdae0;
    }
    return 1;
  }
  return 0;
}

