
/* public: void __thiscall CMovableEntity::ClearNextPosition(void) */

void __thiscall CMovableEntity::ClearNextPosition(CMovableEntity *this)

{
  undefined4 uVar1;
  int iVar2;
  CMovableEntity *pCVar3;
  CMovableEntity *pCVar4;
  
                    /* 0x1aab60  1268  ?ClearNextPosition@CMovableEntity@@QAEXXZ */
  *(undefined4 *)(this + 700) = *(undefined4 *)(this + 0x3c);
  uVar1 = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(this + 0x2c0) = *(undefined4 *)(this + 0x40);
  pCVar3 = this + 0x54;
  pCVar4 = this + 0x2c8;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar4 = pCVar4 + 4;
  }
  *(undefined4 *)(this + 0x2c4) = uVar1;
  return;
}

