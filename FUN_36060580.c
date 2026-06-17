
void FUN_36060580(void)

{
  char *pcVar1;
  
  if (_bDedicatedServer == 0) {
    ChangeDisplaySettingsA((DEVMODEA *)0x0,0);
    pcVar1 = Translate(s_ETRS_CDS__mode_reset_to_original_362282a8,4);
    CPrintF(pcVar1);
  }
  return;
}

