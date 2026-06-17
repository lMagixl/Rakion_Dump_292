
/* public: void __thiscall CSoundObject::Stop_internal(int) */

void __thiscall CSoundObject::Stop_internal(CSoundObject *this,int param_1)

{
  int *piVar1;
  
                    /* 0xa30f0  3689  ?Stop_internal@CSoundObject@@QAEXH@Z */
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) & 0x5fffffff;
  if (_pSound != (CSoundLibrary *)0x0) {
    CSoundLibrary::RemoveFromPendingList(_pSound,this,param_1);
  }
  piVar1 = *(int **)(this + 0x9c);
  if (piVar1 != (int *)0x0) {
    thunk_FUN_3609d800(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(CSoundData **)(this + 8) != (CSoundData *)0x0) {
    CSoundData::RemReference(*(CSoundData **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

