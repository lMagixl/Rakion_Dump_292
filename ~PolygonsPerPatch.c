
/* public: __thiscall PolygonsPerPatch::~PolygonsPerPatch(void) */

void __thiscall PolygonsPerPatch::~PolygonsPerPatch(PolygonsPerPatch *this)

{
                    /* 0x14ea0  538  ??1PolygonsPerPatch@@QAE@XZ */
  if (*(int *)this != 0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)(this + 0xc));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)this != 0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

