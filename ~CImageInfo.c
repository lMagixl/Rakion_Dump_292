
/* public: __thiscall CImageInfo::~CImageInfo(void) */

void __thiscall CImageInfo::~CImageInfo(CImageInfo *this)

{
  if (*(void **)(this + 0xc) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0xc));
  }
  Detach(this);
  return;
}

