
CTWString * __cdecl FUN_36025070(CTWString *param_1,ushort *param_2,CTWString *param_3)

{
  CTWString *pCVar1;
  CTWString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f08c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CTWString *)CTWString::CTWString(local_10,param_2);
  local_4 = 1;
  pCVar1 = CTWString::operator+=(pCVar1,param_3);
  CTWString::CTWString(param_1,pCVar1);
  local_4 = local_4 & 0xffffff00;
  CTWString::~CTWString(local_10);
  ExceptionList = local_c;
  return param_1;
}

