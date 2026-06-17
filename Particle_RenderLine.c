
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_RenderLine(class Vector<float,3> const &,class Vector<float,3> const
   &,float,unsigned long) */

void __cdecl
Particle_RenderLine(Vector<float,3> *param_1,Vector<float,3> *param_2,float param_3,ulong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  ulong unaff_retaddr;
  float *pfStack_5c;
  Vector<float,3> *pVStack_58;
  undefined1 *puStack_54;
  ulong uStack_4c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [8];
  float fStack_4;
  
                    /* 0x6c8d0  2753  ?Particle_RenderLine@@YAXABV?$Vector@M$02@@0MK@Z */
  if ((_DAT_3622376c <= param_3) && (1 < (param_4 & 0xff))) {
    puStack_54 = local_c;
    pVStack_58 = param_1;
    pfStack_5c = (float *)0x3606c912;
    (**(code **)(*DAT_362bf9c4 + 0x18))();
    pfStack_5c = &fStack_20;
    (**(code **)(*DAT_362bf9c4 + 0x18))(unaff_retaddr);
    if ((fStack_14 <= _DAT_362bf9ac) && (fStack_20 <= _DAT_362bf9ac)) {
      fVar1 = _DAT_36223384 / fStack_14;
      fVar2 = _DAT_36223384 / fStack_20;
      if ((_DAT_36227cf0 <= _DAT_362bf9c0 * fVar1 * fStack_4) ||
         (_DAT_36227cf0 <= _DAT_362bf9c0 * fVar2 * fStack_4)) {
        DAT_362bf9e4 = 1;
        uStack_4c = param_4;
        iVar4 = FUN_3606db20(0x362bf9f0);
        pfVar7 = (float *)(DAT_362bf9f4 + -0x20 + iVar4 * 8);
        if (DAT_362bf9d8 != 0) {
          *pfVar7 = (_DAT_362c3b5c - fStack_14) * DAT_362c3b58;
          pfVar7[2] = (_DAT_362c3b5c - fStack_20) * DAT_362c3b58;
          uVar5 = (uint)ROUND((float)DAT_362c3b4c * *pfVar7 * _DAT_36228814 - _DAT_3622880c);
          iVar10 = (int)uVar5 >> 8;
          iVar4 = DAT_362c3b4c + -1;
          if (iVar10 < 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar4;
            if (iVar10 <= iVar4) {
              iVar11 = iVar10;
            }
          }
          iVar10 = iVar10 + 1;
          if (iVar10 < 0) {
            iVar4 = 0;
          }
          else if (iVar10 <= iVar4) {
            iVar4 = iVar10;
          }
          uVar5 = uVar5 & 0xff;
          uVar6 = 0xff - (((uint)*(byte *)(iVar11 + DAT_362c3b54) * (uVar5 ^ 0xff) +
                          *(byte *)(iVar4 + DAT_362c3b54) * uVar5) * DAT_362c3b60 >> 0x10);
          uVar5 = (uint)ROUND((float)DAT_362c3b4c * pfVar7[2] * _DAT_36228814 - _DAT_3622880c);
          iVar10 = (int)uVar5 >> 8;
          iVar4 = DAT_362c3b4c + -1;
          if (iVar10 < 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar4;
            if (iVar10 <= iVar4) {
              iVar11 = iVar10;
            }
          }
          iVar10 = iVar10 + 1;
          if (iVar10 < 0) {
            iVar4 = 0;
          }
          else if (iVar10 <= iVar4) {
            iVar4 = iVar10;
          }
          uVar5 = uVar5 & 0xff;
          uVar5 = 0xff - (((uint)*(byte *)(iVar11 + DAT_362c3b54) * (uVar5 ^ 0xff) +
                          *(byte *)(iVar4 + DAT_362c3b54) * uVar5) * DAT_362c3b60 >> 0x10);
          if ((uVar5 | uVar6) < 4) {
            return;
          }
          if (DAT_362bf988 == 0) {
            pfVar7[3] = 0.0;
            pfVar7[1] = 0.0;
          }
          else {
            uVar6 = uVar6 & 0xff;
            param_4 = MulColors(unaff_retaddr,
                                ((uVar6 << 8 | uVar6) << 8 | uVar6) << 8 | uVar6 | DAT_362bf988);
            uVar5 = uVar5 & 0xff;
            uStack_4c = MulColors(unaff_retaddr,
                                  ((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | uVar5 | DAT_362bf988);
          }
        }
        if (DAT_362bf9d4 != 0) {
          *pfVar7 = -(fStack_14 * DAT_362c3b1c);
          pfVar7[1] = (fStack_14 * _DAT_362c3be8 +
                       fStack_1c * _DAT_362c3be0 + fStack_18 * _DAT_362c3be4 + _DAT_362c3b24) *
                      DAT_362c3b20;
          pfVar7[2] = -(fStack_20 * DAT_362c3b1c);
          pfVar7[3] = (fStack_20 * _DAT_362c3be8 +
                       fStack_28 * _DAT_362c3be0 + fStack_24 * _DAT_362c3be4 + _DAT_362c3b24) *
                      DAT_362c3b20;
          iVar4 = (int)ROUND((float)DAT_362c3b34 * pfVar7[1]);
          if (iVar4 < 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = DAT_362c3b34 + -1;
            if (iVar4 <= DAT_362c3b34 + -1) {
              iVar10 = iVar4;
            }
          }
          uVar5 = (uint)ROUND((float)DAT_362c3b38 * *pfVar7 * _DAT_36228810 - _DAT_3622880c);
          iVar11 = (int)uVar5 >> 8;
          iVar4 = DAT_362c3b38 + -1;
          if (iVar11 < 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = iVar4;
            if (iVar11 <= iVar4) {
              iVar13 = iVar11;
            }
          }
          iVar11 = iVar11 + 1;
          if (iVar11 < 0) {
            iVar4 = 0;
          }
          else if (iVar11 <= iVar4) {
            iVar4 = iVar11;
          }
          uVar5 = uVar5 & 0xff;
          uVar5 = 0xff - (((uint)*(byte *)(iVar13 + DAT_362c3b44 + iVar10 * DAT_362c3b38) *
                           (uVar5 ^ 0xff) +
                          *(byte *)(DAT_362c3b44 + iVar4 + iVar10 * DAT_362c3b38) * uVar5) *
                          DAT_362c3b28 >> 0x10);
          iVar4 = (int)ROUND((float)DAT_362c3b34 * pfVar7[3]);
          if (iVar4 < 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = DAT_362c3b34 + -1;
            if (iVar4 <= DAT_362c3b34 + -1) {
              iVar10 = iVar4;
            }
          }
          uVar6 = (uint)ROUND((float)DAT_362c3b38 * pfVar7[2] * _DAT_36228810 - _DAT_3622880c);
          puVar12 = (undefined1 *)((int)uVar6 >> 8);
          puStack_54 = (undefined1 *)(DAT_362c3b38 + -1);
          if ((int)puVar12 < 0) {
            puVar14 = (undefined1 *)0x0;
          }
          else {
            puVar14 = puStack_54;
            if ((int)puVar12 <= (int)puStack_54) {
              puVar14 = puVar12;
            }
          }
          puVar12 = puVar12 + 1;
          if ((int)puVar12 < 0) {
            puStack_54 = (undefined1 *)0x0;
          }
          else if ((int)puVar12 <= (int)puStack_54) {
            puStack_54 = puVar12;
          }
          uVar6 = uVar6 & 0xff;
          uVar6 = 0xff - (((uint)(byte)puVar14[iVar10 * DAT_362c3b38 + DAT_362c3b44] *
                           (uVar6 ^ 0xff) +
                          (byte)puStack_54[iVar10 * DAT_362c3b38 + DAT_362c3b44] * uVar6) *
                          DAT_362c3b28 >> 0x10);
          if ((uVar6 | uVar5) < 4) {
            return;
          }
          if (DAT_362bf988 != 0) {
            uVar5 = uVar5 & 0xff;
            param_4 = MulColors(param_4,((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | uVar5 |
                                        DAT_362bf988);
            uVar6 = uVar6 & 0xff;
            uStack_4c = MulColors(uStack_4c,
                                  ((uVar6 << 8 | uVar6) << 8 | uVar6) << 8 | uVar6 | DAT_362bf988);
          }
        }
        if (DAT_362bf9e0 != 0) {
          pfVar7[4] = pfVar7[2];
          pfVar7[7] = pfVar7[1];
          pfVar7[5] = pfVar7[3];
          pfVar7[6] = *pfVar7;
          FUN_360627d0(&DAT_362bf9f0,4);
        }
        fVar3 = fStack_28 * fVar2 - fStack_1c * fVar1;
        fVar1 = fStack_24 * fVar2 - fStack_18 * fVar1;
        fVar2 = fVar3 * fVar3 + fVar1 * fVar1;
        if (fVar2 < _DAT_3622376c) {
          fVar2 = _DAT_3622376c;
        }
        puStack_54 = (undefined1 *)((fStack_4 / SQRT(fVar2)) * fVar3);
        fStack_4 = (fStack_4 / SQRT(fVar2)) * fVar1;
        pfVar7 = (float *)FUN_36062560(&DAT_362c54d8,4);
        puVar8 = (undefined4 *)FUN_360627d0(&DAT_362c5508,4);
        puVar9 = (undefined4 *)FUN_36062630(&DAT_362c54f8,4);
        pfVar7[2] = fStack_14;
        pfVar7[0xb] = fStack_14;
        *pfVar7 = fStack_4 + fStack_1c;
        pfVar7[5] = fStack_20;
        pfVar7[8] = fStack_20;
        pfVar7[1] = fStack_18 - (float)puStack_54;
        pfVar7[3] = fStack_4 + fStack_28;
        pfVar7[4] = fStack_24 - (float)puStack_54;
        pfVar7[6] = fStack_28 - fStack_4;
        pfVar7[7] = (float)puStack_54 + fStack_24;
        pfVar7[9] = fStack_1c - fStack_4;
        pfVar7[10] = (float)puStack_54 + fStack_18;
        *puVar8 = DAT_362bf98c;
        puVar8[1] = DAT_362bf990;
        puVar8[2] = DAT_362bf994;
        puVar8[3] = DAT_362bf998;
        puVar8[4] = DAT_362bf99c;
        puVar8[5] = DAT_362bf9a0;
        puVar8[6] = DAT_362bf9a4;
        puVar8[7] = DAT_362bf9a8;
        FUN_360605c0(&pVStack_58,param_4);
        FUN_360605c0(&pfStack_5c,uStack_4c);
        *puVar9 = pVStack_58;
        puVar9[1] = pfStack_5c;
        puVar9[2] = pfStack_5c;
        puVar9[3] = pVStack_58;
      }
    }
  }
  return;
}

