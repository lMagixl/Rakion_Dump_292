
/* public: virtual float __thiscall CMovableEntity::GetHP(void) */

float __thiscall CMovableEntity::GetHP(CMovableEntity *this)

{
  xEncryptMemory *this_00;
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  float local_10 [4];
  
                    /* 0x1ac070  1902  ?GetHP@CMovableEntity@@UAEMXZ */
  uVar1 = *(uint *)(this + 0x26c);
  pfVar2 = local_10;
  uVar3 = 1;
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(this_00,uVar1,pfVar2,uVar3);
  return local_10[0];
}

