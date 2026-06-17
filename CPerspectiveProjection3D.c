
/* public: __thiscall CPerspectiveProjection3D::CPerspectiveProjection3D(void) */

CPerspectiveProjection3D * __thiscall
CPerspectiveProjection3D::CPerspectiveProjection3D(CPerspectiveProjection3D *this)

{
                    /* 0x5a5d0  190  ??0CPerspectiveProjection3D@@QAE@XZ */
  CProjection3D::CProjection3D((CProjection3D *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1a4) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1a8) = 0xff61b1e6;
  *(undefined4 *)(this + 0x19c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1a0) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x194) = 0xbf800000;
  *(undefined4 *)(this + 0x198) = 0xbf800000;
  return this;
}

