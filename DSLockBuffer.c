
/* private: int __thiscall CSoundLibrary::DSLockBuffer(struct IDirectSoundBuffer *,long,void *
   &,unsigned long &) */

int __thiscall
CSoundLibrary::DSLockBuffer
          (CSoundLibrary *this,IDirectSoundBuffer *param_1,long param_2,void **param_3,
          ulong *param_4)

{
  int iVar1;
  char *pcVar2;
  ulong *puVar3;
  CSoundLibrary *this_00;
  
  do {
    this_00 = (CSoundLibrary *)0x0;
    puVar3 = param_4;
    iVar1 = (**(code **)(*(int *)param_1 + 0x2c))(param_1,0,param_2,param_3,param_4,0,0,0);
    if (iVar1 == 0) {
      if (param_2 == *param_4) {
        return 1;
      }
LAB_3609e8d9:
      pcVar2 = s_ETRS___DirectSound_error__Cannot_3622f308;
LAB_3609e8e9:
      pcVar2 = Translate(pcVar2,4);
      iVar1 = DSFail(this_00,pcVar2);
      return iVar1;
    }
    if (iVar1 != -0x7787ff6a) goto LAB_3609e8d9;
    if (puVar3 == (ulong *)0x0) {
      pcVar2 = s_ETRS___DirectSound_error__Couldn_3622f340;
      goto LAB_3609e8e9;
    }
    (**(code **)(*(int *)param_1 + 0x50))(param_1);
  } while( true );
}

