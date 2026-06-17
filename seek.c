
/* public: void __thiscall Xenesis::xFile::seek(int) */

void __thiscall Xenesis::xFile::seek(xFile *this,int param_1)

{
                    /* 0x1a49c0  4291  ?seek@xFile@Xenesis@@QAEXH@Z */
  if (param_1 != 0) {
    if (param_1 < 1) {
      if (0 < *(int *)(this + 0x10) + param_1) {
        *(int *)(this + 8) = *(int *)(this + 8) + param_1;
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_1;
        return;
      }
      param_1 = param_1 + *(int *)(this + 8);
      rewind(this);
    }
    skip(this,param_1);
  }
  return;
}

