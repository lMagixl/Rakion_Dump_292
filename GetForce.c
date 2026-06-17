
/* public: class Vector<float,3> __thiscall CDynParticle::GetForce(void) */

void __thiscall CDynParticle::GetForce(CDynParticle *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x18d220  1881  ?GetForce@CDynParticle@@QAE?AV?$Vector@M$02@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + 0x28);
  in_stack_00000004[1] = *(undefined4 *)(this + 0x2c);
  in_stack_00000004[2] = *(undefined4 *)(this + 0x30);
  return;
}

