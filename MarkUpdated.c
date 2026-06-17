
/* public: void __thiscall CUpdateableRT::MarkUpdated(void) */

void __thiscall CUpdateableRT::MarkUpdated(CUpdateableRT *this)

{
                    /* 0x48a10  2630  ?MarkUpdated@CUpdateableRT@@QAEXXZ */
  *(undefined4 *)this = *(undefined4 *)(_pTimer + 8);
  return;
}

