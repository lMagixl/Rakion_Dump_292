
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_RenderSquare(class Vector<float,3> const &,float,float,unsigned long,float)
    */

void __cdecl
Particle_RenderSquare
          (Vector<float,3> *param_1,float param_2,float param_3,ulong param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float unaff_retaddr;
  float *pfStack_30;
  float fStack_14;
  float fStack_10;
  float local_c [3];
  
                    /* 0x6c3c0  2755  ?Particle_RenderSquare@@YAXABV?$Vector@M$02@@MMKM@Z */
  if ((_DAT_36228818 <= param_2) && (1 < (param_4 & 0xff))) {
    pfStack_30 = local_c;
    (**(code **)(*DAT_362bf9c4 + 0x18))(param_1);
    if (_DAT_36227cf0 <= (_DAT_362bf9c0 / local_c[0]) * unaff_retaddr) {
      if (_Particle_bSkipClipping == 0) {
        iVar5 = (**(code **)(*DAT_362bf9c4 + 0x28))(&fStack_14,unaff_retaddr);
        if (iVar5 < 0) {
          return;
        }
        DAT_362bf9e4 = DAT_362bf9e4 | iVar5 == 0;
      }
      else {
        DAT_362bf9e4 = 1;
      }
      iVar5 = FUN_3606db20(0x362bf9f0);
      pfVar7 = (float *)(DAT_362bf9f4 + -0x20 + iVar5 * 8);
      if (DAT_362bf9d8 != 0) {
        fVar2 = (_DAT_362c3b5c - local_c[0]) * DAT_362c3b58;
        *pfVar7 = fVar2;
        uVar6 = (uint)ROUND((float)DAT_362c3b4c * fVar2 * _DAT_36228814 - _DAT_3622880c);
        iVar10 = (int)uVar6 >> 8;
        iVar5 = DAT_362c3b4c + -1;
        if (iVar10 < 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar5;
          if (iVar10 <= iVar5) {
            iVar11 = iVar10;
          }
        }
        iVar10 = iVar10 + 1;
        if (iVar10 < 0) {
          iVar5 = 0;
        }
        else if (iVar10 <= iVar5) {
          iVar5 = iVar10;
        }
        uVar6 = uVar6 & 0xff;
        uVar6 = 0xff - (((uint)*(byte *)(iVar11 + DAT_362c3b54) * (uVar6 ^ 0xff) +
                        *(byte *)(iVar5 + DAT_362c3b54) * uVar6) * DAT_362c3b60 >> 0x10);
        if (uVar6 < 4) {
          return;
        }
        if (DAT_362bf988 == 0) {
          pfVar7[1] = 0.0;
        }
        else {
          uVar6 = uVar6 & 0xff;
          param_4 = MulColors(param_4,((uVar6 << 8 | uVar6) << 8 | uVar6) << 8 | uVar6 |
                                      DAT_362bf988);
          param_2 = (float)param_4;
        }
      }
      if (DAT_362bf9d4 != 0) {
        *pfVar7 = -(local_c[0] * DAT_362c3b1c);
        fVar2 = (fStack_14 * _DAT_362c3be0 + local_c[0] * _DAT_362c3be8 + fStack_10 * _DAT_362c3be4
                + _DAT_362c3b24) * DAT_362c3b20;
        pfVar7[1] = fVar2;
        iVar5 = (int)ROUND((float)DAT_362c3b34 * fVar2);
        if (iVar5 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = DAT_362c3b34 + -1;
          if (iVar5 <= DAT_362c3b34 + -1) {
            iVar10 = iVar5;
          }
        }
        uVar6 = (uint)ROUND((float)DAT_362c3b38 * *pfVar7 * _DAT_36228810 - _DAT_3622880c);
        iVar11 = (int)uVar6 >> 8;
        iVar5 = DAT_362c3b38 + -1;
        if (iVar11 < 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = iVar5;
          if (iVar11 <= iVar5) {
            iVar12 = iVar11;
          }
        }
        iVar11 = iVar11 + 1;
        if (iVar11 < 0) {
          iVar5 = 0;
        }
        else if (iVar11 <= iVar5) {
          iVar5 = iVar11;
        }
        uVar6 = uVar6 & 0xff;
        uVar6 = 0xff - (((uint)*(byte *)(iVar12 + DAT_362c3b44 + iVar10 * DAT_362c3b38) *
                         (uVar6 ^ 0xff) +
                        *(byte *)(DAT_362c3b44 + iVar5 + iVar10 * DAT_362c3b38) * uVar6) *
                        DAT_362c3b28 >> 0x10);
        if (uVar6 < 4) {
          return;
        }
        param_4 = (ulong)param_2;
        if (DAT_362bf988 != 0) {
          uVar6 = uVar6 & 0xff;
          param_4 = MulColors((ulong)param_2,
                              ((uVar6 << 8 | uVar6) << 8 | uVar6) << 8 | uVar6 | DAT_362bf988);
        }
      }
      if (DAT_362bf9e0 != 0) {
        fVar2 = *pfVar7;
        fVar3 = pfVar7[1];
        pfVar7[6] = fVar2;
        pfVar7[7] = fVar3;
        pfVar7[4] = fVar2;
        pfVar7[5] = fVar3;
        pfVar7[2] = fVar2;
        pfVar7[3] = fVar3;
        FUN_360627d0(&DAT_362bf9f0,4);
      }
      pfVar7 = (float *)FUN_36062560(&DAT_362c54d8,4);
      puVar8 = (undefined4 *)FUN_360627d0(&DAT_362c5508,4);
      piVar9 = (int *)FUN_36062630(&DAT_362c54f8,4);
      fVar2 = unaff_retaddr * param_3;
      if (((uint)param_1 & 0x7ffffff) == 0) {
        pfVar7[2] = local_c[0];
        pfVar7[5] = local_c[0];
        pfVar7[8] = local_c[0];
        pfVar7[0xb] = local_c[0];
        pfVar7[10] = fStack_10 - fVar2;
        *pfVar7 = fStack_14 - unaff_retaddr;
        pfVar7[1] = fStack_10 - fVar2;
        pfVar7[3] = fStack_14 - unaff_retaddr;
        pfVar7[4] = fVar2 + fStack_10;
        pfVar7[6] = fStack_14 + unaff_retaddr;
        pfVar7[7] = fVar2 + fStack_10;
        pfVar7[9] = fStack_14 + unaff_retaddr;
      }
      else {
        uVar6 = (int)ROUND((float)param_1 * _DAT_362287f8) & 0xff;
        fVar3 = *(float *)(_pfSinTable + uVar6 * 4);
        fVar1 = *(float *)(_pfCosTable + uVar6 * 4);
        pfVar7[2] = local_c[0];
        pfVar7[5] = local_c[0];
        pfVar7[8] = local_c[0];
        pfVar7[0xb] = local_c[0];
        fVar4 = fVar1 * unaff_retaddr + fVar3 * fVar2;
        fVar2 = fVar3 * unaff_retaddr - fVar1 * fVar2;
        *pfVar7 = fStack_14 - fVar4;
        pfVar7[1] = fStack_10 - fVar2;
        pfVar7[3] = fStack_14 + fVar2;
        pfVar7[4] = fStack_10 - fVar4;
        pfVar7[6] = fVar4 + fStack_14;
        pfVar7[7] = fStack_10 + fVar2;
        pfVar7[9] = fStack_14 - fVar2;
        pfVar7[10] = fVar4 + fStack_10;
      }
      *puVar8 = DAT_362bf994;
      puVar8[1] = DAT_362bf998;
      puVar8[2] = DAT_362bf98c;
      puVar8[3] = DAT_362bf990;
      puVar8[4] = DAT_362bf9a4;
      puVar8[5] = DAT_362bf9a8;
      puVar8[6] = DAT_362bf99c;
      puVar8[7] = DAT_362bf9a0;
      FUN_360605c0(&pfStack_30,param_4);
      *piVar9 = (int)pfStack_30;
      piVar9[1] = (int)pfStack_30;
      piVar9[2] = (int)pfStack_30;
      piVar9[3] = (int)pfStack_30;
    }
  }
  return;
}

