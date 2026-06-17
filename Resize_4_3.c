
/* public: void __thiscall CViewPort::Resize_4_3(void) */

void __thiscall CViewPort::Resize_4_3(CViewPort *this)

{
  int cx;
  int iVar1;
  int cy;
  ulonglong uVar2;
  tagRECT local_10;
  
                    /* 0x9c330  3170  ?Resize_4_3@CViewPort@@QAEXXZ */
  GetClientRect(*(HWND *)(this + 4),&local_10);
  cx = local_10.right - local_10.left;
  uVar2 = FUN_361bfd6c();
  cy = (int)uVar2;
  if (local_10.bottom - local_10.top < (int)uVar2) {
    uVar2 = FUN_361bfd6c();
    cx = (int)uVar2;
    cy = local_10.bottom - local_10.top;
  }
  SetWindowPos(*(HWND *)this,(HWND)0x0,0,0,cx,cy,6);
  FUN_3608d740(this + 8,cx,cy);
  if ((*(int *)(_pGfx + 0xa38) == 1) && (*(int *)(this + 0x7c) != 0)) {
    do {
      iVar1 = (**(code **)(**(int **)(this + 0x7c) + 8))(*(int **)(this + 0x7c));
    } while (0 < iVar1);
    *(undefined4 *)(this + 0x7c) = 0;
    do {
      iVar1 = (**(code **)(**(int **)(this + 0x80) + 8))(*(int **)(this + 0x80));
    } while (0 < iVar1);
    *(undefined4 *)(this + 0x80) = 0;
    FUN_3609c040(cx,cy);
    FUN_3609c120();
  }
  return;
}

