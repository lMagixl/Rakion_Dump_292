
undefined4 * __cdecl FUN_360606a0(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  CTString *this;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211cb9;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  local_18 = StringDuplicate(s_I_no_texture_362282de + 2);
  local_4._0_1_ = 2;
  if (DAT_362bf898 == 0) {
    pcVar1 = StringDuplicate(s_no_texture_362282ec);
    StringFree(local_18);
    local_18 = pcVar1;
  }
  else if (DAT_362bf898 == 1) {
    pcVar1 = StringDuplicate(s_1_texture_362282f8);
    StringFree(local_18);
    local_18 = pcVar1;
  }
  else if (1 < DAT_362bf898) {
    CTString::PrintF(this,(char *)&local_18,s__d_textures_36228304,DAT_362bf898);
  }
  pcVar1 = s_z_buffer__36228310;
  if (DAT_362bf894 == 0) {
    pcVar1 = s_no_z_buffer__3622831c;
  }
  pcVar2 = s_blending_3622832c;
  if (DAT_362bf88c == 0) {
    pcVar2 = s_no_blending_36228338;
  }
  CTString::PrintF((CTString *)&local_14,(char *)&local_14,s__s___s___s_36228344,local_18,pcVar2,
                   pcVar1);
  pcVar1 = StringDuplicate(local_14);
  *param_1 = pcVar1;
  local_10 = 1;
  local_4._0_1_ = 1;
  StringFree(local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_14);
  ExceptionList = local_c;
  return param_1;
}

