
void FUN_3609c120(void)

{
  int iVar1;
  int unaff_ESI;
  int *piVar2;
  int *piVar3;
  undefined1 local_4 [4];
  
  piVar3 = *(int **)(unaff_ESI + 0x7c);
  (**(code **)(*piVar3 + 0x10))(piVar3,0,0,local_4);
  piVar2 = *(int **)(_pGfx + 0xa5c);
  (**(code **)(*piVar2 + 0x7c))(piVar2,piVar3,*(undefined4 *)(unaff_ESI + 0x80));
  do {
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
  } while (0 < iVar1);
  return;
}

