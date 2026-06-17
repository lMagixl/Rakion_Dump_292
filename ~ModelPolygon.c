
/* public: __thiscall ModelPolygon::~ModelPolygon(void) */

void __thiscall ModelPolygon::~ModelPolygon(ModelPolygon *this)

{
                    /* 0xb7240  537  ??1ModelPolygon@@QAE@XZ */
  if (*(int *)this != 0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

