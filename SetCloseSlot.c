
/* public: void __thiscall FieldInfo::SetCloseSlot(unsigned char) */

void __thiscall FieldInfo::SetCloseSlot(FieldInfo *this,uchar param_1)

{
  FieldInfo *pFVar1;
  uint uVar2;
  
                    /* 0x19a360  3409  ?SetCloseSlot@FieldInfo@@QAEXE@Z */
  uVar2 = (uint)param_1;
  FUN_3619cb30(this + uVar2 * 0x37c + 0x1ac);
  pFVar1 = this + uVar2 * 0x10 + 0x4764;
  *(undefined4 *)pFVar1 = 0;
  *(undefined4 *)(pFVar1 + 4) = 0;
  *(undefined4 *)(pFVar1 + 8) = 0;
  *(undefined4 *)(pFVar1 + 0xc) = 0;
  *(undefined4 *)(this + uVar2 * 4 + 0x48a4) = 0;
  this[uVar2 * 0x37c + 0x1ac] = (FieldInfo)0x4;
  return;
}

