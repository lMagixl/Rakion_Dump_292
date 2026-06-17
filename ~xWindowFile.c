
/* public: virtual __thiscall Xenesis2::Device::File::xWindowFile::~xWindowFile(void) */

void __thiscall Xenesis2::Device::File::xWindowFile::~xWindowFile(xWindowFile *this)

{
                    /* 0x1a2bc0  548  ??1xWindowFile@File@Device@Xenesis2@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(HANDLE *)(this + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined ***)this = &xDeviceFile::_vftable_;
  return;
}

