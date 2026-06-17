
/* public: virtual bool __thiscall Xenesis2::Device::File::xWindowFile::createFolder(char const *)
    */

bool __thiscall Xenesis2::Device::File::xWindowFile::createFolder(xWindowFile *this,char *param_1)

{
  BOOL BVar1;
  
                    /* 0x1a2b40  4154  ?createFolder@xWindowFile@File@Device@Xenesis2@@UAE_NPBD@Z */
  BVar1 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  return (bool)('\x01' - (BVar1 != 1));
}

