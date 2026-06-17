
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::DrawPoint(long,long,unsigned long,long)const  */

void __thiscall
CDrawPort::DrawPoint(CDrawPort *this,long param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  undefined4 unaff_ESI;
  long *plStack_24;
  int iStack_8;
  int iStack_4;
  
                    /* 0x64c20  1532  ?DrawPoint@CDrawPort@@QBEXJJKJ@Z */
  iVar1 = *(int *)(_pGfx + 0xa38);
  if (param_4 != 0) {
    plStack_24 = (long *)0x36064c41;
    (*DAT_362c4634)();
    plStack_24 = (long *)0x36064c47;
    (*DAT_362c4624)();
    plStack_24 = (long *)0x36064c4d;
    (*DAT_362c461c)();
    plStack_24 = (long *)0x36064c53;
    (*DAT_362c4628)();
    plStack_24 = (long *)0x36064c59;
    (*DAT_362c4600)();
    plStack_24 = (long *)0x1c;
    (*DAT_362c4648)(0x1b);
    plStack_24 = (long *)0x36064c6c;
    (*DAT_362c46ac)();
    plStack_24 = (long *)(float)param_4;
    if (iVar1 == 0) {
      param_4 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                param_3 << 0x18;
      plStack_24 = &param_4;
      (*DAT_362c3f98)();
      (*DAT_362c3d6c)(unaff_ESI);
      (*DAT_362c3e6c)(0);
      (*DAT_362c3e78)((float)iStack_8 + _DAT_36227cf0,(float)iStack_4 + _DAT_36227cf0);
      (*DAT_362c3e70)();
      return;
    }
    if (iVar1 == 1) {
      param_4 = param_3 >> 8 | param_3 << 0x18;
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 200))(*(int **)(_pGfx + 0xa5c),0x9a);
      FUN_3607b2c0(0x142);
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x120))
                (*(int **)(_pGfx + 0xa5c),1,1,&plStack_24,0x18);
    }
  }
  return;
}

