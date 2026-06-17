
/* public: class Vector<float,3> __thiscall CDynParticle::GetPosition(void) */

void __thiscall CDynParticle::GetPosition(CDynParticle *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x18d1e0  2061  ?GetPosition@CDynParticle@@QAE?AV?$Vector@M$02@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + 4);
  in_stack_00000004[1] = *(undefined4 *)(this + 8);
  in_stack_00000004[2] = *(undefined4 *)(this + 0xc);
  return;
}

