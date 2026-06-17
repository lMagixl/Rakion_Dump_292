
/* public: void __thiscall CDrawPort::PutTextC(class CTString const &,long,long,unsigned long,int
   const &)const  */

void __thiscall
CDrawPort::PutTextC(CDrawPort *this,CTString *param_1,long param_2,long param_3,ulong param_4,
                   int *param_5)

{
  CTString *pCVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6adf0  2882  ?PutTextC@CDrawPort@@QBEXABVCTString@@JJKABH@Z */
  pCVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1 = (CTString *)StringDuplicate(*(char **)param_1);
  local_4 = 0;
  lVar3 = param_3;
  uVar4 = param_4;
  piVar5 = param_5;
  lVar2 = GetStringPixWidth((CTString *)&param_1);
  PutText(this,pCVar1,param_2 - lVar2 / 2,lVar3,uVar4,piVar5);
  local_4 = 0xffffffff;
  StringFree((char *)param_1);
  ExceptionList = local_c;
  return;
}

