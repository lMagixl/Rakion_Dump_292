
/* public: __thiscall MeshWeightMap::~MeshWeightMap(void) */

void __thiscall MeshWeightMap::~MeshWeightMap(MeshWeightMap *this)

{
                    /* 0x13080  535  ??1MeshWeightMap@@QAE@XZ */
  if (*(int *)(this + 4) != 0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

