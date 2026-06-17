
void __fastcall FUN_361db17d(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 100) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xe0))(*(int **)(param_1 + 4),*(int *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xe0))(*(int **)(param_1 + 4),*(int *)(param_1 + 0x68));
  }
  piVar2 = (int *)(param_1 + 0x10);
  iVar3 = 8;
  do {
    piVar1 = (int *)piVar2[8];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar2[8] = 0;
    }
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((*(HDC *)(param_1 + 0x6c) != (HDC)0x0) && (*(HGDIOBJ *)(param_1 + 0xa8) != (HGDIOBJ)0x0)) {
    SelectObject(*(HDC *)(param_1 + 0x6c),*(HGDIOBJ *)(param_1 + 0xa8));
  }
  if ((*(HDC *)(param_1 + 0x6c) != (HDC)0x0) && (*(HGDIOBJ *)(param_1 + 0x9c) != (HGDIOBJ)0x0)) {
    SelectObject(*(HDC *)(param_1 + 0x6c),*(HGDIOBJ *)(param_1 + 0x9c));
  }
  if (*(HGDIOBJ *)(param_1 + 0x98) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x98));
  }
  if (*(HDC *)(param_1 + 0x6c) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x6c));
  }
  piVar2 = &DAT_36383c5c;
  if (DAT_36383c5c != 0) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = (int *)(*piVar2 + 0xac);
    } while (*piVar2 != 0);
    if (*piVar2 != 0) {
      *piVar2 = *(int *)(*piVar2 + 0xac);
    }
  }
  return;
}

