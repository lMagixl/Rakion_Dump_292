
/* private: __thiscall CFontTexture::CFontTexture(void) */

CFontTexture * __thiscall CFontTexture::CFontTexture(CFontTexture *this)

{
  undefined1 local_11;
  CFontTexture *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1887e0  109  ??0CFontTexture@@AAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621adb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_3618aaf0(this,&local_11);
  local_4 = 0;
  FUN_3618aaf0(this + 0x28,&local_11);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  ExceptionList = local_c;
  return this;
}

