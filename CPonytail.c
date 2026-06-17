
/* public: __thiscall CPonytail::CPonytail(class CPonytail &) */

CPonytail * __thiscall CPonytail::CPonytail(CPonytail *this,CPonytail *param_1)

{
  int iVar1;
  CPonytail *pCVar2;
  CPonytail *pCVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x190f30  201  ??0CPonytail@@QAE@AAV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b1a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_36190f00(this + 0xc,param_1 + 0xc);
  pCVar2 = param_1 + 0x20;
  pCVar3 = this + 0x20;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_36190e10(this + 0x98,param_1 + 0x98);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_36190e50(this + 0xac,param_1 + 0xac);
  ExceptionList = local_c;
  return this;
}

