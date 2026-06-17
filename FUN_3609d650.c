
void FUN_3609d650(void)

{
  char *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_36212f00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_362c9fc8 == (HMODULE)0x0) {
    ExceptionList = &local_10;
    DAT_362c9fc8 = LoadLibraryA(s_vorbisfile_dll_3622ef98);
    if (DAT_362c9fc8 == (HMODULE)0x0) {
      pcVar1 = Translate(s_ETRSCannot_load_vorbisfile_dll__3622efa8,4);
      ThrowF_t(pcVar1);
    }
  }
  FUN_3609d520();
  DAT_362c9fc4 = 1;
  pcVar1 = Translate(s_ETRS_vorbisfile_dll_loaded__ogg_p_3622efc8,4);
  CPrintF(pcVar1);
  local_8 = 2;
  if (DAT_362c9f98 == (HMODULE)0x0) {
    DAT_362c9f98 = LoadLibraryA(s_amp11lib_dll_3622f01c);
    if (DAT_362c9f98 == (HMODULE)0x0) {
      pcVar1 = Translate(s_ETRSCannot_load_amp11lib_dll__3622f02c,4);
      ThrowF_t(pcVar1);
    }
  }
  FUN_3609d390();
  (*DAT_362c9f9c)();
  DAT_362c9f94 = 1;
  pcVar1 = Translate(s_ETRS_amp11lib_dll_loaded__mpx_pl_3622f04c,4);
  CPrintF(pcVar1);
  ExceptionList = local_10;
  return;
}

