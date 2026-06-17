
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTextureData::SetAsCurrent(long,int) */

void __thiscall CTextureData::SetAsCurrent(CTextureData *this,long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined3 extraout_var;
  void *pvVar7;
  undefined4 *puVar8;
  undefined3 extraout_var_00;
  uint *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  CTextureData *pCVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  float local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  CTextureData *local_20;
  float local_1c;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x94d90  3399  ?SetAsCurrent@CTextureData@@QAEXJH@Z */
  if (*(int *)(this + 0x34) <= param_1) {
    return;
  }
  local_38 = *(float *)(_pGfx + 0xae4);
  local_2c = param_2;
  uVar13 = *(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f);
  lVar15 = *(int *)(this + 0x24) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f);
  local_34 = 1;
  param_2 = lVar15;
  fVar17 = local_38;
  local_30 = uVar13;
  if ((*(uint *)(this + 0x1c) & 0x200) == 0) {
    if ((*(uint *)(this + 0x1c) & 0x10) != 0) {
      if (_DAT_3622376c <= _DAT_362c46f8) {
        if (local_38 <= _DAT_362c46f8) goto LAB_36094e64;
      }
      else {
        fVar17 = 0.0;
      }
      goto LAB_36094e5c;
    }
    if (_DAT_362c46f8 != local_38) goto LAB_36094e5c;
  }
  else {
    if (_DAT_362c46f8 <= _DAT_3622376c) {
      if (_DAT_362c46f8 <= local_38) goto LAB_36094e64;
    }
    else {
      fVar17 = 0.0;
    }
LAB_36094e5c:
    FUN_3607b4e0(fVar17);
  }
LAB_36094e64:
  local_28 = FUN_36085480(*(uint *)(this + 0x50),*(int *)(this + 0x54));
  if (*(int *)(this + 0x78) == 0) goto LAB_3609508f;
  lVar5 = 0x10000;
  if (DAT_362a4068 < 4) {
    DAT_362a4068 = 4;
  }
  else if (8 < DAT_362a4068) {
    DAT_362a4068 = 8;
  }
  if ((*(uint *)(this + 0x1c) & 0x200) == 0) {
    lVar5 = 1 << ((char)DAT_362a4068 * '\x02' & 0x1fU);
  }
  lVar5 = ClampTextureSize(lVar5,*(long *)(_pGfx + 0xad4),uVar13,lVar15);
  param_2 = lVar5 + *(int *)(this + 0x28);
  iVar6 = ClampMipLevel(this,(float)param_2);
  bVar10 = (char)iVar6 - (char)*(undefined4 *)(this + 0x28);
  uVar13 = (int)uVar13 >> (bVar10 & 0x1f);
  iVar16 = lVar15 >> (bVar10 & 0x1f);
  param_2 = iVar16;
  local_30 = uVar13;
  bVar4 = FUN_36098750(*(int *)(this + 0x78));
  if (CONCAT31(extraout_var,bVar4) != 0) {
    uVar12 = *(int *)(*(int *)(this + 0x74) + 0x24) >>
             ((byte)*(undefined4 *)(*(int *)(this + 0x74) + 0x28) & 0x1f);
    local_20 = (CTextureData *)0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> (int)local_20 == 0; local_20 = (CTextureData *)((int)local_20 + -1)) {
      }
    }
    local_24 = 0x1f;
    if (param_2 != 0) {
      for (; (uint)param_2 >> local_24 == 0; local_24 = local_24 - 1) {
      }
    }
    uVar12 = *(int *)(*(int *)(this + 0x74) + 0x20) >>
             ((byte)*(undefined4 *)(*(int *)(this + 0x74) + 0x28) & 0x1f);
    local_28 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> local_28 == 0; local_28 = local_28 + -1) {
      }
    }
    local_1c = 4.34403e-44;
    if (local_30 != 0) {
      for (; local_30 >> (int)local_1c == 0; local_1c = (float)((int)local_1c + -1)) {
      }
    }
    iVar6 = local_28 - (int)local_1c;
    if ((int)((int)local_20 - local_24) < local_28 - (int)local_1c) {
      iVar6 = (int)local_20 - local_24;
    }
    if (iVar6 < 0) {
      uVar13 = (int)uVar13 >> (-(char)iVar6 & 0x1fU);
      param_2 = iVar16 >> (-(char)iVar6 & 0x1fU);
      iVar6 = 0;
      local_30 = uVar13;
    }
  }
  lVar15 = GetMipmapOffset(0xf,uVar13,param_2);
  pvVar7 = *(void **)(this + 0x60);
  iVar16 = lVar15 << 2;
  if (pvVar7 == (void *)0x0) {
LAB_36094faa:
    pvVar7 = AllocMemory(iVar16);
    *(void **)(this + 0x60) = pvVar7;
    *(int *)(this + 0x30) = iVar16;
    local_34 = 0;
  }
  else if (*(int *)(this + 0x30) != iVar16) {
    if (pvVar7 != (void *)0x0) {
      FreeMemory(pvVar7);
    }
    goto LAB_36094faa;
  }
  local_1c = *(float *)(_pTimer + 0xc);
  fVar17 = CUpdateable::LastUpdateTime((CUpdateable *)(*(int *)(this + 0x78) + 8));
  if (local_1c != fVar17) {
    CChangeable::MarkChanged((CChangeable *)(this + 4));
    FUN_3609b530(*(int **)(this + 0x78));
    *(uint *)(this + 0x1c) =
         *(uint *)(this + 0x1c) | *(uint *)(*(int *)(this + 0x74) + 0x1c) & 0x409;
    local_2c = 1;
    FUN_3609b490(*(void **)(this + 0x78),iVar6,uVar13,param_2);
    uVar12 = *(uint *)(this + 0x1c);
    if ((uVar12 & 0x400) == 0) {
      iVar6 = DAT_362c9b60;
      if (((uVar12 & 8) == 0) && (iVar6 = DAT_362c9b5c, (uVar12 & 1) == 0)) {
        iVar6 = DAT_362c9b58;
      }
    }
    else {
      iVar6 = DAT_362c9b68;
      if ((uVar12 & 1) != 0) {
        iVar6 = DAT_362c9b64;
      }
    }
    if ((DAT_362c53a0 != 0) && ((*(uint *)(*(int *)(this + 0x74) + 0x1c) & 0x200000) != 0)) {
      iVar6 = FUN_36093800();
    }
    if (*(int *)(this + 0x4c) != iVar6) {
      *(int *)(this + 0x4c) = iVar6;
      local_34 = 0;
    }
  }
  local_28 = 0;
  lVar15 = param_2;
LAB_3609508f:
  if (*(int *)(this + 0x4c) != 0) {
    if (DAT_362c5398 != 0) {
      DAT_362c5398 = 1;
    }
    if ((int)DAT_362a4074 < -6) {
      DAT_362a4074 = 0xfffffffa;
    }
    else if (6 < (int)DAT_362a4074) {
      DAT_362a4074 = 6;
    }
    if (*(int *)(this + 0x78) == 0) {
      bVar4 = *(int *)(this + 0x2c) < 2;
    }
    else {
      bVar4 = DAT_362c5398 == 0;
    }
    *(uint *)(this + 0x40) = (uint)bVar4;
    iVar6 = DAT_362bef7c;
    if ((local_2c != 0) && (*(int *)(this + 0x78) != 0)) {
      if (1 < _iStatsMode) {
        puVar8 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar6 + 0x218) = *puVar8;
        *(undefined4 *)(iVar6 + 0x21c) = puVar8[1];
      }
      bVar4 = FUN_36098750(*(int *)(this + 0x78));
      uVar12 = ~-(uint)(CONCAT31(extraout_var_00,bVar4) != 0) & DAT_362a4074;
      if (*(int *)(this + 0x40) == 0) {
        MakeMipmaps(*(ulong **)(this + 0x60),uVar13,lVar15,uVar12);
      }
      else if (uVar12 != 0) {
        FilterBitmap(uVar12,*(ulong **)(this + 0x60),*(ulong **)(this + 0x60),uVar13,lVar15,0,0);
      }
      iVar6 = DAT_362bef7c;
      if (1 < _iStatsMode) {
        puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar12 = *puVar9;
        uVar1 = puVar9[1];
        uVar11 = uVar12 - *(uint *)(iVar6 + 0x218);
        uVar2 = *(uint *)(iVar6 + 0x220);
        *(uint *)(iVar6 + 0x220) = uVar2 + uVar11;
        *(uint *)(iVar6 + 0x224) =
             *(int *)(iVar6 + 0x224) +
             ((uVar1 - *(int *)(iVar6 + 0x21c)) - (uint)(uVar12 < *(uint *)(iVar6 + 0x218))) +
             (uint)CARRY4(uVar2,uVar11);
        *(undefined4 *)(iVar6 + 0x218) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x21c) = 0xffffffff;
        lVar15 = param_2;
      }
    }
    local_1c = (float)(lVar15 * uVar13);
    if (*(int *)(this + 0x5c) == 0) {
      if (*(int *)(this + 0x34) < 2) {
        (*DAT_362c4688)(this + 0x5c);
      }
      else {
        pvVar7 = AllocMemory(*(int *)(this + 0x34) * 4);
        *(void **)(this + 0x5c) = pvVar7;
        iVar6 = 0;
        if (0 < *(int *)(this + 0x34)) {
          do {
            (*DAT_362c4688)(*(int *)(this + 0x5c) + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(this + 0x34));
        }
      }
      if ((*(int *)(this + 0x78) == 0) && (0x100 < (int)local_1c)) {
        (*DAT_362c4688)(this + 0x58);
      }
      local_2c = 1;
      local_34 = 0;
      lVar15 = param_2;
    }
    if ((*(uint *)(this + 0x1c) & 0x200) != 0) {
      (*DAT_362c468c)(this + 0x58);
    }
    local_20 = this + 0x58;
    if (*(int *)(this + 0x58) == 0) {
      local_28 = 0;
    }
    if ((1 < _iStatsMode) && (*(int *)(this + 0x7c) != *(int *)(_pGfx + 0xafc))) {
      *(int *)(this + 0x7c) = *(int *)(_pGfx + 0xafc);
      iVar6 = FUN_3607ac80(*(int *)(this + 0x4c));
      local_24 = iVar6 * lVar15 * uVar13;
      if (*(int *)(this + 0x40) == 0) {
        local_24 = (int)(local_24 * 4) / 3;
      }
      *(float *)(DAT_362bef74 + 0x14c) = *(float *)(DAT_362bef74 + 0x14c) + _DAT_36223384;
      *(float *)(DAT_362bef74 + 0x160) = (float)(int)local_24 + *(float *)(DAT_362bef74 + 0x160);
    }
    if (local_2c == 0) {
      if (((1 < *(int *)(this + 0x34)) &&
          (((*(CTexParams **)(this + 0x38) != _tpGlobal || (*(int *)(this + 0x44) != DAT_362c5574))
           || (*(int *)(this + 0x48) != DAT_362c5578)))) && (iVar6 = 0, 0 < *(int *)(this + 0x34)))
      {
        do {
          *(int *)(this + 0x38) = 0;
          *(undefined4 *)(this + 0x3c) = 0;
          *(undefined4 *)(this + 0x48) = 0;
          *(undefined4 *)(this + 0x44) = 0;
          FUN_3607b9d0((undefined4 *)(*(int *)(this + 0x5c) + iVar6 * 4),(int *)(this + 0x38));
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0x34));
      }
      local_38 = *(float *)(this + 0x5c);
      if (1 < *(int *)(this + 0x34)) {
        local_38 = *(float *)((int)local_38 + param_1 * 4);
      }
      if (local_28 != 0) {
        if (*(int *)(_pGfx + 0xb08) < 0) {
          iStack_14 = *(int *)(this + 0x38);
          uStack_10 = *(undefined4 *)(this + 0x3c);
          uStack_c = *(undefined4 *)(this + 0x40);
          uStack_8 = *(undefined4 *)(this + 0x44);
          uStack_4 = *(undefined4 *)(this + 0x48);
          FUN_3607b9d0((undefined4 *)local_20,&iStack_14);
          return;
        }
        *(int *)(_pGfx + 0xb08) = *(int *)(_pGfx + 0xb08) + (int)local_1c * -4;
      }
      FUN_3607b9d0(&local_38,(int *)(this + 0x38));
      puVar8 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(this + 0x50) = *puVar8;
      *(undefined4 *)(this + 0x54) = puVar8[1];
    }
    else {
      if ((local_34 == 0) ||
         (local_34 = 1, (*(uint *)(this + 0x1c) & 0x40000) != *(uint *)(this + 0x40))) {
        local_34 = 0;
      }
      if (*(int *)(this + 0x40) == 0) {
        uVar13 = *(uint *)(this + 0x1c) & 0xfffbffff;
      }
      else {
        uVar13 = *(uint *)(this + 0x1c) | 0x40000;
      }
      *(uint *)(this + 0x1c) = uVar13;
      if (*(int *)(this + 0x34) < 2) {
        pCVar14 = this + 0x5c;
      }
      else {
        pCVar14 = *(CTextureData **)(this + 0x5c);
      }
      iVar6 = 0;
      if (0 < *(int *)(this + 0x34)) {
        do {
          iVar16 = *(int *)(this + 0x30);
          iVar3 = *(int *)(this + 0x60);
          FUN_3607b9d0((undefined4 *)pCVar14,(int *)(this + 0x38));
          FUN_3607bbd0(iVar3 + ((int)(iVar16 * iVar6 + (iVar16 * iVar6 >> 0x1f & 3U)) >> 2) * 4,
                       local_30,param_2,*(int *)(this + 0x4c),local_34);
          iVar6 = iVar6 + 1;
          pCVar14 = pCVar14 + 4;
        } while (iVar6 < *(int *)(this + 0x34));
      }
      pCVar14 = local_20;
      if (*(int *)local_20 != 0) {
        local_24 = local_30;
        param_1 = param_2;
        param_2 = *(int *)(this + 0x60);
        GetMipmapOfSize(0x100,(ulong **)&param_2,(long *)&local_24,&param_1);
        FUN_3607b9d0((undefined4 *)pCVar14,(int *)(this + 0x38));
        FUN_3607bbd0(param_2,local_24,param_1,DAT_362c9b5c,0);
      }
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x3c) = 0;
      *(undefined4 *)(this + 0x48) = 0;
      *(undefined4 *)(this + 0x44) = 0;
      if ((*(uint *)(this + 0x1c) & 0x100) == 0) {
        FreeMemory(*(void **)(this + 0x60));
        *(undefined4 *)(this + 0x60) = 0;
        return;
      }
    }
  }
  return;
}

