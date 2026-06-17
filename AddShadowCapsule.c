
/* public: void __thiscall CModelInstance::AddShadowCapsule(long,float) */

void __thiscall CModelInstance::AddShadowCapsule(CModelInstance *this,long param_1,float param_2)

{
  int iVar1;
  
                    /* 0x15e3b0  1012  ?AddShadowCapsule@CModelInstance@@QAEXJM@Z */
  if (param_1 != -1) {
    iVar1 = FUN_3611f610((undefined4 *)(this + 0x2c));
    FUN_36160c90(this + 0x2c,iVar1 + 1);
    iVar1 = *(int *)(this + 0x30) + iVar1 * 0xc;
    *(long *)(iVar1 + 4) = param_1;
    *(float *)(iVar1 + 8) = param_2;
  }
  return;
}

