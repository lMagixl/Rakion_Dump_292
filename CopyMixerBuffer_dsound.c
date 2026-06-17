
/* private: void __thiscall CSoundLibrary::CopyMixerBuffer_dsound(long) */

void __thiscall CSoundLibrary::CopyMixerBuffer_dsound(CSoundLibrary *this,long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *local_8;
  ulong local_4;
  
                    /* 0x9f370  1389  ?CopyMixerBuffer_dsound@CSoundLibrary@@AAEXJ@Z */
  iVar1 = DSLockBuffer(this,*(IDirectSoundBuffer **)(this + 0x30),*(long *)(this + 0x68),&local_8,
                       &local_4);
  if (iVar1 != 0) {
    uVar2 = *(int *)(this + 0x68) - DAT_362ca0dc;
    if (param_1 < *(int *)(this + 0x68) - DAT_362ca0dc) {
      uVar2 = param_1;
    }
    FUN_360a1b50(0,(undefined4 *)(DAT_362ca0dc + (int)local_8),uVar2);
    FUN_360a1b50(uVar2,local_8,param_1 - uVar2);
    DAT_362ca0dc = DAT_362ca0dc + param_1;
    if (*(int *)(this + 0x68) <= DAT_362ca0dc) {
      DAT_362ca0dc = DAT_362ca0dc - *(int *)(this + 0x68);
    }
    (**(code **)(**(int **)(this + 0x30) + 0x4c))(*(int **)(this + 0x30),local_8,local_4,0,0);
  }
  return;
}

