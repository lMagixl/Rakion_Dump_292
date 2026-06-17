
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl
FUN_3614f980(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  int local_6c;
  ushort *local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  ushort *local_54;
  ushort *local_50;
  undefined4 local_44;
  ushort local_40 [30];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar4 = 0;
  local_44 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  if (param_3 != 0) {
    do {
      psVar1 = (short *)((int)&local_44 + (uint)*(ushort *)(param_2 + uVar4 * 2) * 2);
      *psVar1 = *psVar1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  uVar4 = 0xf;
  do {
    if (*(short *)((int)&local_44 + uVar4 * 2) != 0) break;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  local_78 = *param_5;
  if (uVar4 < *param_5) {
    local_78 = uVar4;
  }
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  local_74 = 1;
  do {
    if (*(short *)((int)&local_44 + local_74 * 2) != 0) break;
    if (*(short *)((int)&local_44 + local_74 * 2 + 2) != 0) {
      local_74 = local_74 + 1;
      break;
    }
    if (local_40[local_74] != 0) {
      local_74 = local_74 + 2;
      break;
    }
    if (local_40[local_74 + 1] != 0) {
      local_74 = local_74 + 3;
      break;
    }
    if (local_40[local_74 + 2] != 0) {
      local_74 = local_74 + 4;
      break;
    }
    local_74 = local_74 + 5;
  } while (local_74 < 0x10);
  if (local_78 < local_74) {
    local_78 = local_74;
  }
  iVar11 = 1;
  uVar5 = 1;
  do {
    iVar11 = iVar11 * 2 - (uint)*(ushort *)((int)&local_44 + uVar5 * 2);
    if (iVar11 < 0) {
      return 0xffffffff;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  if ((0 < iVar11) && ((param_1 == 0 || (param_3 - (local_44 & 0xffff) != 1)))) {
    return 0xffffffff;
  }
  local_40[0xf] = 0;
  uVar5 = 2;
  do {
    sVar10 = *(short *)((int)local_40 + uVar5 + 0x1c) + *(short *)((int)&local_44 + uVar5);
    sVar2 = *(short *)((int)&local_44 + uVar5 + 2);
    *(short *)((int)local_40 + uVar5 + 0x1e) = sVar10;
    *(short *)((int)local_40 + uVar5 + 0x20) = sVar2 + sVar10;
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x1e);
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      if (*(short *)(param_2 + uVar5 * 2) != 0) {
        param_6[local_40[*(ushort *)(param_2 + uVar5 * 2) + 0xe]] = (ushort)uVar5;
        local_40[*(ushort *)(param_2 + uVar5 * 2) + 0xe] =
             local_40[*(ushort *)(param_2 + uVar5 * 2) + 0xe] + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  if (param_1 == 0) {
    local_54 = param_6;
    local_60 = 0x13;
    local_50 = param_6;
  }
  else if (param_1 == 1) {
    local_54 = (ushort *)&DAT_3623bc2e;
    local_50 = (ushort *)&DAT_3623bc6e;
    local_60 = 0x100;
  }
  else {
    local_54 = (ushort *)&DAT_3623beb0;
    local_50 = (ushort *)&DAT_3623bef0;
    local_60 = -1;
  }
  local_6c = *param_4;
  bVar6 = (byte)local_78;
  local_64 = 1 << (bVar6 & 0x1f);
  local_5c = 0xffffffff;
  uVar16 = 0;
  uVar15 = 0;
  uVar5 = local_64 - 1;
  if ((param_1 != 1) || (local_64 < 0x506)) {
    local_68 = param_6;
    local_58 = local_64;
LAB_3614fc00:
    do {
      uVar3 = *local_68;
      bVar14 = (byte)uVar15;
      bVar7 = (char)local_74 - bVar14;
      if ((int)(uint)uVar3 < local_60) {
        local_7c = (uint)CONCAT21(uVar3,bVar7) << 8;
      }
      else if (local_60 < (int)(uint)uVar3) {
        local_7c = CONCAT22(local_54[*local_68],CONCAT11(bVar7,(char)local_50[*local_68]));
      }
      else {
        local_7c = CONCAT31((uint3)bVar7,0x60);
      }
      iVar11 = 1 << ((char)local_74 - bVar14 & 0x1f);
      piVar8 = (int *)(local_6c + ((uVar16 >> (bVar14 & 0x1f)) + local_58) * 4);
      uVar12 = local_58;
      do {
        uVar12 = uVar12 - iVar11;
        piVar8 = piVar8 + -iVar11;
        *piVar8 = local_7c;
      } while (uVar12 != 0);
      for (uVar12 = 1 << ((char)local_74 - 1U & 0x1f); (uVar16 & uVar12) != 0; uVar12 = uVar12 >> 1)
      {
      }
      if (uVar12 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (uVar12 - 1 & uVar16) + uVar12;
      }
      local_68 = local_68 + 1;
      psVar1 = (short *)((int)&local_44 + local_74 * 2);
      *psVar1 = *psVar1 + -1;
      if (*(short *)((int)&local_44 + local_74 * 2) == 0) {
        if (local_74 == uVar4) {
          local_7c._0_2_ = CONCAT11((char)local_74 - bVar14,0x40);
          local_7c = (uint)(ushort)local_7c;
          goto joined_r0x3614fdd6;
        }
        local_74 = (uint)*(ushort *)(param_2 + (uint)*local_68 * 2);
      }
    } while ((local_74 <= local_78) || (uVar12 = uVar5 & uVar16, uVar12 == local_5c));
    if (uVar15 == 0) {
      uVar15 = local_78;
    }
    local_6c = local_6c + local_58 * 4;
    iVar9 = local_74 - uVar15;
    uVar13 = uVar15 + iVar9;
    iVar11 = 1 << ((byte)iVar9 & 0x1f);
    if (uVar13 < uVar4) {
      puVar17 = (ushort *)((int)&local_44 + uVar13 * 2);
      do {
        uVar3 = *puVar17;
        if ((int)(iVar11 - (uint)uVar3) < 1) break;
        iVar9 = iVar9 + 1;
        uVar13 = uVar13 + 1;
        puVar17 = puVar17 + 1;
        iVar11 = (iVar11 - (uint)uVar3) * 2;
      } while (uVar13 < uVar4);
    }
    local_58 = 1 << ((byte)iVar9 & 0x1f);
    local_64 = local_64 + local_58;
    if ((param_1 != 1) || (local_64 < 0x506)) {
      *(byte *)(*param_4 + uVar12 * 4) = (byte)iVar9;
      *(byte *)(*param_4 + 1 + uVar12 * 4) = bVar6;
      *(short *)(*param_4 + 2 + uVar12 * 4) = (short)(local_6c - *param_4 >> 2);
      local_5c = uVar12;
      goto LAB_3614fc00;
    }
  }
  return 1;
joined_r0x3614fdd6:
  if (uVar16 == 0) {
LAB_3614fe35:
    *param_4 = *param_4 + local_64 * 4;
    *param_5 = local_78;
    return 0;
  }
  if ((uVar15 != 0) && ((uVar5 & uVar16) != local_5c)) {
    local_6c = *param_4;
    uVar15 = 0;
    local_7c._0_2_ = CONCAT11(bVar6,(undefined1)local_7c);
    local_7c = (uint)(ushort)local_7c;
    local_74 = local_78;
  }
  *(uint *)(local_6c + (uVar16 >> ((byte)uVar15 & 0x1f)) * 4) = local_7c;
  for (uVar4 = 1 << ((char)local_74 - 1U & 0x1f); (uVar16 & uVar4) != 0; uVar4 = uVar4 >> 1) {
  }
  if (uVar4 == 0) goto LAB_3614fe35;
  uVar16 = (uVar4 - 1 & uVar16) + uVar4;
  goto joined_r0x3614fdd6;
}

