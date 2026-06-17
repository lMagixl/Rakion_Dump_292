
/* public: void __thiscall CViewPort::SwapBuffers(int) */

void __thiscall CViewPort::SwapBuffers(CViewPort *this,int param_1)

{
                    /* 0x9c400  3706  ?SwapBuffers@CViewPort@@QAEXH@Z */
  if (*(int *)this != 0) {
    CGfxLibrary::SwapBuffers(_pGfx,this,param_1);
  }
  return;
}

