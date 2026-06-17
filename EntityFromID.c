
/* public: class CEntity * __thiscall CWorld::EntityFromID(unsigned long) */

CEntity * __thiscall CWorld::EntityFromID(CWorld *this,ulong param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong *puVar3;
  
                    /* 0xc8140  1572  ?EntityFromID@CWorld@@QAEPAVCEntity@@K@Z */
  puVar3 = &param_1;
  uVar1 = (**(code **)(this + 0x60))(puVar3);
  puVar2 = FUN_360d7d00(this + 0x4c,uVar1,(int *)puVar3);
  if ((puVar2 != (uint *)0x0) && (puVar2[1] != 0)) {
    return *(CEntity **)(puVar2[1] + 4);
  }
  return (CEntity *)0x0;
}

