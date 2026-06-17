
/* public: void __thiscall CMovableEntity::ClearTemporaryData(void) */

void __thiscall CMovableEntity::ClearTemporaryData(CMovableEntity *this)

{
  int iVar1;
  CMovableEntity *pCVar2;
  CMovableEntity *pCVar3;
  
                    /* 0x1ac0d0  1275  ?ClearTemporaryData@CMovableEntity@@QAEXXZ */
  *(undefined4 *)(this + 0x288) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(this + 0x28c) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(this + 0x290) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(this + 0x294) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(this + 0x298) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)(this + 0x29c) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(this + 700) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(this + 0x2c0) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(this + 0x2c4) = *(undefined4 *)(this + 0x44);
  pCVar2 = this + 0x54;
  pCVar3 = this + 0x2c8;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  FUN_3604f120(this + 0x328,0x3f800000);
  return;
}

