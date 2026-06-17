
/* public: void __thiscall CModelInstance::AddTexture_t(class CTFileName const &,class
   CTString,struct MeshInstance *) */

void __thiscall
CModelInstance::AddTexture_t
          (CModelInstance *this,CTFileName *param_1,char *param_3,MeshInstance *param_4)

{
  long lVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15e530  1025
                       ?AddTexture_t@CModelInstance@@QAEXABVCTFileName@@VCTString@@PAUMeshInstance@@@Z
                        */
  puStack_8 = &LAB_3621a1cd;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  lVar1 = ska_StringToID((CTString *)&param_3);
  AddTexture_t(this,param_1,lVar1,param_4);
  local_4 = 0xffffffff;
  StringFree(param_3);
  ExceptionList = local_c;
  return;
}

