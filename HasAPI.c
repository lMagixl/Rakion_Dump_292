
/* public: int __thiscall CGfxLibrary::HasAPI(enum GfxAPIType) */

int __thiscall CGfxLibrary::HasAPI(CGfxLibrary *this,GfxAPIType param_1)

{
                    /* 0x1dd0  2250  ?HasAPI@CGfxLibrary@@QAEHW4GfxAPIType@@@Z */
  if (param_1 == 9) {
    return 1;
  }
  if (param_1 == 0) {
    return (uint)(0 < *(int *)(this + 0x510));
  }
  if (param_1 == 1) {
    return (uint)(0 < *(int *)(this + 0xa28));
  }
  return 0;
}

