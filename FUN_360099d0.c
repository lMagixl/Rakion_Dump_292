
CGfxLibrary * __thiscall FUN_360099d0(void *this,byte param_1)

{
  CGfxLibrary::~CGfxLibrary(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

