
/* public: int __thiscall CMovableEntity::IsVictory(enum EVictory) */

int __thiscall CMovableEntity::IsVictory(CMovableEntity *this,EVictory param_1)

{
                    /* 0x1aaad0  2498  ?IsVictory@CMovableEntity@@QAEHW4EVictory@@@Z */
  return (uint)((byte)this[0x264] < 10 == param_1);
}

