
/* public: void __thiscall CChangeableRT::MarkChanged(void) */

void __thiscall CChangeableRT::MarkChanged(CChangeableRT *this)

{
                    /* 0x21cd0  2625  ?MarkChanged@CChangeableRT@@QAEXXZ */
  *(undefined4 *)this = *(undefined4 *)(_pTimer + 8);
  return;
}

