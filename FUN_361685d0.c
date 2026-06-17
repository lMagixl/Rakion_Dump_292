
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361685d0(int param_1,undefined4 *param_2,int *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  int extraout_ECX;
  int iVar17;
  int *piVar18;
  bool bVar19;
  undefined4 uStack_88;
  undefined *puStack_80;
  int iStack_74;
  undefined4 uStack_70;
  ulong auStack_6c [2];
  int iStack_64;
  long lStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint local_50;
  long lStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_362a4120 != 0) {
    local_50 = 0;
    if (DAT_362fe940 != 0) {
      local_50 = (uint)(*(int *)(DAT_362fe940 + 0xac) != param_3[0x22]);
    }
    local_40 = param_2[0x13];
    local_3c = param_2[0x17];
    local_38 = param_2[0x1b];
    local_30 = param_2[0x14];
    local_2c = param_2[0x18];
    local_28 = param_2[0x1c];
    local_20 = param_2[0x15];
    local_1c = param_2[0x19];
    local_18 = param_2[0x1d];
    local_10 = param_2[0x16];
    local_c = param_2[0x1a];
    local_8 = param_2[0x1e];
    local_34 = 0;
    local_24 = 0;
    local_14 = 0;
    local_4 = 0x3f800000;
    (*DAT_362c4674)(&local_40);
    if (1 < _iStatsMode) {
      iVar12 = *(int *)(*(int *)*param_2 + 0x18);
      iVar7 = FUN_3615a280((undefined4 *)(iVar12 + 0x18));
      if (0 < iVar7) {
        iVar17 = 0;
        do {
          iVar13 = DAT_362bef74;
          iVar8 = FUN_3615a400((undefined4 *)(iVar17 + 0x40 + *(int *)(iVar12 + 0x1c)));
          iVar17 = iVar17 + 0x48;
          iVar7 = iVar7 + -1;
          *(float *)(iVar13 + 0x28c) = (float)iVar8 + *(float *)(iVar13 + 0x28c);
        } while (iVar7 != 0);
      }
    }
    iVar12 = DAT_362bef7c;
    if ((*(uint *)(DAT_362bef7c + 0x88) & *(uint *)(DAT_362bef7c + 0x8c)) == 0xffffffff) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (1 < _iStatsMode) {
        puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar15 = *puVar9;
        uVar1 = puVar9[1];
        uVar16 = uVar15 - *(uint *)(iVar12 + 0x88);
        uVar2 = *(uint *)(iVar12 + 0x90);
        *(uint *)(iVar12 + 0x90) = uVar2 + uVar16;
        *(uint *)(iVar12 + 0x94) =
             *(int *)(iVar12 + 0x94) +
             ((uVar1 - *(int *)(iVar12 + 0x8c)) - (uint)(uVar15 < *(uint *)(iVar12 + 0x88))) +
             (uint)CARRY4(uVar2,uVar16);
        *(undefined4 *)(iVar12 + 0x88) = 0xffffffff;
        *(undefined4 *)(iVar12 + 0x8c) = 0xffffffff;
      }
    }
    iVar12 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar10 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar12 + 0xb0) = *puVar10;
      *(undefined4 *)(iVar12 + 0xb4) = puVar10[1];
    }
    iVar12 = DAT_362bef7c;
    iVar7 = param_2[6] * 0x54 + *(int *)(*(int *)*param_2 + 0x18);
    iVar17 = FUN_3615a280((undefined4 *)(iVar7 + 0x18));
    if (0 < iVar17) {
      iStack_74 = 0;
      iStack_58 = iVar17;
      do {
        iVar12 = DAT_362bef74;
        piVar18 = (int *)(*(int *)(iVar7 + 0x1c) + iStack_74);
        iVar17 = FUN_3615a400(piVar18 + 0x10);
        bVar19 = DAT_362fe1b0 == 2;
        *(float *)(iVar12 + 0x278) = (float)iVar17 + *(float *)(iVar12 + 0x278);
        puStack_80 = (undefined *)piVar18[3];
        if (bVar19) {
          puStack_80 = &DAT_362fe948;
        }
        if (((*(byte *)(piVar18 + 0xd) & 2) == 0) || (DAT_362fe1e0 == 0)) {
          iStack_5c = DAT_362fe1d4;
          lStack_4c = *(long *)(iVar7 + 0x3c);
          lStack_60 = *(long *)(iVar7 + 0x40);
          iStack_64 = DAT_362fe1d0;
        }
        else {
          iStack_64 = DAT_362fe1d8;
          iStack_5c = DAT_362fe1dc;
          lStack_4c = DAT_362a6bc4;
          lStack_60 = DAT_362a6bc8;
        }
        iVar17 = 0;
        iVar12 = DAT_362fe1d0;
        if ((puStack_80 == (undefined *)0x0) ||
           (uVar11 = RM_GetFlags(), iVar12 = extraout_ECX, (uVar11 & 2) == 0)) {
          auStack_6c[0] = 0xcdcdcdff;
          shaSetVertexArray((GFXVertex *)(iVar12 + *piVar18 * 0xc),0,piVar18[1]);
          shaSetNormalArray((GFXNormal *)(DAT_362fe1d4 + *piVar18 * 0xc));
          iVar12 = FUN_3615a400(piVar18 + 0x10);
          shaSetIndices((ushort *)piVar18[0x11],iVar12 * 3);
          shaSetTexture(-1,-1);
          shaSetSurfaceColors(auStack_6c,1);
          shaSetLightColor(DAT_362fe0d8,DAT_362fe0dc);
          shaSetLightDirection((Vector<float,3> *)&DAT_362fe20c);
          shaSetModelColor((ulong *)&DAT_362fe0e0);
          shaDisableBlend();
          shaEnableDepthTest();
          shaEnableDepthWrite();
          shaSetColor(0);
          shaCalculateLight();
          shaRender();
          shaClean();
        }
        else {
          iVar12 = FUN_3600bef0(piVar18 + 4);
          _DAT_362fea68 = 0;
          if (0 < iVar12) {
            _DAT_362fea68 = iVar12;
            iVar13 = FUN_3616e340((undefined4 *)&DAT_362fea60);
            if (iVar13 < iVar12) {
              iVar13 = FUN_3616e340((undefined4 *)&DAT_362fea60);
              FUN_3616ef80(&DAT_362fea60,iVar13 + ((iVar12 + -1) / DAT_362fea6c + 1) * DAT_362fea6c)
              ;
            }
            if (0 < iVar12) {
              do {
                FUN_36162f40();
                iVar17 = iVar17 + 1;
              } while (iVar17 < iVar12);
            }
          }
          iVar12 = 0;
          if (DAT_362fe1ac == 0) {
            iVar12 = FUN_3600bef0(piVar18 + 6);
            iVar17 = 0;
            _DAT_362fea78 = 0;
            if (0 < iVar12) {
              _DAT_362fea78 = iVar12;
              iVar13 = FUN_3616e370((undefined4 *)&DAT_362fea70);
              if (iVar13 < iVar12) {
                iVar13 = FUN_3616e370((undefined4 *)&DAT_362fea70);
                FUN_3616f030(&DAT_362fea70,
                             iVar13 + ((iVar12 + -1) / DAT_362fea7c + 1) * DAT_362fea7c);
              }
              if (0 < iVar12) {
                do {
                  iVar13 = *(int *)(piVar18[7] + iVar17 * 4);
                  iVar8 = FUN_3615a240((undefined4 *)(iVar7 + 0x10));
                  if (iVar13 < iVar8) {
                    DAT_362fea74[iVar17] =
                         (GFXTexCoord *)(*(int *)(DAT_362fea54 + iVar13 * 4) + *piVar18 * 8);
                  }
                  else {
                    DAT_362fea74[iVar17] = (GFXTexCoord *)0x0;
                  }
                  iVar17 = iVar17 + 1;
                } while (iVar17 < iVar12);
              }
            }
          }
          else {
            iVar17 = FUN_3600bef0(piVar18 + 6);
            _DAT_362fea88 = 0;
            if (0 < iVar17) {
              _DAT_362fea88 = iVar17;
              iVar13 = FUN_3600bef0((undefined4 *)&DAT_362fea80);
              if (iVar13 < iVar17) {
                iVar13 = FUN_3600bef0((undefined4 *)&DAT_362fea80);
                FUN_36026aa0(&DAT_362fea80,
                             iVar13 + ((iVar17 + -1) / DAT_362fea8c + 1) * DAT_362fea8c);
              }
              if (0 < iVar17) {
                do {
                  iVar13 = *(int *)(piVar18[7] + iVar12 * 4);
                  iVar8 = FUN_3615a240((undefined4 *)(iVar7 + 0x10));
                  if (iVar13 < iVar8) {
                    DAT_362fea84[iVar12] = *(long *)(iVar13 * 0x10 + 4 + *(int *)(iVar7 + 0x14));
                  }
                  else {
                    DAT_362fea84[iVar12] = -1;
                  }
                  iVar12 = iVar12 + 1;
                } while (iVar12 < iVar17);
              }
            }
          }
          iStack_48 = FUN_3616e1b0(0x362fea60);
          iStack_44 = FUN_360637d0(piVar18 + 8);
          auStack_6c[0] = FUN_3600cba0(piVar18 + 10);
          FUN_3608da20(&DAT_362fe2e8,puStack_80);
          if (((DAT_362fe1ac == 0) || ((int)param_2[3] < 1)) || (bVar19 = true, param_3[0x1d] < 1))
          {
            bVar19 = false;
          }
          if (local_50 == 0) {
            shaDisableInverted();
          }
          else {
            shaEnableInverted();
          }
          iVar12 = *piVar18;
          lVar3 = piVar18[1];
          iVar17 = FUN_3615a400(piVar18 + 0x10);
          if (DAT_362fe1ac == 0) {
            iVar12 = iVar12 * 0xc;
            shaSetVertexArray((GFXVertex *)(iVar12 + iStack_64),0,lVar3);
            shaSetNormalArray((GFXNormal *)(iVar12 + iStack_5c));
            iVar12 = FUN_3616e1d0(0x362fea70);
            if (0 < iVar12) {
              shaSetSurfaceUVMaps(DAT_362fea74,iVar12);
            }
          }
          else {
            shaEnableVertexBuffers();
            shaEnableVertexProgram();
            shaEnablePixelProgram();
            shaSetVertexBufferID(lStack_4c,iVar12,lVar3);
            shaSetNormalBufferID(lStack_60);
            iVar12 = FUN_36026a70(0x362fea80);
            if (0 < iVar12) {
              shaSetSurfaceUVMapsIDs(DAT_362fea84,iVar12);
            }
          }
          shaSetIndices((ushort *)piVar18[0x11],iVar17 * 3);
          shaSetSurfaceFlags(piVar18[0xc]);
          if ((bVar19) && (*(int *)(iVar7 + 0x44) != -1)) {
            shaSetWeightBufferID(*(int *)(iVar7 + 0x44));
            if (DAT_362a6bbc < 1) {
              iVar12 = 1;
            }
            else {
              iVar12 = DAT_362a6bbc;
              if (DAT_362a4134 < DAT_362a6bbc) {
                iVar12 = DAT_362a4134;
              }
            }
            shaSetWeightsPerVertex(iVar12);
            FUN_36166580(param_1);
          }
          shaLockArrays();
          shaSetRenFlags(param_4);
          shaSetObjToAbsMatrix((float *)&DAT_362fe178);
          shaSetObjToViewMatrix((float *)(param_2 + 7));
          shaSetObjToViewStrMatrix((float *)(param_2 + 0x13));
          if (*(int *)(*param_3 + 0x100) == 0) {
            shaSetLightDirection((Vector<float,3> *)&DAT_362fe20c);
            uStack_88 = DAT_362fe0d8;
          }
          else {
            puVar14 = shaGetFlags();
            shaSetSurfaceFlags(*puVar14 | 4);
            FUN_360605c0(&uStack_54,*(uint *)(*param_3 + 0x104));
            FUN_360605c0(&uStack_70,DAT_362fe0d8);
            uVar6 = (uStack_54._2_2_ >> 8) + (ushort)uStack_70._3_1_;
            uVar5 = (undefined1)uVar6;
            if (0xff < uVar6) {
              uVar5 = 0xff;
            }
            uVar15 = (uStack_54 & 0xff) + (uStack_70 & 0xff);
            uStack_88._0_2_ = CONCAT11((char)uVar15,uVar5);
            if (0xff < uVar15) {
              uStack_88._0_2_ = CONCAT11(0xff,uVar5);
            }
            uVar15 = (uStack_54 >> 8 & 0xff) + (uStack_70 >> 8 & 0xff);
            uStack_88._0_3_ = CONCAT12((char)uVar15,(undefined2)uStack_88);
            if (0xff < uVar15) {
              uStack_88._0_3_ = CONCAT12(0xff,(undefined2)uStack_88);
            }
            uVar6 = (uStack_54._2_2_ & 0xff) + (ushort)uStack_70._2_1_;
            uStack_88 = CONCAT13((char)uVar6,(undefined3)uStack_88);
            if (0xff < uVar6) {
              uStack_88 = CONCAT13(0xff,(undefined3)uStack_88);
            }
            shaSetLightDirection((Vector<float,3> *)&DAT_362fe20c);
          }
          shaSetLightColor(uStack_88,DAT_362fe0dc);
          shaSetModelColor((ulong *)(*param_3 + 0xf0));
          if (0 < iStack_48) {
            shaSetSurfaceTextures(DAT_362fea64,iStack_48);
          }
          if (0 < iStack_44) {
            shaSetSurfaceColors((ulong *)piVar18[9],iStack_44);
          }
          if (0 < (int)auStack_6c[0]) {
            shaSetSurfaceFloats((float *)piVar18[0xb],auStack_6c[0]);
          }
          FUN_3608da40();
          shaClean();
          shaUnlockArrays();
          if (DAT_362fe1ac != 0) {
            shaDisableVertexBuffers();
            shaDisableVertexProgram();
            shaDisablePixelProgram();
          }
        }
        iStack_74 = iStack_74 + 0x48;
        iStack_58 = iStack_58 + -1;
      } while (iStack_58 != 0);
      iStack_58 = 0;
      iVar12 = DAT_362bef7c;
    }
    if (1 < _iStatsMode) {
      puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar15 = *puVar9;
      uVar1 = puVar9[1];
      uVar2 = *(uint *)(iVar12 + 0xb8);
      uVar16 = uVar15 - *(uint *)(iVar12 + 0xb0);
      *(uint *)(iVar12 + 0xb8) = uVar2 + uVar16;
      *(uint *)(iVar12 + 0xbc) =
           *(int *)(iVar12 + 0xbc) +
           ((uVar1 - *(int *)(iVar12 + 0xb4)) - (uint)(uVar15 < *(uint *)(iVar12 + 0xb0))) +
           (uint)CARRY4(uVar2,uVar16);
      *(undefined4 *)(iVar12 + 0xb0) = 0xffffffff;
      *(undefined4 *)(iVar12 + 0xb4) = 0xffffffff;
      iVar12 = DAT_362bef7c;
    }
    if ((bVar4) && (1 < _iStatsMode)) {
      puVar10 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar12 + 0x88) = *puVar10;
      *(undefined4 *)(iVar12 + 0x8c) = puVar10[1];
    }
  }
  return;
}

