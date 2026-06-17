
/* private: long __thiscall CSoundLibrary::PrepareSoundBuffer_dsound(void) */

long __thiscall CSoundLibrary::PrepareSoundBuffer_dsound(CSoundLibrary *this)

{
  int iVar1;
  char *pcVar2;
  CSoundLibrary **ppCVar3;
  CSoundLibrary *local_4;
  
                    /* 0x9f490  2823  ?PrepareSoundBuffer_dsound@CSoundLibrary@@AAEJXZ */
  ppCVar3 = &local_4;
  local_4 = this;
  iVar1 = (**(code **)(**(int **)(this + 0x30) + 0x10))(*(int **)(this + 0x30),ppCVar3,0);
  if (iVar1 != 0) {
    pcVar2 = Translate(s_ETRS___DirectSound_error__Cannot_3622fcd8,4);
    iVar1 = DSFail(this,pcVar2);
    return iVar1;
  }
  iVar1 = (int)ppCVar3 - DAT_362ca0dc;
  if (iVar1 < 0) {
    iVar1 = iVar1 + *(int *)(this + 0x68);
  }
  if (*(int *)(this + 0x68) < iVar1) {
    iVar1 = *(int *)(this + 0x68);
  }
  return iVar1;
}

