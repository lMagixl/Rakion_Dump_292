
/* public: void __thiscall CRationalEntity::Return(long,class CEntityEvent const &) */

void __thiscall CRationalEntity::Return(CRationalEntity *this,long param_1,CEntityEvent *param_2)

{
  int iVar1;
  
                    /* 0x129770  3174  ?Return@CRationalEntity@@QAEXJABVCEntityEvent@@@Z */
  UnwindStack(this,param_1);
  iVar1 = FUN_36026a70((int)(this + 0x110));
  *(int *)(this + 0x118) = iVar1 + -1;
  (**(code **)(*(int *)this + 0x60))(param_2);
  return;
}

