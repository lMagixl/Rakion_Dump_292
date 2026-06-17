
/* public: __thiscall CParticle::~CParticle(void) */

void __thiscall CParticle::~CParticle(CParticle *this)

{
  CDynParticle *this_00;
  
                    /* 0x18ea30  460  ??1CParticle@@QAE@XZ */
  Clear(this);
  CDynParticle::~CDynParticle(this_00);
  return;
}

