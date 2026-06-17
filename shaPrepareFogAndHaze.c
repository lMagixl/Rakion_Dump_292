
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaPrepareFogAndHaze(int) */

void __cdecl shaPrepareFogAndHaze(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_58;
  float local_54;
  uint local_50;
  long local_4c;
  int local_48;
  long local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  ShaderRegister local_10 [16];
  
                    /* 0x8fdf0  4362  ?shaPrepareFogAndHaze@@YAXH@Z */
  iVar5 = shaUseHWShaders();
  local_48 = iVar5;
  if ((DAT_362c9844 & 2) != 0) {
    FUN_360605c0(&local_58,DAT_362c3b08);
    if (iVar5 == 0) {
      lVar6 = shaGetVertexCount();
      _DAT_362c9a00 = 0;
      _DAT_362c99f0 = 0;
      _DAT_362c9a10 = 0;
      local_4c = lVar6;
      FUN_360627d0(&DAT_362c99f8,lVar6);
      FUN_36062630(&DAT_362c99e8,lVar6);
      FUN_36091ac0(&DAT_362c9a08,lVar6);
      if (param_1 == 0) {
        iVar8 = 0;
        if (0 < lVar6) {
          pfVar7 = (float *)(DAT_362c980c + 4);
          do {
            iVar5 = DAT_362c99fc;
            *(undefined4 *)(DAT_362c99fc + 4 + iVar8 * 8) = 0;
            fVar2 = (DAT_362c999c * *pfVar7 + DAT_362c9998 * pfVar7[-1] + DAT_362c99a0 * pfVar7[1] +
                    DAT_362c9770) * DAT_362c3b58;
            *(float *)(iVar5 + iVar8 * 8) = fVar2;
            local_54 = fVar2 * (float)DAT_362c3b4c * _DAT_36228814 - _DAT_3622880c;
            local_50 = (uint)ROUND(local_54);
            iVar5 = (int)local_50 >> 8;
            iVar9 = DAT_362c3b4c + -1;
            if (iVar5 < 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = iVar9;
              if (iVar5 <= iVar9) {
                iVar10 = iVar5;
              }
            }
            iVar5 = iVar5 + 1;
            iVar11 = 0;
            if ((-1 < iVar5) && (iVar11 = iVar5, iVar9 < iVar5)) {
              iVar11 = iVar9;
            }
            *(byte *)(DAT_362c9a0c + iVar8) =
                 ~(byte)(((uint)*(byte *)(iVar10 + DAT_362c3b54) * (local_50 & 0xff ^ 0xff) +
                         (uint)*(byte *)(DAT_362c3b54 + iVar11) * (local_50 & 0xff)) * DAT_362c3b60
                        >> 0x10);
            *(uint *)(DAT_362c99ec + iVar8 * 4) = local_58;
            iVar8 = iVar8 + 1;
            pfVar7 = pfVar7 + 3;
            iVar5 = local_48;
          } while (iVar8 < local_4c);
        }
      }
      else {
        iVar8 = 0;
        if (0 < lVar6) {
          pfVar7 = (float *)(DAT_362c980c + 4);
          do {
            iVar10 = DAT_362c99fc;
            *(undefined4 *)(DAT_362c99fc + 4 + iVar8 * 8) = 0;
            iVar9 = iVar8 * 8;
            iVar8 = iVar8 + 1;
            *(float *)(iVar10 + iVar9) =
                 (DAT_362c999c * *pfVar7 + DAT_362c9998 * pfVar7[-1] + DAT_362c99a0 * pfVar7[1] +
                 DAT_362c9770) * DAT_362c3b58;
            *(uint *)(DAT_362c99ec + -4 + iVar8 * 4) = local_58;
            pfVar7 = pfVar7 + 3;
          } while (iVar8 < lVar6);
        }
      }
    }
    else {
      local_20 = DAT_362c9770;
      local_40 = DAT_362c9998;
      local_18 = DAT_362c3b58;
      local_3c = DAT_362c999c;
      local_1c = 0.0;
      local_14 = 0;
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 0.0;
      local_24 = 0;
      local_38 = DAT_362c99a0;
      local_34 = 0.0;
      FUN_3608d9a0(local_10,local_58);
      shaSetTextureUnit(DAT_362a4374);
      shaSetTextureWrapping(0x52,0x52,-1);
      FUN_3607b9d0((undefined4 *)&DAT_362c3b64,(int *)&DAT_362c3bec);
      shaSetVertexProgramConst(0x12,(ShaderRegister *)&local_40,1);
      shaSetVertexProgramConst(0x13,(ShaderRegister *)&local_30,1);
      shaSetVertexProgramConst(0x14,(ShaderRegister *)&local_20,1);
      shaSetPixelProgramConst(7,local_10,1);
    }
  }
  if ((DAT_362c9844 & 1) != 0) {
    FUN_360605c0(&local_58,DAT_362c3b94);
    if (iVar5 != 0) {
      local_3c = DAT_362c9774;
      local_40 = DAT_362c9778;
      local_20 = DAT_362c99b0;
      local_38 = DAT_362c3b1c;
      local_34 = DAT_362c3b20;
      local_30 = DAT_362c99bc;
      local_1c = DAT_362c99b4;
      local_18 = DAT_362c99b8;
      local_14 = 0;
      local_2c = DAT_362c99c0;
      local_28 = DAT_362c99c4;
      local_24 = 0;
      FUN_3608d9a0(local_10,local_58);
      shaSetTextureUnit(DAT_362a4374);
      shaSetTextureWrapping(0x52,0x52,-1);
      FUN_3607b9d0((undefined4 *)&DAT_362c3b2c,(int *)&DAT_362c3ba8);
      shaSetVertexProgramConst(0x12,(ShaderRegister *)&local_20,1);
      shaSetVertexProgramConst(0x13,(ShaderRegister *)&local_30,1);
      shaSetVertexProgramConst(0x14,(ShaderRegister *)&local_40,1);
      shaSetPixelProgramConst(7,local_10,1);
      return;
    }
    lVar6 = shaGetVertexCount();
    _DAT_362c99e0 = 0;
    _DAT_362c99d0 = 0;
    _DAT_362c9a20 = 0;
    local_44 = lVar6;
    FUN_360627d0(&DAT_362c99d8,lVar6);
    FUN_36062630(&DAT_362c99c8,lVar6);
    FUN_36091ac0(&DAT_362c9a18,lVar6);
    iVar5 = DAT_362c980c;
    iVar8 = 0;
    if (param_1 == 0) {
      if (0 < lVar6) {
        pfVar7 = (float *)(DAT_362c980c + 4);
        do {
          fVar2 = DAT_362c99c4 * pfVar7[1];
          pfVar1 = (float *)(DAT_362c99dc + iVar8 * 8);
          fVar4 = DAT_362c99c0 * *pfVar7;
          fVar3 = DAT_362c99bc * pfVar7[-1];
          *pfVar1 = (DAT_362c99b4 * *pfVar7 + DAT_362c99b8 * pfVar7[1] + DAT_362c99b0 * pfVar7[-1] +
                    DAT_362c9778) * DAT_362c3b1c;
          fVar2 = (fVar3 + fVar4 + fVar2 + DAT_362c9774) * DAT_362c3b20;
          pfVar1[1] = fVar2;
          iVar5 = (int)ROUND((float)DAT_362c3b34 * fVar2);
          if (iVar5 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = DAT_362c3b34 + -1;
            if (iVar5 <= DAT_362c3b34 + -1) {
              iVar9 = iVar5;
            }
          }
          uVar12 = (uint)ROUND((float)DAT_362c3b38 * *pfVar1 * _DAT_36228810 - _DAT_3622880c);
          iVar5 = (int)uVar12 >> 8;
          local_54 = (float)(DAT_362c3b38 + -1);
          if (iVar5 < 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (int)local_54;
            if (iVar5 <= (int)local_54) {
              iVar10 = iVar5;
            }
          }
          iVar5 = iVar5 + 1;
          if (iVar5 < 0) {
            local_54 = 0.0;
          }
          else if (iVar5 <= (int)local_54) {
            local_54 = (float)iVar5;
          }
          uVar12 = uVar12 & 0xff;
          *(byte *)(DAT_362c9a1c + iVar8) =
               ~(byte)(((uint)*(byte *)(iVar10 + iVar9 * DAT_362c3b38 + DAT_362c3b44) *
                        (uVar12 ^ 0xff) +
                       *(byte *)((int)local_54 + iVar9 * DAT_362c3b38 + DAT_362c3b44) * uVar12) *
                       DAT_362c3b28 >> 0x10);
          *(uint *)(DAT_362c99cc + iVar8 * 4) = local_58;
          iVar8 = iVar8 + 1;
          pfVar7 = pfVar7 + 3;
        } while (iVar8 < local_44);
      }
    }
    else {
      if (3 < lVar6) {
        pfVar7 = (float *)(DAT_362c980c + 0x10);
        do {
          fVar2 = DAT_362c99c4 * pfVar7[-2];
          pfVar1 = (float *)(DAT_362c99dc + iVar8 * 8);
          fVar4 = DAT_362c99c0 * pfVar7[-3];
          fVar3 = DAT_362c99bc * pfVar7[-4];
          *pfVar1 = (DAT_362c99b4 * pfVar7[-3] +
                     DAT_362c99b8 * pfVar7[-2] + DAT_362c99b0 * pfVar7[-4] + DAT_362c9778) *
                    DAT_362c3b1c;
          pfVar1[1] = (fVar3 + fVar4 + fVar2 + DAT_362c9774) * DAT_362c3b20;
          *(uint *)(DAT_362c99cc + iVar8 * 4) = local_58;
          fVar2 = DAT_362c99c4 * pfVar7[1];
          pfVar1 = (float *)(DAT_362c99dc + 8 + iVar8 * 8);
          fVar4 = DAT_362c99c0 * *pfVar7;
          fVar3 = DAT_362c99bc * pfVar7[-1];
          *pfVar1 = (DAT_362c99b4 * *pfVar7 + DAT_362c99b8 * pfVar7[1] + DAT_362c99b0 * pfVar7[-1] +
                    DAT_362c9778) * DAT_362c3b1c;
          pfVar1[1] = (fVar3 + fVar4 + fVar2 + DAT_362c9774) * DAT_362c3b20;
          *(uint *)(DAT_362c99cc + 4 + iVar8 * 4) = local_58;
          fVar2 = DAT_362c99c4 * pfVar7[4];
          pfVar1 = (float *)(DAT_362c99dc + 0x10 + iVar8 * 8);
          fVar4 = DAT_362c99c0 * pfVar7[3];
          fVar3 = DAT_362c99bc * pfVar7[2];
          *pfVar1 = (DAT_362c99b4 * pfVar7[3] + DAT_362c99b8 * pfVar7[4] + DAT_362c99b0 * pfVar7[2]
                    + DAT_362c9778) * DAT_362c3b1c;
          pfVar1[1] = (fVar3 + fVar4 + fVar2 + DAT_362c9774) * DAT_362c3b20;
          *(uint *)(DAT_362c99cc + 8 + iVar8 * 4) = local_58;
          fVar2 = DAT_362c99c4 * pfVar7[7];
          pfVar1 = (float *)(DAT_362c99dc + 0x18 + iVar8 * 8);
          fVar4 = DAT_362c99c0 * pfVar7[6];
          iVar8 = iVar8 + 4;
          fVar3 = DAT_362c99bc * pfVar7[5];
          *pfVar1 = (DAT_362c99b4 * pfVar7[6] + DAT_362c99b8 * pfVar7[7] + DAT_362c99b0 * pfVar7[5]
                    + DAT_362c9778) * DAT_362c3b1c;
          pfVar1[1] = (fVar3 + fVar4 + fVar2 + DAT_362c9774) * DAT_362c3b20;
          *(uint *)(DAT_362c99cc + -4 + iVar8 * 4) = local_58;
          pfVar7 = pfVar7 + 0xc;
        } while (iVar8 < lVar6 + -3);
      }
      if (iVar8 < lVar6) {
        pfVar7 = (float *)(iVar5 + 4 + iVar8 * 0xc);
        do {
          fVar2 = DAT_362c99c4 * pfVar7[1];
          pfVar1 = (float *)(DAT_362c99dc + iVar8 * 8);
          iVar8 = iVar8 + 1;
          fVar4 = DAT_362c99c0 * *pfVar7;
          fVar3 = DAT_362c99bc * pfVar7[-1];
          *pfVar1 = (DAT_362c99b0 * pfVar7[-1] + DAT_362c99b4 * *pfVar7 + DAT_362c99b8 * pfVar7[1] +
                    DAT_362c9778) * DAT_362c3b1c;
          pfVar1[1] = (fVar3 + fVar4 + fVar2 + DAT_362c9774) * DAT_362c3b20;
          *(uint *)(DAT_362c99cc + -4 + iVar8 * 4) = local_58;
          pfVar7 = pfVar7 + 3;
        } while (iVar8 < lVar6);
        return;
      }
    }
  }
  return;
}

