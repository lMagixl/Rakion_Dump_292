
/* public: void __thiscall CViewPort::CloseCanvas(void) */

void __thiscall CViewPort::CloseCanvas(CViewPort *this)

{
  int iVar1;
  BOOL BVar2;
  
                    /* 0x9c200  1340  ?CloseCanvas@CViewPort@@QAEXXZ */
  if (*(int *)(_pGfx + 0xa38) == 1) {
    if (*(int *)(this + 0x7c) != 0) {
      do {
        iVar1 = (**(code **)(**(int **)(this + 0x7c) + 8))(*(int **)(this + 0x7c));
      } while (0 < iVar1);
      *(undefined4 *)(this + 0x7c) = 0;
    }
    if (*(int *)(this + 0x80) == 0) goto LAB_3609c259;
    do {
      iVar1 = (**(code **)(**(int **)(this + 0x80) + 8))(*(int **)(this + 0x80));
    } while (0 < iVar1);
  }
  else {
    *(undefined4 *)(this + 0x7c) = 0;
  }
  *(undefined4 *)(this + 0x80) = 0;
LAB_3609c259:
  if ((*(HWND *)this != (HWND)0x0) && (BVar2 = IsWindow(*(HWND *)this), BVar2 != 0)) {
    DestroyWindow(*(HWND *)this);
  }
  *(undefined4 *)this = 0;
  return;
}

