
bool FUN_36072c10(void)

{
  int iVar1;
  int unaff_ESI;
  
  if ((unaff_ESI != 0) && (*(int *)(_pGfx + 0xa60) != 0)) {
    iVar1 = (**(code **)(**(int **)(_pGfx + 0xa58) + 0x28))
                      (*(int **)(_pGfx + 0xa58),*(undefined4 *)(_pGfx + 0xa48),1,
                       *(int *)(_pGfx + 0xa60),0,3);
    return (bool)('\x01' - (iVar1 != 0));
  }
  return true;
}

