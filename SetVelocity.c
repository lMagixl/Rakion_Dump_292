
/* public: void __thiscall CDynParticle::SetVelocity(class Vector<float,3>) */

void __thiscall
CDynParticle::SetVelocity
          (CDynParticle *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x18d1b0  3620  ?SetVelocity@CDynParticle@@QAEXV?$Vector@M$02@@@Z */
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = param_3;
  *(undefined4 *)(this + 0x18) = param_4;
  return;
}

