
void FUN_36073170(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(_pGfx + 0xa5c);
  iVar2 = 0;
  do {
    (**(code **)(*piVar1 + 0x14c))(piVar1,iVar2,0,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}

