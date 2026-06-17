
/* public: void __thiscall AccountInfo_s::SetPowerUser(int) */

void __thiscall AccountInfo_s::SetPowerUser(AccountInfo_s *this,int param_1)

{
  xEncryptMemory *this_00;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
                    /* 0x19a520  3563  ?SetPowerUser@AccountInfo_s@@QAEXH@Z */
  uVar3 = 1;
  piVar2 = &param_1;
  uVar1 = *(uint *)(this + 0x2d84);
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(this_00,uVar1,(int)piVar2,uVar3);
  return;
}

