
void FUN_360f2e60(void)

{
  long lVar1;
  char *pcVar2;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362164f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSoundLibrary::Mute(_pSound,0.0);
  local_10 = StringDuplicate(s_pwoCurrentWorld_36232e0c);
  local_4 = 0;
  lVar1 = CShell::GetINDEX(_pShell,(CTString *)&local_10);
  local_4 = 0xffffffff;
  StringFree(local_10);
  if (lVar1 != 0) {
    CBrushArchive::CacheAllShadowmaps(*(CBrushArchive **)(lVar1 + 0x34));
    pcVar2 = Translate(s_ETRSAll_shadows_recached_36232e1c,4);
    CPrintF(pcVar2);
    if (DAT_362c53b8 == 0) {
      pcVar2 = Translate(s_ETRS__but_not_for_long___precach_36232e40,4);
      CPrintF(pcVar2);
    }
    else {
      CPrintF(&DAT_36232e38);
    }
  }
  DAT_362b8cfc = 1;
  ExceptionList = local_c;
  return;
}

