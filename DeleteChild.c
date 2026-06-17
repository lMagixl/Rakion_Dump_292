
/* public: void __thiscall CModelInstance::DeleteChild(class CModelInstance *) */

void __thiscall CModelInstance::DeleteChild(CModelInstance *this,CModelInstance *param_1)

{
                    /* 0x15f260  1464  ?DeleteChild@CModelInstance@@QAEXPAV1@@Z */
  if ((param_1 != (CModelInstance *)0x0) && (param_1 != this)) {
    RemoveChild(this,param_1);
    DeleteModelInstance(param_1);
  }
  return;
}

