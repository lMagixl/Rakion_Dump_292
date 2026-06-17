
/* public: int __thiscall CModelInstance::GetBoneMatrix(class CTString,float (&)[12]) */

int __thiscall CModelInstance::GetBoneMatrix(CModelInstance *this,char *param_2,float *param_3)

{
  long lVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15c680  1727  ?GetBoneMatrix@CModelInstance@@QAEHVCTString@@AAY0M@M@Z */
  puStack_8 = &LAB_3621a128;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  lVar1 = ska_StringToID((CTString *)&param_2);
  CSkeleton::FindBoneInLOD(*(CSkeleton **)this,lVar1,0);
  iVar2 = RM_GetBoneTransformations(this,lVar1,param_3);
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return iVar2;
}

