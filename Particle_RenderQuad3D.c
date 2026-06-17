
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_RenderQuad3D(class Vector<float,3> const &,class Vector<float,3> const
   &,class Vector<float,3> const &,class Vector<float,3> const &,unsigned long) */

void __cdecl
Particle_RenderQuad3D
          (Vector<float,3> *param_1,Vector<float,3> *param_2,Vector<float,3> *param_3,
          Vector<float,3> *param_4,ulong param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  Vector<float,3> *pVVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 unaff_EBP;
  Vector<float,3> *pVVar14;
  undefined4 uStack_90;
  float *pfStack_8c;
  ulong uStack_88;
  float *pfStack_84;
  ulong uStack_80;
  float *pfStack_7c;
  Vector<float,3> *pVStack_78;
  undefined1 *puStack_74;
  undefined1 uStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 auStack_14 [2];
  undefined1 local_c [4];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x6cfe0  2754  ?Particle_RenderQuad3D@@YAXABV?$Vector@M$02@@000K@Z */
  if (1 < (param_5 & 0xff)) {
    puStack_74 = local_c;
    pVStack_78 = param_1;
    pfStack_7c = (float *)0x3606d010;
    (**(code **)(*DAT_362bf9c4 + 0x18))();
    pfStack_7c = &fStack_38;
    pfStack_84 = (float *)0x3606d025;
    (**(code **)(*DAT_362bf9c4 + 0x18))();
    pfStack_84 = &fStack_34;
    uStack_88 = uStack_4;
    pfStack_8c = (float *)0x3606d03d;
    (**(code **)(*DAT_362bf9c4 + 0x18))();
    pfStack_8c = &fStack_30;
    uStack_90 = uStack_8;
    (**(code **)(*DAT_362bf9c4 + 0x18))();
    fStack_54 = fStack_24;
    fStack_5c = fStack_2c;
    fStack_58 = fStack_28;
    if (fStack_48 < fStack_24) {
      fStack_5c = fStack_50;
      fStack_58 = fStack_4c;
      fStack_54 = fStack_48;
    }
    if (fStack_3c < fStack_54) {
      fStack_5c = fStack_44;
      fStack_58 = fStack_40;
      fStack_54 = fStack_3c;
    }
    if (fStack_30 < fStack_54) {
      fStack_5c = fStack_38;
      fStack_58 = fStack_34;
      fStack_54 = fStack_30;
    }
    fVar1 = (fStack_38 + fStack_44 + fStack_50 + fStack_2c) * _DAT_362253ec;
    puStack_74 = (undefined1 *)((fStack_34 + fStack_40 + fStack_4c + fStack_28) * _DAT_362253ec);
    fVar2 = ABS(fVar1 - fStack_5c);
    if (fVar2 < ABS((float)puStack_74 - fStack_58)) {
      fVar2 = ABS((float)puStack_74 - fStack_58);
    }
    fStack_5c = fVar1;
    fStack_58 = (float)puStack_74;
    iVar3 = (**(code **)(*DAT_362bf9c4 + 0x28))(&fStack_5c,fVar2 * _DAT_3622881c);
    if (-1 < iVar3) {
      pfStack_7c = (float *)param_5;
      uStack_80 = param_5;
      pfStack_84 = (float *)param_5;
      uStack_88 = param_5;
      DAT_362bf9e4 = DAT_362bf9e4 | iVar3 == 0;
      iVar3 = FUN_3606db20(0x362bf9f0);
      pfVar7 = (float *)(DAT_362bf9f4 + -0x20 + iVar3 * 8);
      if (DAT_362bf9d8 != 0) {
        *pfVar7 = (_DAT_362c3b5c - fStack_2c) * DAT_362c3b58;
        pfVar7[2] = (_DAT_362c3b5c - fStack_50) * DAT_362c3b58;
        pfVar7[4] = (_DAT_362c3b5c - fStack_44) * DAT_362c3b58;
        pfVar7[6] = (_DAT_362c3b5c - fStack_38) * DAT_362c3b58;
        uVar4 = (uint)ROUND((float)DAT_362c3b4c * *pfVar7 * _DAT_36228814 - _DAT_3622880c);
        iVar10 = (int)uVar4 >> 8;
        iVar3 = DAT_362c3b4c + -1;
        if (iVar10 < 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = iVar3;
          if (iVar10 <= iVar3) {
            iVar12 = iVar10;
          }
        }
        iVar10 = iVar10 + 1;
        if (iVar10 < 0) {
          iVar3 = 0;
        }
        else if (iVar10 <= iVar3) {
          iVar3 = iVar10;
        }
        uVar4 = uVar4 & 0xff;
        uVar5 = 0xff - (((uint)*(byte *)(iVar12 + DAT_362c3b54) * (uVar4 ^ 0xff) +
                        *(byte *)(iVar3 + DAT_362c3b54) * uVar4) * DAT_362c3b60 >> 0x10);
        uVar4 = (uint)ROUND((float)DAT_362c3b4c * pfVar7[2] * _DAT_36228814 - _DAT_3622880c);
        iVar10 = (int)uVar4 >> 8;
        iVar3 = DAT_362c3b4c + -1;
        if (iVar10 < 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = iVar3;
          if (iVar10 <= iVar3) {
            iVar12 = iVar10;
          }
        }
        iVar10 = iVar10 + 1;
        if (iVar10 < 0) {
          iVar3 = 0;
        }
        else if (iVar10 <= iVar3) {
          iVar3 = iVar10;
        }
        uVar4 = uVar4 & 0xff;
        puStack_74 = (undefined1 *)
                     (0xff - (((uint)*(byte *)(iVar12 + DAT_362c3b54) * (uVar4 ^ 0xff) +
                              *(byte *)(iVar3 + DAT_362c3b54) * uVar4) * DAT_362c3b60 >> 0x10));
        uVar4 = (uint)ROUND((float)DAT_362c3b4c * pfVar7[4] * _DAT_36228814 - _DAT_3622880c);
        iVar10 = (int)uVar4 >> 8;
        iVar3 = DAT_362c3b4c + -1;
        if (iVar10 < 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = iVar3;
          if (iVar10 <= iVar3) {
            iVar12 = iVar10;
          }
        }
        iVar10 = iVar10 + 1;
        if (iVar10 < 0) {
          iVar3 = 0;
        }
        else if (iVar10 <= iVar3) {
          iVar3 = iVar10;
        }
        uVar4 = uVar4 & 0xff;
        uVar11 = 0xff - (((uint)*(byte *)(iVar12 + DAT_362c3b54) * (uVar4 ^ 0xff) +
                         *(byte *)(iVar3 + DAT_362c3b54) * uVar4) * DAT_362c3b60 >> 0x10);
        uVar4 = (uint)ROUND((float)DAT_362c3b4c * pfVar7[6] * _DAT_36228814 - _DAT_3622880c);
        pVVar6 = (Vector<float,3> *)((int)uVar4 >> 8);
        pVStack_78 = (Vector<float,3> *)(DAT_362c3b4c - 1);
        if ((int)pVVar6 < 0) {
          pVVar14 = (Vector<float,3> *)0x0;
        }
        else {
          pVVar14 = pVStack_78;
          if ((int)pVVar6 <= (int)pVStack_78) {
            pVVar14 = pVVar6;
          }
        }
        pVVar6 = pVVar6 + 1;
        if ((int)pVVar6 < 0) {
          pVStack_78 = (Vector<float,3> *)0x0;
        }
        else if ((int)pVVar6 <= (int)pVStack_78) {
          pVStack_78 = pVVar6;
        }
        uVar4 = uVar4 & 0xff;
        uVar4 = 0xff - (((uint)(byte)pVVar14[DAT_362c3b54] * (uVar4 ^ 0xff) +
                        (byte)pVStack_78[DAT_362c3b54] * uVar4) * DAT_362c3b60 >> 0x10);
        if ((uVar4 | uVar11 | (uint)puStack_74 | uVar5) < 4) {
          return;
        }
        if (DAT_362bf988 == 0) {
          pfVar7[7] = 0.0;
          pfVar7[5] = 0.0;
          pfVar7[3] = 0.0;
          pfVar7[1] = 0.0;
        }
        else {
          uVar5 = uVar5 & 0xff;
          uStack_88 = MulColors(param_5,((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | uVar5 |
                                        DAT_362bf988);
          pfStack_84 = (float *)MulColors(param_5,CONCAT31(CONCAT21(CONCAT11(puStack_74._0_1_,
                                                                             puStack_74._0_1_),
                                                                    puStack_74._0_1_),
                                                           puStack_74._0_1_) | DAT_362bf988);
          uStack_68 = (undefined1)uVar11;
          uStack_80 = MulColors(param_5,CONCAT31(CONCAT21(CONCAT11(uStack_68,uStack_68),uStack_68),
                                                 uStack_68) | DAT_362bf988);
          uVar4 = uVar4 & 0xff;
          pfStack_7c = (float *)MulColors(param_5,((uVar4 << 8 | uVar4) << 8 | uVar4) << 8 | uVar4 |
                                                  DAT_362bf988);
        }
      }
      if (DAT_362bf9d4 != 0) {
        *pfVar7 = -(fStack_2c * DAT_362c3b1c);
        pfVar7[1] = (_DAT_362c3be0 * fStack_34 +
                     _DAT_362c3be4 * fStack_30 + _DAT_362c3be8 * fStack_2c + _DAT_362c3b24) *
                    DAT_362c3b20;
        pfVar7[2] = -(fStack_50 * DAT_362c3b1c);
        pfVar7[3] = (_DAT_362c3be8 * fStack_50 +
                     _DAT_362c3be0 * fStack_58 + _DAT_362c3be4 * fStack_54 + _DAT_362c3b24) *
                    DAT_362c3b20;
        pfVar7[4] = -(fStack_44 * DAT_362c3b1c);
        pfVar7[5] = (_DAT_362c3be8 * fStack_44 +
                     _DAT_362c3be0 * fStack_4c + _DAT_362c3be4 * fStack_48 + _DAT_362c3b24) *
                    DAT_362c3b20;
        pfVar7[6] = -(fStack_38 * DAT_362c3b1c);
        pfVar7[7] = (_DAT_362c3be8 * fStack_38 +
                     _DAT_362c3be0 * fStack_40 + _DAT_362c3be4 * fStack_3c + _DAT_362c3b24) *
                    DAT_362c3b20;
        iVar3 = (int)ROUND((float)DAT_362c3b34 * pfVar7[1]);
        if (iVar3 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = DAT_362c3b34 + -1;
          if (iVar3 <= DAT_362c3b34 + -1) {
            iVar10 = iVar3;
          }
        }
        uVar4 = (uint)ROUND((float)DAT_362c3b38 * *pfVar7 * _DAT_36228810 - _DAT_3622880c);
        iVar12 = (int)uVar4 >> 8;
        iVar3 = DAT_362c3b38 + -1;
        if (iVar12 < 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar3;
          if (iVar12 <= iVar3) {
            iVar13 = iVar12;
          }
        }
        iVar12 = iVar12 + 1;
        if (iVar12 < 0) {
          iVar3 = 0;
        }
        else if (iVar12 <= iVar3) {
          iVar3 = iVar12;
        }
        uVar4 = uVar4 & 0xff;
        uVar4 = 0xff - (((uint)*(byte *)(iVar13 + iVar10 * DAT_362c3b38 + DAT_362c3b44) *
                         (uVar4 ^ 0xff) +
                        *(byte *)(iVar3 + iVar10 * DAT_362c3b38 + DAT_362c3b44) * uVar4) *
                        DAT_362c3b28 >> 0x10);
        iVar3 = (int)ROUND((float)DAT_362c3b34 * pfVar7[3]);
        if (iVar3 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = DAT_362c3b34 + -1;
          if (iVar3 <= DAT_362c3b34 + -1) {
            iVar10 = iVar3;
          }
        }
        uVar5 = (uint)ROUND((float)DAT_362c3b38 * pfVar7[2] * _DAT_36228810 - _DAT_3622880c);
        iVar12 = (int)uVar5 >> 8;
        iVar3 = DAT_362c3b38 + -1;
        if (iVar12 < 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar3;
          if (iVar12 <= iVar3) {
            iVar13 = iVar12;
          }
        }
        iVar12 = iVar12 + 1;
        if (iVar12 < 0) {
          iVar3 = 0;
        }
        else if (iVar12 <= iVar3) {
          iVar3 = iVar12;
        }
        uVar5 = uVar5 & 0xff;
        puStack_74 = (undefined1 *)
                     (0xff - (((uint)*(byte *)(iVar13 + iVar10 * DAT_362c3b38 + DAT_362c3b44) *
                               (uVar5 ^ 0xff) +
                              *(byte *)(iVar3 + iVar10 * DAT_362c3b38 + DAT_362c3b44) * uVar5) *
                              DAT_362c3b28 >> 0x10));
        iVar3 = (int)ROUND((float)DAT_362c3b34 * pfVar7[5]);
        if (iVar3 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = DAT_362c3b34 + -1;
          if (iVar3 <= DAT_362c3b34 + -1) {
            iVar10 = iVar3;
          }
        }
        uVar5 = (uint)ROUND((float)DAT_362c3b38 * pfVar7[4] * _DAT_36228810 - _DAT_3622880c);
        iVar12 = (int)uVar5 >> 8;
        iVar3 = DAT_362c3b38 + -1;
        if (iVar12 < 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar3;
          if (iVar12 <= iVar3) {
            iVar13 = iVar12;
          }
        }
        iVar12 = iVar12 + 1;
        if (iVar12 < 0) {
          iVar3 = 0;
        }
        else if (iVar12 <= iVar3) {
          iVar3 = iVar12;
        }
        uVar5 = uVar5 & 0xff;
        pVStack_78 = (Vector<float,3> *)
                     (0xff - (((uint)*(byte *)(iVar13 + iVar10 * DAT_362c3b38 + DAT_362c3b44) *
                               (uVar5 ^ 0xff) +
                              *(byte *)(iVar3 + iVar10 * DAT_362c3b38 + DAT_362c3b44) * uVar5) *
                              DAT_362c3b28 >> 0x10));
        iVar3 = (int)ROUND((float)DAT_362c3b34 * pfVar7[7]);
        if (iVar3 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = DAT_362c3b34 + -1;
          if (iVar3 <= DAT_362c3b34 + -1) {
            iVar10 = iVar3;
          }
        }
        uVar5 = (uint)ROUND((float)DAT_362c3b38 * pfVar7[6] * _DAT_36228810 - _DAT_3622880c);
        iVar12 = (int)uVar5 >> 8;
        iVar3 = DAT_362c3b38 + -1;
        if (iVar12 < 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar3;
          if (iVar12 <= iVar3) {
            iVar13 = iVar12;
          }
        }
        iVar12 = iVar12 + 1;
        if (iVar12 < 0) {
          iVar3 = 0;
        }
        else if (iVar12 <= iVar3) {
          iVar3 = iVar12;
        }
        uVar5 = uVar5 & 0xff;
        uVar5 = 0xff - (((uint)*(byte *)(iVar13 + iVar10 * DAT_362c3b38 + DAT_362c3b44) *
                         (uVar5 ^ 0xff) +
                        *(byte *)(iVar3 + iVar10 * DAT_362c3b38 + DAT_362c3b44) * uVar5) *
                        DAT_362c3b28 >> 0x10);
        if ((uVar5 | (uint)pVStack_78 | (uint)puStack_74 | uVar4) < 4) {
          return;
        }
        if (DAT_362bf988 != 0) {
          uVar4 = uVar4 & 0xff;
          uStack_88 = MulColors(uStack_88,
                                ((uVar4 << 8 | uVar4) << 8 | uVar4) << 8 | uVar4 | DAT_362bf988);
          pfStack_84 = (float *)MulColors((ulong)pfStack_84,
                                          CONCAT31(CONCAT21(CONCAT11(puStack_74._0_1_,
                                                                     puStack_74._0_1_),
                                                            puStack_74._0_1_),puStack_74._0_1_) |
                                          DAT_362bf988);
          uStack_80 = MulColors(uStack_80,
                                CONCAT31(CONCAT21(CONCAT11(pVStack_78._0_1_,pVStack_78._0_1_),
                                                  pVStack_78._0_1_),pVStack_78._0_1_) | DAT_362bf988
                               );
          uVar5 = uVar5 & 0xff;
          pfStack_7c = (float *)MulColors((ulong)pfStack_7c,
                                          ((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | uVar5 |
                                          DAT_362bf988);
        }
      }
      if (DAT_362bf9e0 != 0) {
        FUN_360627d0(&DAT_362bf9f0,4);
      }
      pfVar7 = (float *)FUN_36062560(&DAT_362c54d8,4);
      puVar8 = (undefined4 *)FUN_360627d0(&DAT_362c5508,4);
      puVar9 = (undefined4 *)FUN_36062630(&DAT_362c54f8,4);
      *pfVar7 = fStack_34;
      pfVar7[1] = fStack_30;
      pfVar7[2] = fStack_2c;
      pfVar7[3] = fStack_58;
      pfVar7[4] = fStack_54;
      pfVar7[5] = fStack_50;
      pfVar7[6] = fStack_4c;
      pfVar7[7] = fStack_48;
      pfVar7[8] = fStack_44;
      pfVar7[9] = fStack_40;
      pfVar7[10] = fStack_3c;
      pfVar7[0xb] = fStack_38;
      *puVar8 = DAT_362bf98c;
      puVar8[1] = DAT_362bf990;
      puVar8[2] = DAT_362bf994;
      puVar8[3] = DAT_362bf998;
      puVar8[4] = DAT_362bf99c;
      puVar8[5] = DAT_362bf9a0;
      puVar8[6] = DAT_362bf9a4;
      puVar8[7] = DAT_362bf9a8;
      FUN_360605c0(auStack_14,uStack_88);
      FUN_360605c0(&stack0xffffff6c,(uint)pfStack_84);
      FUN_360605c0(&uStack_90,uStack_80);
      FUN_360605c0(&pfStack_8c,(uint)pfStack_7c);
      *puVar9 = auStack_14[0];
      puVar9[1] = unaff_EBP;
      puVar9[2] = uStack_90;
      puVar9[3] = pfStack_8c;
    }
  }
  return;
}

