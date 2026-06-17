
/* public: __thiscall MappingSurface::~MappingSurface(void) */

void __thiscall MappingSurface::~MappingSurface(MappingSurface *this)

{
                    /* 0xb7270  530  ??1MappingSurface@@QAE@XZ */
  if (*(int *)(this + 0x5c) != 0) {
    operator_delete__(*(void **)(this + 0x60));
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(int *)(this + 0x54) != 0) {
    operator_delete__(*(void **)(this + 0x58));
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
  }
  StringFree(*(char **)this);
  return;
}

