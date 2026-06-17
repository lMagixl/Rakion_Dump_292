
/* class CModelInstance * __cdecl CreateModelInstance(class CTString) */

CModelInstance * __cdecl CreateModelInstance(char *param_1)

{
  CModelInstance *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x15f1b0  1425  ?CreateModelInstance@@YAPAVCModelInstance@@VCTString@@@Z */
  puStack_8 = &LAB_3621a3b6;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  pCVar1 = (CModelInstance *)FUN_361bf99c(0x11c);
  local_4._0_1_ = 1;
  if (pCVar1 == (CModelInstance *)0x0) {
    pCVar1 = (CModelInstance *)0x0;
  }
  else {
    pCVar1 = (CModelInstance *)CModelInstance::CModelInstance(pCVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  CModelInstance::SetName(pCVar1,(CTString *)&param_1);
  local_4 = 0xffffffff;
  StringFree(param_1);
  ExceptionList = local_c;
  return pCVar1;
}

