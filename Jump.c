
/* public: void __thiscall CRationalEntity::Jump(long,long,int,class CEntityEvent const &) */

void __thiscall
CRationalEntity::Jump
          (CRationalEntity *this,long param_1,long param_2,int param_3,CEntityEvent *param_4)

{
  int iVar1;
  
                    /* 0x129710  2526  ?Jump@CRationalEntity@@QAEXJJHABVCEntityEvent@@@Z */
  UnwindStack(this,param_1);
  if (param_3 != 0) {
    param_2 = CDLLEntityClass::GetOverridenState
                        (*(CDLLEntityClass **)(*(int *)(this + 0x78) + 0x20),param_2);
  }
  iVar1 = FUN_36026a70((int)(this + 0x110));
  *(long *)(*(int *)(this + 0x114) + -4 + iVar1 * 4) = param_2;
  (**(code **)(*(int *)this + 0x60))(param_4);
  return;
}

