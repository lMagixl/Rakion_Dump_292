
/* public: class CTWString __thiscall CTWString::operator+(class CTWString const &)const  */

CTWString * __thiscall CTWString::operator+(CTWString *this,CTWString *param_1)

{
  CTWString *pCVar1;
  CTWString *in_stack_00000008;
  CTWString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x24ff0  862  ??HCTWString@@QBE?AV0@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f061;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CTWString *)CTWString(local_10,this);
  local_4 = 1;
  pCVar1 = operator+=(pCVar1,in_stack_00000008);
  CTWString(param_1,pCVar1);
  local_4 = local_4 & 0xffffff00;
  ~CTWString(local_10);
  ExceptionList = local_c;
  return param_1;
}

