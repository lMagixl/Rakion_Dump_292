
/* public: int __thiscall FieldInfo::IsObserver(unsigned char) */

int __thiscall FieldInfo::IsObserver(FieldInfo *this,uchar param_1)

{
  xEncryptMemory *this_00;
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  
                    /* 0x19a2d0  2432  ?IsObserver@FieldInfo@@QAEHE@Z */
  uVar3 = 1;
  puVar2 = &param_1;
  uVar1 = *(uint *)(this + (uint)param_1 * 0x37c + 0x1b4);
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(this_00,uVar1,(undefined4 *)puVar2,uVar3);
  return (uint)(param_1 == '\x01');
}

