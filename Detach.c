
/* public: void __thiscall CImageInfo::Detach(void) */

void __thiscall CImageInfo::Detach(CImageInfo *this)

{
                    /* 0x8c380  1493  ?Detach@CImageInfo@@QAEXXZ */
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}

