
/* public: class Vector<float,3> __thiscall CModelInstance::GetBonePositionAbs(class CTString) */

long __thiscall CModelInstance::GetBonePositionAbs(CModelInstance *this,long param_2,char *param_3)

{
  long lVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15d7c0  1731
                       ?GetBonePositionAbs@CModelInstance@@QAE?AV?$Vector@M$02@@VCTString@@@Z */
  puStack_8 = &LAB_3621a182;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  lVar1 = ska_StringToID((CTString *)&param_3);
  CSkeleton::FindBoneInLOD(*(CSkeleton **)this,lVar1,0);
  GetBonePositionAbs(this,param_2);
  local_4 = 0xffffffff;
  StringFree(param_3);
  ExceptionList = local_c;
  return param_2;
}

