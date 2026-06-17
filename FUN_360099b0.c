
CSoundLibrary * __thiscall FUN_360099b0(void *this,byte param_1)

{
  CSoundLibrary::~CSoundLibrary(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

