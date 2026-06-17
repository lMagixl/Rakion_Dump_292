
void __cdecl FUN_36179e50(CTFileName *param_1)

{
  int in_EAX;
  CTextureData *this;
  
  FUN_36179e30();
  this = CStock_CTextureData::Obtain_t(_pTextureStock,param_1);
  *(CTextureData **)(in_EAX + 0x34) = this;
  if ((_bWorldEditorApp != 0) && ((*(uint *)(this + 0x1c) & 0x100) == 0)) {
    CTextureData::Force(this,0x100);
    CSerial::Reload(*(CSerial **)(in_EAX + 0x34));
    return;
  }
  return;
}

