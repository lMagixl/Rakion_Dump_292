
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundLibrary::SetFormat(enum CSoundLibrary::SoundFormat,int) */

void __thiscall CSoundLibrary::SetFormat(CSoundLibrary *this,SoundFormat param_1,int param_2)

{
  CStock_CSoundData *pCVar1;
  int iVar2;
  CSoundData *this_00;
  CSerial *this_01;
  int iVar3;
  CSoundObject *pCVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa05f0  3473  ?SetFormat@CSoundLibrary@@QAEXW4SoundFormat@1@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212fb5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (pCVar4 = *(CSoundObject **)(this + 0x458); pCVar1 = _pSoundStock, *(int *)pCVar4 != 0;
      pCVar4 = *(CSoundObject **)pCVar4) {
    CSoundObject::Pause(pCVar4);
  }
  iVar3 = 0;
  if (_pSoundStock != (CStock_CSoundData *)0x0) {
    local_4 = 0;
    iVar2 = FUN_360a1440((int)_pSoundStock);
    if (0 < iVar2) {
      do {
        iVar2 = FUN_360a12b0(pCVar1,iVar3);
        if ((*(byte *)(iVar2 + 0x44) & 1) == 0) {
          this_00 = (CSoundData *)FUN_360a12b0(pCVar1,iVar3);
          CSoundData::ClearBuffer(this_00);
        }
        iVar3 = iVar3 + 1;
        iVar2 = FUN_360a1440((int)pCVar1);
      } while (iVar3 < iVar2);
    }
    local_4 = 0xffffffff;
  }
  SetFormat_internal(this,param_1,param_2);
  pCVar1 = _pSoundStock;
  _DAT_362a522c = DAT_362a51f0;
  DAT_362a5230 = DAT_362a520c;
  iVar2 = 0;
  DAT_362a5234 = snd_iFormat;
  DAT_362a5238 = DAT_362a5208;
  DAT_362a523c = DAT_362ca0cc;
  local_4 = 1;
  iVar3 = FUN_360a1440((int)_pSoundStock);
  if (0 < iVar3) {
    do {
      iVar3 = FUN_360a12b0(pCVar1,iVar2);
      if ((*(byte *)(iVar3 + 0x44) & 1) == 0) {
        this_01 = (CSerial *)FUN_360a12b0(pCVar1,iVar2);
        CSerial::Reload(this_01);
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_360a1440((int)pCVar1);
    } while (iVar2 < iVar3);
  }
  pCVar4 = *(CSoundObject **)(this + 0x458);
  local_4 = 0xffffffff;
  for (; *(int *)pCVar4 != 0; pCVar4 = *(CSoundObject **)pCVar4) {
    CSoundObject::Resume(pCVar4);
  }
  ExceptionList = local_c;
  return;
}

