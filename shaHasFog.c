
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl shaHasFog(class AABBox<float,3> &) */

int __cdecl shaHasFog(AABBox<float,3> *param_1)

{
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x8ee30  4356  ?shaHasFog@@YAHAAV?$AABBox@M$02@@@Z */
  local_10 = (DAT_362c99bc * *(float *)param_1 +
              DAT_362c99c0 * *(float *)(param_1 + 4) + DAT_362c99c4 * *(float *)(param_1 + 8) +
             DAT_362c9774) * DAT_362c3b20;
  if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
    local_c = *(undefined4 *)param_1;
    local_8 = *(undefined4 *)(param_1 + 4);
    local_4 = *(undefined4 *)(param_1 + 0x14);
    FUN_3608ecc0(&local_14);
    if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
      local_c = *extraout_EDX;
      local_8 = extraout_EDX[4];
      local_4 = extraout_EDX[2];
      FUN_3608ecc0(&local_14);
      if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
        local_c = *extraout_EDX_00;
        local_8 = extraout_EDX_00[4];
        local_4 = extraout_EDX_00[5];
        FUN_3608ecc0(&local_14);
        if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
          local_c = *(undefined4 *)(extraout_EDX_01 + 0xc);
          local_8 = *(undefined4 *)(extraout_EDX_01 + 4);
          local_4 = *(undefined4 *)(extraout_EDX_01 + 8);
          FUN_3608ecc0(&local_14);
          if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
            local_c = *(undefined4 *)(extraout_EDX_02 + 0xc);
            local_8 = *(undefined4 *)(extraout_EDX_02 + 4);
            local_4 = *(undefined4 *)(extraout_EDX_02 + 0x14);
            FUN_3608ecc0(&local_14);
            if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
              local_c = *(undefined4 *)(extraout_EDX_03 + 0xc);
              local_8 = *(undefined4 *)(extraout_EDX_03 + 0x10);
              local_4 = *(undefined4 *)(extraout_EDX_03 + 8);
              FUN_3608ecc0(&local_14);
              if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
                local_c = *(undefined4 *)(extraout_EDX_04 + 0xc);
                local_8 = *(undefined4 *)(extraout_EDX_04 + 0x10);
                local_4 = *(undefined4 *)(extraout_EDX_04 + 0x14);
                FUN_3608ecc0(&local_14);
                if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

