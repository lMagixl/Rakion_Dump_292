
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::InitTexture(class CTextureObject *,int,unsigned long)const  */

void __thiscall
CDrawPort::InitTexture(CDrawPort *this,CTextureObject *param_1,int param_2,ulong param_3)

{
  CTextureData *this_00;
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
                    /* 0x66400  2322  ?InitTexture@CDrawPort@@QBEXPAVCTextureObject@@HK@Z */
  if (param_1 == (CTextureObject *)0x0) {
    (*DAT_362c4634)();
  }
  else {
    this_00 = *(CTextureData **)(param_1 + 0x14);
    uVar1 = 0x51;
    if (param_2 != 0) {
      uVar1 = 0x52;
    }
    (*DAT_362c4680)(uVar1,uVar1);
    iVar3 = 0;
    lVar2 = CAnimObject::GetFrame((CAnimObject *)param_1);
    CTextureData::SetAsCurrent(this_00,lVar2,iVar3);
  }
  (*DAT_362c4624)();
  gfxSetBlendType(param_3);
  DAT_362c54e0 = 0;
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  _DAT_362c5520 = 0;
  _DAT_362c5530 = 0;
  _DAT_362c5540 = 0;
  DAT_362c5560 = 0;
  return;
}

