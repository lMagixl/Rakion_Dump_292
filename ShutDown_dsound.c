
/* private: void __thiscall CSoundLibrary::ShutDown_dsound(void) */

void __thiscall CSoundLibrary::ShutDown_dsound(CSoundLibrary *this)

{
  int *piVar1;
  
                    /* 0x9e690  3636  ?ShutDown_dsound@CSoundLibrary@@AAEXXZ */
  piVar1 = *(int **)(this + 0x34);
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) & 0xfffffff9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x34) = 0;
  }
  piVar1 = *(int **)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
    (**(code **)(**(int **)(this + 0x30) + 8))(*(int **)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  piVar1 = *(int **)(this + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
    (**(code **)(**(int **)(this + 0x24) + 8))(*(int **)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
  }
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x28) = 0;
  }
  piVar1 = *(int **)(this + 0x2c);
  if (piVar1 != (int *)0x0) {
    if (DAT_362ca0d4 != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,DAT_362ca0d4,1);
    }
    (**(code **)(**(int **)(this + 0x2c) + 8))(*(int **)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (DAT_362ca0d8 != (HMODULE)0x0) {
    FreeLibrary(DAT_362ca0d8);
    DAT_362ca0d8 = (HMODULE)0x0;
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(void **)(this + 100) != (void *)0x0) {
    FreeMemory(*(void **)(this + 100));
    *(undefined4 *)(this + 100) = 0;
  }
  return;
}

