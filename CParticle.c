
/* public: __thiscall CParticle::CParticle(void) */

CParticle * __thiscall CParticle::CParticle(CParticle *this)

{
                    /* 0x18ea10  188  ??0CParticle@@QAE@XZ */
  CDynParticle::CDynParticle((CDynParticle *)this);
  Clear(this);
  return this;
}

