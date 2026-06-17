
/* class Xenesis2::Device::File::xDeviceFile * __cdecl
   Xenesis2::Device::File::createDeviceFile(void) */

xDeviceFile * __cdecl Xenesis2::Device::File::createDeviceFile(void)

{
  xDeviceFile *pxVar1;
  
                    /* 0x1a2b90  4151
                       ?createDeviceFile@File@Device@Xenesis2@@YAPAVxDeviceFile@123@XZ */
  pxVar1 = (xDeviceFile *)FUN_361bf99c(8);
  if (pxVar1 != (xDeviceFile *)0x0) {
    *(undefined ***)pxVar1 = &xWindowFile::_vftable_;
    *(undefined4 *)(pxVar1 + 4) = 0xffffffff;
    return pxVar1;
  }
  return (xDeviceFile *)0x0;
}

