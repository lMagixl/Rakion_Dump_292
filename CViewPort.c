
/* public: __thiscall CViewPort::CViewPort(long,long,struct HWND__ *) */

CViewPort * __thiscall
CViewPort::CViewPort(CViewPort *this,long param_1,long param_2,HWND__ *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9c630  287  ??0CViewPort@@QAE@JJPAUHWND__@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212e40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_3608d670(this + 8,param_1,param_2,0);
  local_4 = 0;
  *(undefined4 *)this = 0;
  *(HWND__ **)(this + 4) = param_3;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  OpenCanvas(this);
  *(CViewPort **)(this + 0xc) = this;
  ExceptionList = local_c;
  return this;
}

