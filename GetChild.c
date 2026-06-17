
/* public: class CModelInstance * __thiscall CModelInstance::GetChild(class CTString,int) */

CModelInstance * __thiscall CModelInstance::GetChild(CModelInstance *this,char *param_2,int param_3)

{
  long lVar1;
  CModelInstance *pCVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15ced0  1758  ?GetChild@CModelInstance@@QAEPAV1@VCTString@@H@Z */
  puStack_8 = &LAB_3621a15e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  lVar1 = ska_StringToID((CTString *)&param_2);
  pCVar2 = GetChild(this,lVar1,param_3);
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return pCVar2;
}

