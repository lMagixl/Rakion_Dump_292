
/* public: __thiscall CAnimObject::CAnimObject(void) */

CAnimObject * __thiscall CAnimObject::CAnimObject(CAnimObject *this)

{
                    /* 0x1ff10  14  ??0CAnimObject@@QAE@XZ */
  CChangeable::CChangeable((CChangeable *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 1;
  return this;
}

