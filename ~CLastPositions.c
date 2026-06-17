
/* public: __thiscall CLastPositions::~CLastPositions(void) */

void __thiscall CLastPositions::~CLastPositions(CLastPositions *this)

{
                    /* 0xfb270  431  ??1CLastPositions@@QAE@XZ */
  if (*(int *)this != 0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

