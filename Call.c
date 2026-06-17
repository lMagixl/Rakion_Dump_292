
/* public: void __thiscall CRationalEntity::Call(long,long,int,class CEntityEvent const &) */

void __thiscall
CRationalEntity::Call
          (CRationalEntity *this,long param_1,long param_2,int param_3,CEntityEvent *param_4)

{
  CRationalEntity *this_00;
  int iVar1;
  int iVar2;
  
                    /* 0x12b570  1140  ?Call@CRationalEntity@@QAEXJJHABVCEntityEvent@@@Z */
  UnwindStack(this,param_1);
  if (param_3 != 0) {
    param_2 = CDLLEntityClass::GetOverridenState
                        (*(CDLLEntityClass **)(*(int *)(this + 0x78) + 0x20),param_2);
  }
  iVar2 = *(int *)(this + 0x118);
  this_00 = this + 0x110;
  *(int *)(this + 0x118) = iVar2 + 1;
  iVar1 = FUN_3600bef0((undefined4 *)this_00);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3600bef0((undefined4 *)this_00);
    FUN_36026aa0(this_00,iVar2 + *(int *)(this + 0x11c));
  }
  *(long *)(*(int *)(this + 0x114) + -4 + *(int *)(this + 0x118) * 4) = param_2;
  (**(code **)(*(int *)this + 0x60))(param_4);
  return;
}

