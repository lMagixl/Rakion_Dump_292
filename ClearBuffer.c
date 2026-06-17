
/* public: void __thiscall CSoundData::ClearBuffer(void) */

void __thiscall CSoundData::ClearBuffer(CSoundData *this)

{
  int *piVar1;
  
                    /* 0x9c6e0  1256  ?ClearBuffer@CSoundData@@QAEXXZ */
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(void **)(this + 0x2c) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
  }
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}

