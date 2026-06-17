
/* public: float __thiscall CMovableEntity::GetLerpedEntityTime(void) */

float __thiscall CMovableEntity::GetLerpedEntityTime(CMovableEntity *this)

{
                    /* 0x1aa910  1939  ?GetLerpedEntityTime@CMovableEntity@@QAEMXZ */
  return CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(this + 0x234);
}

