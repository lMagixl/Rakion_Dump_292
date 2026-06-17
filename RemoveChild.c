
/* public: void __thiscall CModelInstance::RemoveChild(class CModelInstance *) */

void __thiscall CModelInstance::RemoveChild(CModelInstance *this,CModelInstance *param_1)

{
                    /* 0x15e430  3125  ?RemoveChild@CModelInstance@@QAEXPAV1@@Z */
  if ((param_1 != (CModelInstance *)0x0) && (param_1 != this)) {
    FUN_36160df0(this + 0x4c,(int)param_1);
    return;
  }
  return;
}

