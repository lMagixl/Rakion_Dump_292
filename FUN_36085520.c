
void FUN_36085520(void)

{
  int iVar1;
  CListHead *this;
  
  CSoundLibrary::Mute(_pSound,0.0);
  this = (CListHead *)(_pGfx + 0xb0c);
  iVar1 = CListHead::IsEmpty(this);
  while (iVar1 == 0) {
    CShadowMap::Uncache((CShadowMap *)(*(int *)this + -8));
    iVar1 = CListHead::IsEmpty(this);
  }
  DAT_362b8cfc = 1;
  return;
}

