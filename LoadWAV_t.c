
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundData::LoadWAV_t(class CTStream *,long) */

void __thiscall CSoundData::LoadWAV_t(CSoundData *this,CTStream *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  double dVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  CSoundData *pCVar11;
  int *piVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  char *local_64;
  undefined8 local_60;
  uint local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  double local_48;
  double local_40;
  int local_38;
  undefined1 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  CSoundData *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* 0x9c920  2556  ?LoadWAV_t@CSoundData@@QAEXPAVCTStream@@J@Z */
  local_c = DAT_362abd90;
  local_60 = (double)CONCAT44(CONCAT31(local_60._5_3_,DAT_3622ed70),DAT_3622ed6c);
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_60);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  local_60 = (double)CONCAT44(CONCAT31(local_60._5_3_,DAT_3622ed78),DAT_3622ed74);
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_60);
  local_60 = (double)CONCAT44(CONCAT31(local_60._5_3_,DAT_3622ed80),DAT_3622ed7c);
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_60);
  iVar7 = **(int **)(param_1 + 0x14);
  piVar5 = *(int **)(param_1 + 0x14) + 1;
  *(int **)(param_1 + 0x14) = piVar5;
  *(short *)(this + 0x14) = (short)*piVar5;
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined2 **)(param_1 + 0x14) = (undefined2 *)(iVar8 + 2);
  *(undefined2 *)(this + 0x16) = *(undefined2 *)(iVar8 + 2);
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar8 + 2);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(iVar8 + 2);
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar8 + 4);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar8 + 4);
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined2 **)(param_1 + 0x14) = (undefined2 *)(iVar8 + 4);
  *(undefined2 *)(this + 0x20) = *(undefined2 *)(iVar8 + 4);
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined2 **)(param_1 + 0x14) = (undefined2 *)(iVar8 + 2);
  *(undefined2 *)(this + 0x22) = *(undefined2 *)(iVar8 + 2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
  *(undefined2 *)(this + 0x24) = 0;
  if (0x10 < iVar7) {
    CTStream::Seek_t(param_1,iVar7 + -0x10,1);
  }
  CTStream::GetID_t(param_1);
  local_60._0_5_ = CONCAT14(DAT_3622ed88,(undefined4)local_60);
  if (local_38 == DAT_3622ed84) {
    lVar3 = **(long **)(param_1 + 0x14);
    *(long **)(param_1 + 0x14) = *(long **)(param_1 + 0x14) + 1;
    CTStream::Seek_t(param_1,lVar3,1);
    piVar5 = (int *)CTStream::GetID_t(param_1);
    local_38 = *piVar5;
    local_34 = (undefined1)piVar5[1];
  }
  local_60._0_5_ = CONCAT14(DAT_3622ed90,(undefined4)local_60);
  if (local_38 == DAT_3622ed8c) {
    lVar3 = **(long **)(param_1 + 0x14);
    *(long **)(param_1 + 0x14) = *(long **)(param_1 + 0x14) + 1;
    CTStream::Seek_t(param_1,lVar3,1);
    piVar5 = (int *)CTStream::GetID_t(param_1);
    local_38 = *piVar5;
    local_34 = (undefined1)piVar5[1];
  }
  local_60._0_5_ = CONCAT14(DAT_3622ed98,(undefined4)local_60);
  if (local_38 != DAT_3622ed94) {
    local_64 = s_Wrong_chunk_ID___data__expected__3622ed9c;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_64,(ThrowInfo *)&DAT_3624f688);
  }
  local_58 = **(uint **)(param_1 + 0x14);
  *(uint **)(param_1 + 0x14) = *(uint **)(param_1 + 0x14) + 1;
  if (*(short *)(this + 0x14) != 1) {
    local_64 = s_Unsupported_format_tag_in_wave_f_3622edc0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_64,(ThrowInfo *)&DAT_3624f688);
  }
  uVar1 = *(ushort *)(this + 0x22);
  if (((uVar1 != 4) && (uVar1 != 8)) && (uVar1 != 0x10)) {
    local_64 = s_Unsupported_BitsPerSample_value_i_3622ede8;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_64,(ThrowInfo *)&DAT_3624f688);
  }
  uVar2 = *(ushort *)(this + 0x16);
  if ((uVar2 != 1) && (uVar2 != 2)) {
    local_64 = s_Unsupported_number_of_channels_i_3622ee18;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_64,(ThrowInfo *)&DAT_3624f688);
  }
  iVar7 = *(int *)(this + 0x18);
  if (((iVar7 != 0x2b11) && (iVar7 != 0x5622)) && (iVar7 != 0xac44)) {
    local_64 = s_Unsupported_frequency_of_wave_fi_3622ee48;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_64,(ThrowInfo *)&DAT_3624f688);
  }
  local_50 = (uint)(uVar2 == 1);
  if (param_2 == 0) {
    *(int *)(this + 0x3c) =
         (int)(((ulonglong)(local_58 << 3) / (ulonglong)uVar1) / (ulonglong)uVar2);
    return;
  }
  local_48 = (double)*(int *)(this + 0x18);
  if (*(int *)(this + 0x18) < 0) {
    local_48 = local_48 + _DAT_3622dd20;
  }
  local_48 = (double)param_2 / local_48;
  if (_DAT_36227d28 < local_48) {
    local_48 = _DAT_36227d28;
  }
  local_64 = (char *)((uint)(uVar1 != 0x10) * 2 + 2);
  local_4c = AllocMemory((int)local_64 * local_58);
  CTStream::Read_t(param_1,local_4c,local_58);
  if (local_64 == (char *)0x2) {
    uVar6 = local_58 >> 1;
    *(uint *)(this + 0x3c) = uVar6;
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      local_4c[uVar6] = (*(short *)((int)local_4c + uVar6 * 2) + 0x8000) * 0x100;
    }
  }
  else {
    *(uint *)(this + 0x3c) = local_58;
    uVar6 = local_58;
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      local_4c[uVar6] = (uint)*(byte *)(uVar6 + (int)local_4c) << 0x10;
    }
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) << 1;
    local_58 = local_58 * 2;
    *(undefined2 *)(this + 0x22) = 0x10;
    *(short *)(this + 0x20) = *(short *)(this + 0x20) << 1;
  }
  if (local_50 == 0) {
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) / (int)(uint)*(ushort *)(this + 0x16);
  }
  if (local_48 < _DAT_36227d28) {
    fVar13 = (float10)_DAT_36227d28 / (float10)local_48;
    local_54 = local_4c;
    local_64 = (char *)0x0;
    local_40 = _DAT_36227d98;
    local_48 = _DAT_36227d98;
    piVar5 = local_4c;
    if (0 < *(int *)(this + 0x3c)) {
      do {
        dVar4 = (double)*piVar5;
        if ((float10)_DAT_36227d28 <= fVar13) {
          if (*piVar5 < 0) {
            dVar4 = dVar4 + _DAT_3622dd20;
          }
          local_40 = dVar4 + local_40;
          fVar13 = fVar13 - (float10)_DAT_36227d28;
        }
        else {
          local_60 = dVar4;
          if (*piVar5 < 0) {
            local_60 = dVar4 + _DAT_3622dd20;
          }
          uVar14 = FUN_361bfd6c();
          fVar13 = (float10)_DAT_36227d28;
          *local_54 = (int)uVar14;
          local_54 = local_54 + 1;
          local_40 = (double)((float10)local_60 * (fVar13 - extraout_ST0));
          fVar13 = extraout_ST1 - (fVar13 - extraout_ST0);
        }
        piVar12 = piVar5 + 1;
        if (local_50 == 0) {
          dVar4 = (double)*piVar12;
          if ((float10)_DAT_36227d28 <= fVar13) {
            if (*piVar12 < 0) {
              dVar4 = dVar4 + _DAT_3622dd20;
            }
            local_48 = dVar4 + local_48;
            piVar12 = piVar5 + 2;
            fVar13 = fVar13 - (float10)_DAT_36227d28;
          }
          else {
            local_60 = dVar4;
            if (*piVar12 < 0) {
              local_60 = dVar4 + _DAT_3622dd20;
            }
            piVar12 = piVar5 + 2;
            uVar14 = FUN_361bfd6c();
            fVar13 = (float10)_DAT_36227d28;
            *local_54 = (int)uVar14;
            local_54 = local_54 + 1;
            local_48 = (double)((float10)local_60 * (fVar13 - extraout_ST0_00));
            fVar13 = extraout_ST1_00 - (fVar13 - extraout_ST0_00);
          }
        }
        local_64 = local_64 + 1;
        piVar5 = piVar12;
      } while ((int)local_64 < *(int *)(this + 0x3c));
    }
    uVar14 = FUN_361bfd6c();
    piVar5 = local_54;
    *local_54 = (int)uVar14;
    if (local_50 == 0) {
      uVar14 = FUN_361bfd6c();
      piVar5[1] = (int)uVar14;
    }
    *(long *)(this + 0x18) = param_2;
    iVar7 = (uint)*(ushort *)(this + 0x16) * param_2 * 0x10;
    *(int *)(this + 0x1c) = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
    uVar14 = FUN_361bfd6c();
    *(int *)(this + 0x3c) = (int)uVar14;
    uVar14 = FUN_361bfd6c();
    local_58 = (uint)uVar14;
  }
  iVar7 = (uint)*(ushort *)(this + 0x16) * *(int *)(this + 0x3c);
  *(uint *)(this + 0x38) = local_58;
  if (((byte)_pSound[0x44] & 2) == 0) {
    uVar6 = iVar7 * 2;
    uVar9 = uVar6;
    if ((uVar6 & 2) != 0) {
      uVar9 = uVar6 + 2;
    }
    pvVar10 = AllocMemory(uVar9 + 8);
    *(void **)(this + 0x2c) = pvVar10;
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        *(short *)(*(int *)(this + 0x2c) + iVar8 * 2) =
             (short)((uint)local_4c[iVar8] >> 8) + -0x8000;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    *(undefined4 *)(uVar6 + (int)*(undefined4 **)(this + 0x2c)) = **(undefined4 **)(this + 0x2c);
  }
  else {
    piVar5 = *(int **)(_pSound + 0x2c);
    local_24 = 0;
    local_28 = local_58;
    local_2c = (-(uint)(local_50 != 0) & 0x1ffd0) + 0x400e0;
    local_1c = DAT_362488d4;
    local_14 = DAT_362488dc;
    local_18 = DAT_362488d8;
    local_30 = 0x24;
    local_10 = DAT_362488e0;
    if ((local_50 != 0) && (DAT_362ca0cc != 0)) {
      if (DAT_362ca0cc == 1) {
        local_1c = DAT_3622ff40;
        local_18 = DAT_3622ff44;
        local_14 = DAT_3622ff48;
        local_10 = DAT_3622ff4c;
      }
      else if (DAT_362ca0cc == 2) {
        local_1c = DAT_3622ff20;
        local_18 = DAT_3622ff24;
        local_14 = DAT_3622ff28;
        local_10 = DAT_3622ff2c;
      }
      else if (DAT_362ca0cc == 3) {
        local_1c = DAT_3622ff30;
        local_18 = DAT_3622ff34;
        local_14 = DAT_3622ff38;
        local_10 = DAT_3622ff3c;
      }
      else {
        DAT_362ca0cc = 0;
      }
    }
    pCVar11 = this + 0x28;
    puVar18 = &local_30;
    local_20 = this + 0x14;
    (**(code **)(*piVar5 + 0xc))(piVar5,puVar18,pCVar11);
    uVar17 = 2;
    puVar16 = &local_60;
    puVar15 = &stack0xffffff8c;
    (**(code **)(**(int **)pCVar11 + 0x2c))
              (*(int **)pCVar11,0,0,puVar15,&stack0xffffff98,&local_64,puVar16,2);
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        *(short *)(puVar15 + iVar8 * 2) = (short)((uint)puVar18[iVar8] >> 8) + -0x8000;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    (**(code **)(**(int **)pCVar11 + 0x4c))(*(int **)pCVar11,puVar15,puVar16,uVar17,piVar5);
  }
  if (local_4c != (int *)0x0) {
    FreeMemory(local_4c);
  }
  return;
}

