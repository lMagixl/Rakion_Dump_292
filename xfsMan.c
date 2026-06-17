
/* public: __thiscall xfsMan::xfsMan(void) */

xfsMan * __thiscall xfsMan::xfsMan(xfsMan *this)

{
  int iVar1;
  xfsMan *pxVar2;
  
  *(undefined4 *)(this + 200) = 0;
  pxVar2 = this;
                    /* 0x3fd10  374  ??0xfsMan@@QAE@XZ */
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pxVar2 = 0;
    pxVar2 = pxVar2 + 4;
  }
  return this;
}

