
byte __cdecl FUN_3614b210(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = 0;
LAB_3614b220:
  do {
    uVar11 = param_1[0x1b];
    if (uVar11 < 0x106) {
      FUN_3614ac90(param_1);
      uVar11 = param_1[0x1b];
      if ((uVar11 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar11 == 0) {
        if (param_1[0x18] != 0) {
          bVar10 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
          *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
          *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar10;
          param_1[0x5a6] = param_1[0x5a6] + 1;
          *(short *)(param_1 + bVar10 + 0x23) = (short)param_1[bVar10 + 0x23] + 1;
          param_1[0x18] = 0;
        }
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_36151e50((int)param_1,puVar9,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_3614a230();
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (param_2 == 4) * '\x02' + 1;
        }
        return (param_2 != 4) - 1U & 2;
      }
    }
    if (2 < uVar11) {
      uVar12 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar12;
      *(undefined2 *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) =
           *(undefined2 *)(param_1[0xf] + uVar12 * 2);
      uVar12 = (uint)*(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2);
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    uVar11 = param_1[0x16];
    param_1[0x1c] = uVar11;
    param_1[0x17] = param_1[0x1a];
    param_1[0x16] = 2;
    if (((uVar12 != 0) && (uVar11 < (uint)param_1[0x1e])) &&
       (param_1[0x19] - uVar12 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] < 2) {
        pcVar8 = FUN_3614aa60();
LAB_3614b2fa:
        param_1[0x16] = (int)pcVar8;
      }
      else if ((param_1[0x20] == 3) && (param_1[0x19] - uVar12 == 1)) {
        pcVar8 = (char *)FUN_3614abd0(uVar12);
        goto LAB_3614b2fa;
      }
      if (((uint)param_1[0x16] < 6) &&
         ((param_1[0x20] == 1 ||
          ((param_1[0x16] == 3 && (0x1000 < (uint)(param_1[0x19] - param_1[0x1a]))))))) {
        param_1[0x16] = 2;
      }
    }
    if (((uint)param_1[0x1c] < 3) || ((uint)param_1[0x1c] < (uint)param_1[0x16])) {
      if (param_1[0x18] == 0) {
        param_1[0x18] = 1;
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
        goto LAB_3614b220;
      }
      bVar10 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar10;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + bVar10 + 0x23) = (short)param_1[bVar10 + 0x23] + 1;
      if (param_1[0x5a6] == param_1[0x5a5] + -1) {
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_36151e50((int)param_1,puVar9,param_1[0x19] - iVar2,0);
        param_1[0x15] = param_1[0x19];
        FUN_3614a230();
      }
      param_1[0x19] = param_1[0x19] + 1;
      param_1[0x1b] = param_1[0x1b] + -1;
    }
    else {
      iVar2 = param_1[0x1b];
      iVar3 = param_1[0x19];
      sVar6 = (short)param_1[0x19] - (short)param_1[0x17];
      bVar10 = (char)param_1[0x1c] - 3;
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar6 + -1;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar10;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      uVar7 = sVar6 - 2;
      *(short *)(param_1 + (byte)(&DAT_3623c778)[bVar10] + 0x124) =
           (short)param_1[(byte)(&DAT_3623c778)[bVar10] + 0x124] + 1;
      if (uVar7 < 0x100) {
        bVar10 = (&DAT_3623c578)[uVar7];
      }
      else {
        bVar10 = (&DAT_3623c678)[uVar7 >> 7];
      }
      *(short *)(param_1 + bVar10 + 0x260) = (short)param_1[bVar10 + 0x260] + 1;
      iVar4 = param_1[0x5a5];
      iVar5 = param_1[0x5a6];
      param_1[0x1b] = param_1[0x1b] + (1 - param_1[0x1c]);
      param_1[0x1c] = param_1[0x1c] + -2;
      do {
        uVar11 = param_1[0x19] + 1;
        param_1[0x19] = uVar11;
        if (uVar11 <= (uint)(iVar3 + -3 + iVar2)) {
          uVar12 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
                   (uint)*(byte *)(param_1[0xc] + 2 + uVar11)) & param_1[0x13];
          param_1[0x10] = uVar12;
          *(undefined2 *)(param_1[0xe] + (param_1[0xb] & uVar11) * 2) =
               *(undefined2 *)(param_1[0xf] + uVar12 * 2);
          uVar12 = (uint)*(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2);
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
        }
        piVar1 = param_1 + 0x1c;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      iVar2 = param_1[0x19];
      param_1[0x18] = 0;
      param_1[0x16] = 2;
      param_1[0x19] = iVar2 + 1;
      if (iVar5 != iVar4 + -1) goto LAB_3614b220;
      iVar3 = param_1[0x15];
      if (iVar3 < 0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = (undefined1 *)(param_1[0xc] + iVar3);
      }
      FUN_36151e50((int)param_1,puVar9,(iVar2 + 1) - iVar3,0);
      param_1[0x15] = param_1[0x19];
      FUN_3614a230();
    }
    if (*(int *)(*param_1 + 0x10) == 0) {
      return 0;
    }
  } while( true );
}

