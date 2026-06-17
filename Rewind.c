
/* public: void __thiscall Xenesis::xFile::rewind(void) */

void __thiscall Xenesis::xFile::rewind(xFile *this)

{
                    /* 0x1a4990  4285  ?rewind@xFile@Xenesis@@QAEXXZ */
  *(undefined4 *)this = **(undefined4 **)(this + 0x20);
  *(undefined4 *)(this + 4) = (*(undefined4 **)(this + 0x20))[1];
  *(undefined4 *)(this + 8) = 0;
  if (this[0x16] != (xFile)0x0) {
    loadBlock(this,*(uchar **)(this + 0x18));
  }
  return;
}

