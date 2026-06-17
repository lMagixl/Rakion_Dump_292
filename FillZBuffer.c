
/* public: void __thiscall CDrawPort::FillZBuffer(float)const  */

void __thiscall CDrawPort::FillZBuffer(CDrawPort *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x652c0  1624  ?FillZBuffer@CDrawPort@@QBEXM@Z */
  iVar1 = *(int *)(_pGfx + 0xa38);
  (*DAT_362c45f0)();
  if (iVar1 == 0) {
    (*DAT_362c3df0)((double)param_1);
    uVar2 = 0x100;
    if (((byte)_pGfx[0xa54] & 0x40) != 0) {
      uVar2 = 0x500;
      (*DAT_362c4160)(0);
    }
    (*DAT_362c4160)(0);
    (*DAT_362c3d4c)(uVar2);
    return;
  }
  if (iVar1 == 1) {
    uVar2 = 2;
    if (((byte)_pGfx[0xa54] & 0x40) != 0) {
      uVar2 = 6;
    }
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x90))(*(int **)(_pGfx + 0xa5c),0,0,uVar2,0,param_1,0);
  }
  return;
}

