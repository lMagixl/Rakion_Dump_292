
void FUN_36179e30(void)

{
  int unaff_ESI;
  
  if (*(CTextureData **)(unaff_ESI + 0x34) != (CTextureData *)0x0) {
    CStock_CTextureData::Release(_pTextureStock,*(CTextureData **)(unaff_ESI + 0x34));
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
  }
  return;
}

