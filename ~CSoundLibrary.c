
/* public: __thiscall CSoundLibrary::~CSoundLibrary(void) */

void __thiscall CSoundLibrary::~CSoundLibrary(CSoundLibrary *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa0af0  480  ??1CSoundLibrary@@QAE@XZ */
  puStack_8 = &LAB_36212fd5;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  Clear(this);
  FUN_3609d7a0();
  if (*(int *)(this + 0x14) != 0) {
    operator_delete__(*(void **)(this + 0x18));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  ExceptionList = local_c;
  return;
}

