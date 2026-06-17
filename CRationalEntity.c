
/* public: __thiscall CRationalEntity::CRationalEntity(void) */

CRationalEntity * __thiscall CRationalEntity::CRationalEntity(CRationalEntity *this)

{
                    /* 0x12d5a0  208  ??0CRationalEntity@@QAE@XZ */
  CLiveEntity::CLiveEntity((CLiveEntity *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0x10;
  return this;
}

