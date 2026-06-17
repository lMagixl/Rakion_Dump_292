
/* void __cdecl DeleteModelInstance(class CModelInstance *) */

void __cdecl DeleteModelInstance(CModelInstance *param_1)

{
                    /* 0x15f230  1467  ?DeleteModelInstance@@YAXPAVCModelInstance@@@Z */
  if ((_pModelInstanceStock != (CStock_CModelInstance *)0x0) && (param_1 != (CModelInstance *)0x0))
  {
    CModelInstance::Clear(param_1);
    CModelInstance::~CModelInstance(param_1);
    operator_delete(param_1);
  }
  return;
}

