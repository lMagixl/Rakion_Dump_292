
/* public: class Vector<float,3> __thiscall CDynParticle::GetVelocity(void) */

void __thiscall CDynParticle::GetVelocity(CDynParticle *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x18d200  2192  ?GetVelocity@CDynParticle@@QAE?AV?$Vector@M$02@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + 0x10);
  in_stack_00000004[1] = *(undefined4 *)(this + 0x14);
  in_stack_00000004[2] = *(undefined4 *)(this + 0x18);
  return;
}

