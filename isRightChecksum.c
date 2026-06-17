
/* public: bool __thiscall Xenesis2::Foundation::File::xFileManager::isRightChecksum(void) */

bool __thiscall Xenesis2::Foundation::File::xFileManager::isRightChecksum(xFileManager *this)

{
  ulong uVar1;
  
                    /* 0x11ce0  4228
                       ?isRightChecksum@xFileManager@File@Foundation@Xenesis2@@QAE_NXZ */
  uVar1 = getChecksum(this);
  return *(ulong *)(this + 0xc) == uVar1;
}

