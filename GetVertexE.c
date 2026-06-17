
/* public: class Vector<float,3> __thiscall CBladeTrail::GetVertexE(long) */

void __thiscall CBladeTrail::GetVertexE(CBladeTrail *this,long param_1)

{
  CBladeTrail *pCVar1;
  int in_stack_00000008;
  
                    /* 0x18afb0  2197  ?GetVertexE@CBladeTrail@@QAE?AV?$Vector@M$02@@J@Z */
  pCVar1 = this + (in_stack_00000008 * 3 + 0x714) * 4;
  *(undefined4 *)param_1 = *(undefined4 *)pCVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pCVar1 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pCVar1 + 8);
  return;
}

