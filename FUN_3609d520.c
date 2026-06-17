
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3609d520(void)

{
  DAT_362c9fcc = GetProcAddress(DAT_362c9fc8,s_ov_clear_3622ef50);
  if (DAT_362c9fcc == (FARPROC)0x0) {
    FUN_3609d370();
  }
  _DAT_362c9fd0 = GetProcAddress(DAT_362c9fc8,s_ov_open_3622ef5c);
  if (_DAT_362c9fd0 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fd4 = GetProcAddress(DAT_362c9fc8,s_ov_open_callbacks_3622ef64);
  if (DAT_362c9fd4 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fd8 = GetProcAddress(DAT_362c9fc8,s_ov_read_3622ef78);
  if (DAT_362c9fd8 == (FARPROC)0x0) {
    FUN_3609d370();
  }
  DAT_362c9fdc = GetProcAddress(DAT_362c9fc8,s_ov_info_3622ef80);
  if (DAT_362c9fdc == (FARPROC)0x0) {
    FUN_3609d370();
  }
  _DAT_362c9fe0 = GetProcAddress(DAT_362c9fc8,s_ov_time_seek_3622ef88);
  if (_DAT_362c9fe0 == (FARPROC)0x0) {
    FUN_3609d370();
    return;
  }
  return;
}

