
/* public: class Vector<float,3> __thiscall CModelInstance::GetOffsetPos(void) */

void __thiscall CModelInstance::GetOffsetPos(CModelInstance *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x15c460  2024  ?GetOffsetPos@CModelInstance@@QAE?AV?$Vector@M$02@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + 0xcc);
  in_stack_00000004[1] = *(undefined4 *)(this + 0xd0);
  in_stack_00000004[2] = *(undefined4 *)(this + 0xd4);
  return;
}

