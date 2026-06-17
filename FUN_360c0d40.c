
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_360c0d40(float *param_1)

{
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  float *extraout_EDX_02;
  float *extraout_EDX_03;
  float *extraout_EDX_04;
  float *extraout_EDX_05;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  FUN_360c06e0(&local_c,&local_14);
  if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
    local_c = *extraout_ECX;
    local_8 = extraout_ECX[1];
    local_4 = *(float *)(extraout_EDX + 8);
    FUN_360c06e0(&local_c,&local_14);
    if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
      local_c = *extraout_ECX_00;
      local_8 = *(float *)(extraout_EDX_00 + 4);
      local_4 = extraout_ECX_00[2];
      FUN_360c06e0(&local_c,&local_14);
      if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
        local_c = *extraout_ECX_01;
        local_8 = *(float *)(extraout_EDX_01 + 4);
        local_4 = *(float *)(extraout_EDX_01 + 8);
        FUN_360c06e0(&local_c,&local_14);
        if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
          local_c = *extraout_EDX_02;
          local_8 = *(float *)(extraout_ECX_02 + 4);
          local_4 = *(float *)(extraout_ECX_02 + 8);
          FUN_360c06e0(&local_c,&local_14);
          if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
            local_c = *extraout_EDX_03;
            local_8 = *(float *)(extraout_ECX_03 + 4);
            local_4 = extraout_EDX_03[2];
            FUN_360c06e0(&local_c,&local_14);
            if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
              local_c = *extraout_EDX_04;
              local_4 = *(float *)(extraout_ECX_04 + 8);
              local_8 = extraout_EDX_04[1];
              FUN_360c06e0(&local_c,&local_14);
              if ((local_10 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= local_10)) {
                local_c = *extraout_EDX_05;
                local_8 = extraout_EDX_05[1];
                local_4 = extraout_EDX_05[2];
                FUN_360c06e0(&local_c,&local_14);
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

