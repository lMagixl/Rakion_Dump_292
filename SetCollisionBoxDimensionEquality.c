
/* public: void __thiscall CEditModel::SetCollisionBoxDimensionEquality(long) */

void __thiscall CEditModel::SetCollisionBoxDimensionEquality(CEditModel *this,long param_1)

{
  int iVar1;
  
                    /* 0xac610  3415  ?SetCollisionBoxDimensionEquality@CEditModel@@QAEXJ@Z */
  iVar1 = FUN_360b0e00(this + 0x12a8,*(int *)(this + 0x14));
  *(long *)(iVar1 + 0x18) = param_1;
  CorrectCollisionBoxSize(this);
  return;
}

