
/* public: void __thiscall CEditModel::SetCollisionBox(class Vector<float,3>,class Vector<float,3>)
    */

void __thiscall
CEditModel::SetCollisionBox
          (CEditModel *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* 0xad060  3414  ?SetCollisionBox@CEditModel@@QAEXV?$Vector@M$02@@0@Z */
  puVar1 = (undefined4 *)FUN_360b0e00(this + 0x12a8,*(int *)(this + 0x14));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  iVar2 = FUN_360b0e00(this + 0x12a8,*(int *)(this + 0x14));
  *(undefined4 *)(iVar2 + 0xc) = param_5;
  *(undefined4 *)(iVar2 + 0x10) = param_6;
  *(undefined4 *)(iVar2 + 0x14) = param_7;
  CorrectCollisionBoxSize(this);
  return;
}

