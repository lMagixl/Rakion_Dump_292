
/* public: virtual void __thiscall CEntity::RenderParticles(void) */

void __thiscall CEntity::RenderParticles(CEntity *this)

{
                    /* 0x124970  3150  ?RenderParticles@CEntity@@UAEXXZ */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x10000;
  return;
}

