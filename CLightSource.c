
/* public: __thiscall CLightSource::CLightSource(void) */

CLightSource * __thiscall CLightSource::CLightSource(CLightSource *this)

{
                    /* 0x148730  126  ??0CLightSource@@QAE@XZ */
  CListHead::Clear((CListHead *)this);
  *(undefined4 *)(this + 0x20) = 0xbf800000;
  *(undefined4 *)(this + 0x24) = 0xbf800000;
  this[0x34] = (CLightSource)0xff;
  this[0x35] = (CLightSource)0xff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}

