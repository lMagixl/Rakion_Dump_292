
/* public: void __thiscall CGfxLibrary::CreateWindowCanvas(void *,class CViewPort * *,class
   CDrawPort * *) */

void __thiscall
CGfxLibrary::CreateWindowCanvas
          (CGfxLibrary *this,void *param_1,CViewPort **param_2,CDrawPort **param_3)

{
  CViewPort *pCVar1;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x85a50  1440
                       ?CreateWindowCanvas@CGfxLibrary@@QAEXPAXPAPAVCViewPort@@PAPAVCDrawPort@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621202a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetClientRect(param_1,&local_1c);
  *param_2 = (CViewPort *)0x0;
  *param_3 = (CDrawPort *)0x0;
  pCVar1 = (CViewPort *)FUN_361bf99c(0x88);
  local_4 = 0;
  if (pCVar1 == (CViewPort *)0x0) {
    pCVar1 = (CViewPort *)0x0;
  }
  else {
    pCVar1 = (CViewPort *)
             CViewPort::CViewPort
                       (pCVar1,local_1c.right - local_1c.left,local_1c.bottom - local_1c.top,param_1
                       );
  }
  *param_2 = pCVar1;
  if (pCVar1 != (CViewPort *)0x0) {
    *param_3 = (CDrawPort *)(pCVar1 + 0x10);
    ExceptionList = local_c;
    return;
  }
  *param_2 = (CViewPort *)0x0;
  ExceptionList = local_c;
  return;
}

