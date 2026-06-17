
/* public: class Vector<float,3> __thiscall CModelInstance::GetOffsetRot(void) */

void __thiscall CModelInstance::GetOffsetRot(CModelInstance *this)

{
  undefined4 *in_stack_00000004;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  Matrix<float,3,3> local_24 [36];
  
                    /* 0x15ccc0  2025  ?GetOffsetRot@CModelInstance@@QAE?AV?$Vector@M$02@@XZ */
  FUN_36153be0(this + 0xd8,(float *)local_24);
  DecomposeRotationMatrix((Vector<float,3> *)&local_30,local_24);
  *in_stack_00000004 = local_30;
  in_stack_00000004[1] = local_2c;
  in_stack_00000004[2] = local_28;
  return;
}

