
/* public: void __thiscall CMovableEntity::SetEntityIdIndex(unsigned char,unsigned char) */

void __thiscall CMovableEntity::SetEntityIdIndex(CMovableEntity *this,uchar param_1,uchar param_2)

{
                    /* 0x1aaab0  3450  ?SetEntityIdIndex@CMovableEntity@@QAEXEE@Z */
  this[0x264] = (CMovableEntity)param_1;
  this[0x265] = (CMovableEntity)param_2;
  return;
}

