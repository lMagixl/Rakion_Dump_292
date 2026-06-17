
CNetworkLibrary * __thiscall FUN_360fb2b0(void *this,byte param_1)

{
  CNetworkLibrary::~CNetworkLibrary(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

