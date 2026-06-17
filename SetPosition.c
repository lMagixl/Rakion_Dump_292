
/* public: void __thiscall CDynParticle::SetPosition(float,float,float) */

void __thiscall
CDynParticle::SetPosition(CDynParticle *this,float param_1,float param_2,float param_3)

{
                    /* 0x18dbb0  3561  ?SetPosition@CDynParticle@@QAEXMMM@Z */
  *(float *)(this + 4) = param_1;
  *(float *)(this + 8) = param_2;
  *(float *)(this + 0xc) = param_3;
  return;
}

