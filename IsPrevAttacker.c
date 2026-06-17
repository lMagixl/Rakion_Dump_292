
/* public: int __thiscall CEntity::IsPrevAttacker(class CEntity *) */

int __thiscall CEntity::IsPrevAttacker(CEntity *this,CEntity *param_1)

{
                    /* 0x124670  2453  ?IsPrevAttacker@CEntity@@QAEHPAV1@@Z */
  return (uint)(*(CEntity **)(this + 0xf4) == param_1);
}

