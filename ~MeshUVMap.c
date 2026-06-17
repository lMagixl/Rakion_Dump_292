
/* public: __thiscall MeshUVMap::~MeshUVMap(void) */

void __thiscall MeshUVMap::~MeshUVMap(MeshUVMap *this)

{
                    /* 0x13040  534  ??1MeshUVMap@@QAE@XZ */
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)(this + 0xc));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}

