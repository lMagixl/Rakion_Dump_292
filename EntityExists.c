
/* public: int __thiscall CWorld::EntityExists(unsigned long,class CEntity * &) */

int __thiscall CWorld::EntityExists(CWorld *this,ulong param_1,CEntity **param_2)

{
  CEntity *pCVar1;
  uint uVar2;
  uint *puVar3;
  ulong *puVar4;
  
                    /* 0xc8180  1571  ?EntityExists@CWorld@@QAEHKAAPAVCEntity@@@Z */
  puVar4 = &param_1;
  uVar2 = (**(code **)(this + 0x60))(puVar4);
  puVar3 = FUN_360d7d00(this + 0x4c,uVar2,(int *)puVar4);
  if ((puVar3 != (uint *)0x0) && (puVar3[1] != 0)) {
    pCVar1 = *(CEntity **)(puVar3[1] + 4);
    *param_2 = pCVar1;
    return (uint)(pCVar1 != (CEntity *)0x0);
  }
  *param_2 = (CEntity *)0x0;
  return 0;
}

