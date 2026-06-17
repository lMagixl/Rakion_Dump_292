
/* public: void __thiscall CTextureData::Force(unsigned long) */

void __thiscall CTextureData::Force(CTextureData *this,ulong param_1)

{
  bool bVar1;
  
                    /* 0x93bf0  1660  ?Force@CTextureData@@QAEXK@Z */
  if (((*(int *)(this + 0x60) == 0) && ((param_1 & 0x100) != 0)) ||
     (((*(uint *)(this + 0x1c) & 0x1700000) != 0 && ((param_1 & 0x200) != 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  *(ulong *)(this + 0x1c) = param_1 & 0x300 | *(uint *)(this + 0x1c);
  if (bVar1) {
    CSerial::Reload((CSerial *)this);
  }
  return;
}

