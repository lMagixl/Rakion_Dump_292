
/* public: virtual bool __thiscall Xenesis2::Device::File::xWindowFile::setEnd(void) */

bool __thiscall Xenesis2::Device::File::xWindowFile::setEnd(xWindowFile *this)

{
  BOOL BVar1;
  
                    /* 0x1a2b20  4292  ?setEnd@xWindowFile@File@Device@Xenesis2@@UAE_NXZ */
  BVar1 = SetEndOfFile(*(HANDLE *)(this + 4));
  return (bool)('\x01' - (BVar1 != 1));
}

