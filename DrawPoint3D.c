
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::DrawPoint3D(class Vector<float,3>,unsigned long,float)const
    */

void __thiscall CDrawPort::DrawPoint3D(void)

{
  int iVar1;
  undefined4 unaff_retaddr;
  uint in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *puStack_24;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x65940  1531  ?DrawPoint3D@CDrawPort@@QBEXV?$Vector@M$02@@KM@Z */
  iVar1 = *(int *)(_pGfx + 0xa38);
  if ((float)in_stack_00000014 != _DAT_3622376c) {
    puStack_24 = (undefined4 *)0x3606596c;
    (*DAT_362c4634)();
    puStack_24 = (undefined4 *)0x36065972;
    (*DAT_362c461c)();
    puStack_24 = (undefined4 *)0x36065978;
    (*DAT_362c4628)();
    puStack_24 = (undefined4 *)0x3606597e;
    (*DAT_362c4600)();
    puStack_24 = (undefined4 *)0x1c;
    (*DAT_362c4648)(0x1b);
    puStack_24 = (undefined4 *)0x36065991;
    (*DAT_362c46ac)();
    if (iVar1 == 0) {
      in_stack_00000010 =
           in_stack_00000010 >> 0x18 | (in_stack_00000010 & 0xff0000) >> 8 |
           (in_stack_00000010 & 0xff00) << 8 | in_stack_00000010 << 0x18;
      puStack_24 = &stack0x00000010;
      (*DAT_362c3f98)();
      (*DAT_362c3d6c)(in_stack_00000010);
      (*DAT_362c3e6c)(0);
      (*DAT_362c3e88)(uStack_8,uStack_4,unaff_retaddr);
      (*DAT_362c3e70)();
      return;
    }
    if (iVar1 == 1) {
      puStack_24 = in_stack_00000014;
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 200))(*(int **)(_pGfx + 0xa5c),0x9a);
      FUN_3607b2c0(0x142);
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x120))
                (*(int **)(_pGfx + 0xa5c),1,1,&puStack_24,0x18);
    }
  }
  return;
}

