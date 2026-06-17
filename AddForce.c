
/* public: void __thiscall CDynParticle::AddForce(class Vector<float,3>) */

void __thiscall CDynParticle::AddForce(CDynParticle *this,float param_2,float param_3,float param_4)

{
                    /* 0x18d6e0  978  ?AddForce@CDynParticle@@QAEXV?$Vector@M$02@@@Z */
  *(float *)(this + 0x28) = param_2 + *(float *)(this + 0x28);
  *(float *)(this + 0x2c) = param_3 + *(float *)(this + 0x2c);
  *(float *)(this + 0x30) = param_4 + *(float *)(this + 0x30);
  return;
}

