
/* public: __thiscall CMovableModelEntity::CMovableModelEntity(class CMovableModelEntity const &) */

CMovableModelEntity * __thiscall
CMovableModelEntity::CMovableModelEntity(CMovableModelEntity *this,CMovableModelEntity *param_1)

{
                    /* 0xa7750  162  ??0CMovableModelEntity@@QAE@ABV0@@Z */
  CMovableEntity::CMovableEntity((CMovableEntity *)this,(CMovableEntity *)param_1);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x35c) = *(undefined4 *)(param_1 + 0x35c);
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 0x360);
  return this;
}

