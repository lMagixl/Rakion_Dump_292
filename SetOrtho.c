
/* public: void __thiscall CDrawPort::SetOrtho(void)const  */

void __thiscall CDrawPort::SetOrtho(CDrawPort *this)

{
  int iVar1;
  
                    /* 0x65830  3540  ?SetOrtho@CDrawPort@@QBEXXZ */
  if (DAT_362a40b8 < 0) {
    DAT_362a40b8 = 0;
  }
  else if (3 < DAT_362a40b8) {
    DAT_362a40b8 = 3;
  }
  if (DAT_362c53e4 < 0) {
    DAT_362c53e4 = 0;
  }
  else if (3 < DAT_362c53e4) {
    DAT_362c53e4 = 3;
  }
  if (((DAT_362a40b8 == 3) && (*(int *)(_pGfx + 0xa38) == 0)) ||
     ((DAT_362c53e4 == 3 && (*(int *)(_pGfx + 0xa38) == 1)))) {
    (*DAT_362c46b4)(0);
  }
  iVar1 = *(int *)(*(int *)this + 0x68);
  (*DAT_362c4660)((float)(*(int *)(this + 0x18) - *(int *)(this + 8)),
                  (float)(*(int *)(this + 0x20) - *(int *)(this + 8)),
                  (float)((*(int *)(this + 0x1c) - iVar1) + (iVar1 - *(int *)(this + 0xc))),
                  (float)((*(int *)(this + 0x24) - iVar1) + (iVar1 - *(int *)(this + 0xc))),0,
                  0xbf800000,1);
  (*DAT_362c4650)(0,0x3f800000);
  (*DAT_362c4674)(0);
  (*DAT_362c4654)(0x3d);
  (*DAT_362c4644)();
                    /* WARNING: Could not recover jumptable at 0x3606592f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_362c46c0)();
  return;
}

