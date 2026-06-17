
void FUN_3609d390(void)

{
  DAT_362c9f9c = GetProcAddress(DAT_362c9f98,s__alInitLibrary_0_3622eea4);
  if (DAT_362c9f9c == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fa0 = GetProcAddress(DAT_362c9f98,s__alEndLibrary_0_3622eeb8);
  if (DAT_362c9fa0 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fa4 = GetProcAddress(DAT_362c9f98,s__alOpenInputFile_4_3622eec8);
  if (DAT_362c9fa4 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fa8 = GetProcAddress(DAT_362c9f98,s__alOpenDecoder_4_3622eedc);
  if (DAT_362c9fa8 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fac = GetProcAddress(DAT_362c9f98,s__alOpenSubFile_12_3622eef0);
  if (DAT_362c9fac == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fb0 = GetProcAddress(DAT_362c9f98,s__alGetMPXHeader_24_3622ef04);
  if (DAT_362c9fb0 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fb4 = GetProcAddress(DAT_362c9f98,s__alClose_4_3622ef18);
  if (DAT_362c9fb4 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fb8 = GetProcAddress(DAT_362c9f98,s__alRead_12_3622ef24);
  if (DAT_362c9fb8 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fbc = GetProcAddress(DAT_362c9f98,s__alDecSeekAbs_8_3622ef30);
  if (DAT_362c9fbc == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fc0 = GetProcAddress(DAT_362c9f98,s__alDecGetLen_4_3622ef40);
  if (DAT_362c9fc0 == (FARPROC)0x0) {
    FUN_3609d370();
    return;
  }
  return;
}

