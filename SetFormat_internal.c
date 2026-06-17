
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSoundLibrary::SetFormat_internal(enum CSoundLibrary::SoundFormat,int)
    */

void __thiscall
CSoundLibrary::SetFormat_internal(CSoundLibrary *this,SoundFormat param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
                    /* 0xa04a0  3474  ?SetFormat_internal@CSoundLibrary@@AAEXW4SoundFormat@1@H@Z */
  *(SoundFormat *)(this + 0x48) = param_1;
  ClearLibrary(this);
  if (param_2 != 0) {
    pcVar1 = Translate(s_ETRSSetting_sound_format_____3622f91c,4);
    CPrintF(pcVar1);
  }
  if (*(int *)(this + 0x48) == 0) {
    if (param_2 == 0) {
      return;
    }
    pcVar1 = Translate(s_ETRS__no_sound__3622f93c,4);
    CPrintF(pcVar1);
    return;
  }
  FUN_3609e760(param_1);
  if (DAT_362a5208 < -1) {
    DAT_362a5208 = -1;
  }
  else if (*(int *)(this + 0x1c) + -1 < DAT_362a5208) {
    DAT_362a5208 = *(int *)(this + 0x1c) + -1;
  }
  if (DAT_362a51f0 < _DAT_362287b0) {
    DAT_362a51f0 = 0.1;
  }
  else if (DAT_362a51f0 < _DAT_3623018c == (DAT_362a51f0 == _DAT_3623018c)) {
    DAT_362a51f0 = 0.4;
  }
  if (DAT_362a520c < 0) {
    DAT_362a520c = 0;
  }
  else {
    if (DAT_362a520c < 4) {
      if (DAT_362a520c < 1) goto LAB_360a059c;
    }
    else {
      DAT_362a520c = 3;
    }
    iVar2 = StartUp_dsound(this,param_2);
    if (iVar2 != 0) goto LAB_360a05b4;
  }
LAB_360a059c:
  iVar2 = StartUp_waveout(this,param_2);
  if (iVar2 != 0) {
    DAT_362a520c = 0;
  }
LAB_360a05b4:
  if (param_2 != 0) {
    CPrintF(&DAT_3622f950);
  }
  if (iVar2 != 0) {
    FUN_3609e7e0();
    return;
  }
  *(undefined4 *)(this + 0x48) = 0;
  return;
}

