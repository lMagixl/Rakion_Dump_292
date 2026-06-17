
/* public: void __thiscall CModelInstance::AddChild(class CModelInstance *,long) */

void __thiscall CModelInstance::AddChild(CModelInstance *this,CModelInstance *param_1,long param_2)

{
                    /* 0x15e6a0  960  ?AddChild@CModelInstance@@QAEXPAV1@J@Z */
  if (param_1 != (CModelInstance *)0x0) {
    FUN_36036920(this + 0x4c,param_1);
    if (0 < param_2) {
      SetParentBone(param_1,param_2);
    }
  }
  return;
}

