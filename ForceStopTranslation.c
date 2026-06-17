
/* public: void __thiscall CMovableEntity::ForceStopTranslation(void) */

void __thiscall CMovableEntity::ForceStopTranslation(CMovableEntity *this)

{
  xEncryptMemory *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1adf70  1664  ?ForceStopTranslation@CMovableEntity@@QAEXXZ */
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  local_c = 0;
  uVar3 = 3;
  puVar2 = &local_c;
  local_8 = 0;
  uVar1 = *(uint *)(this + 0x254);
  local_4 = 0;
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(this_00,uVar1,(int)puVar2,uVar3);
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  return;
}

