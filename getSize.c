
/* public: virtual bool __thiscall Xenesis2::Device::File::xWindowFile::getSize(unsigned long
   &)const  */

bool __thiscall Xenesis2::Device::File::xWindowFile::getSize(xWindowFile *this,ulong *param_1)

{
  DWORD DVar1;
  
                    /* 0x1a2a80  4207  ?getSize@xWindowFile@File@Device@Xenesis2@@UBE_NAAK@Z */
  DVar1 = GetFileSize(*(HANDLE *)(this + 4),(LPDWORD)0x0);
  *param_1 = DVar1;
  return DVar1 != 0xffffffff;
}

