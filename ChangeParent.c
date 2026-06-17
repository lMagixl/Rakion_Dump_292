
/* public: void __thiscall CModelInstance::ChangeParent(class CModelInstance *,class CModelInstance
   *) */

void __thiscall
CModelInstance::ChangeParent(CModelInstance *this,CModelInstance *param_1,CModelInstance *param_2)

{
                    /* 0x15e6f0  1157  ?ChangeParent@CModelInstance@@QAEXPAV1@0@Z */
  if (param_1 == (CModelInstance *)0x0) {
    CPrintF(s_Model_Instance_doesn_t_have_a_pa_3623cc48);
    return;
  }
  if (param_2 == (CModelInstance *)0x0) {
    CPrintF(s_New_parent_of_model_instance_is_N_3623cc70);
    return;
  }
  FUN_36160df0(param_1 + 0x4c,(int)this);
  FUN_36036920(param_2 + 0x4c,this);
  return;
}

