
/* public: __thiscall CCollisionInfo::~CCollisionInfo(void) */

void __thiscall CCollisionInfo::~CCollisionInfo(CCollisionInfo *this)

{
                    /* 0xcdc40  404  ??1CCollisionInfo@@QAE@XZ */
  if (*(int *)this != 0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

