
/* public: unsigned long __thiscall CTextureData::GetTexel(long,long) */

ulong __thiscall CTextureData::GetTexel(CTextureData *this,long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  
                    /* 0x94170  2154  ?GetTexel@CTextureData@@QAEKJJ@Z */
  if ((*(uint *)(this + 0x1c) & 0x300) == 0) {
    CPrintF(s_GetTexel____s__was_not_static_an_3622e9b8,*(undefined4 *)(this + 0xc));
    Force(this,0x300);
  }
  bVar3 = (byte)*(undefined4 *)(this + 0x28);
  iVar2 = *(int *)(this + 0x20) >> (bVar3 & 0x1f);
  uVar1 = *(uint *)(*(int *)(this + 0x60) +
                   (((*(int *)(this + 0x24) >> (bVar3 & 0x1f)) - 1U & param_2 >> (bVar3 & 0x1f)) *
                    iVar2 + (param_1 >> (bVar3 & 0x1f) & iVar2 - 1U)) * 4);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

