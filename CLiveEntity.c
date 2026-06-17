
/* public: __thiscall CLiveEntity::CLiveEntity(void) */

CLiveEntity * __thiscall CLiveEntity::CLiveEntity(CLiveEntity *this)

{
                    /* 0x12b420  132  ??0CLiveEntity@@QAE@XZ */
  CEntity::CEntity((CEntity *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x100) = 0;
  return this;
}

