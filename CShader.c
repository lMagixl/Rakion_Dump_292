
/* public: __thiscall CShader::CShader(class CShader const &) */

CShader * __thiscall CShader::CShader(CShader *this,CShader *param_1)

{
  CShader *pCVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12ec0  219  ??0CShader@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620df69;
  local_c = ExceptionList;
  if (param_1 == (CShader *)0x0) {
    pCVar1 = (CShader *)0x0;
  }
  else {
    pCVar1 = param_1 + 4;
  }
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = *(undefined4 *)pCVar1;
  *(undefined ***)this = &CSerial::_vftable_;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0xc));
  *(char **)(this + 0xc) = pcVar2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0x38));
  *(char **)(this + 0x38) = pcVar2;
  local_4 = CONCAT31(local_4._1_3_,3);
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0x3c));
  *(char **)(this + 0x3c) = pcVar2;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  ExceptionList = local_c;
  return this;
}

