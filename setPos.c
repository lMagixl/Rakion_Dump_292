
/* public: virtual bool __thiscall Xenesis2::Device::File::xWindowFile::setPos(unsigned long) */

bool __thiscall Xenesis2::Device::File::xWindowFile::setPos(xWindowFile *this,ulong param_1)

{
  DWORD DVar1;
  LONG local_4;
  
                    /* 0x1a2a50  4294  ?setPos@xWindowFile@File@Device@Xenesis2@@UAE_NK@Z */
  local_4 = 0;
  DVar1 = SetFilePointer(*(HANDLE *)(this + 4),param_1,&local_4,0);
  return DVar1 != 0xffffffff;
}

