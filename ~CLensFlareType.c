
/* public: __thiscall CLensFlareType::~CLensFlareType(void) */

void __thiscall CLensFlareType::~CLensFlareType(CLensFlareType *this)

{
  void *pvVar1;
  
                    /* 0x1224b0  432  ??1CLensFlareType@@QAE@XZ */
  if (*(int *)this != 0) {
    pvVar1 = *(void **)(this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x38,*(int *)((int)pvVar1 + -4),COneLensFlare::~COneLensFlare);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

