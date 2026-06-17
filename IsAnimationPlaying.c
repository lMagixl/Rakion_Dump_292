
/* public: int __thiscall CModelInstance::IsAnimationPlaying(class CTString) */

int __thiscall CModelInstance::IsAnimationPlaying(CModelInstance *this,char *param_2)

{
  long lVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15d620  2360  ?IsAnimationPlaying@CModelInstance@@QAEHVCTString@@@Z */
  puStack_8 = &LAB_3621a170;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  lVar1 = ska_StringToID((CTString *)&param_2);
  iVar2 = IsAnimationPlaying(this,lVar1);
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return iVar2;
}

