
/* public: __thiscall IScavengerWorldNet::~IScavengerWorldNet(void) */

void __thiscall IScavengerWorldNet::~IScavengerWorldNet(IScavengerWorldNet *this)

{
                    /* 0x19a800  528  ??1IScavengerWorldNet@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  Disconnect(this);
  AccountInfo_s::~AccountInfo_s((AccountInfo_s *)(this + 0xc));
  return;
}

