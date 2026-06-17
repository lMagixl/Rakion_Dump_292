
/* public: __thiscall MeshMorphMap::~MeshMorphMap(void) */

void __thiscall MeshMorphMap::~MeshMorphMap(MeshMorphMap *this)

{
                    /* 0x130c0  532  ??1MeshMorphMap@@QAE@XZ */
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)(this + 0xc));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}

