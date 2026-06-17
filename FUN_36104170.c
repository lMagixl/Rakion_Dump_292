
CNetworkProvider * __thiscall FUN_36104170(void *this,byte param_1)

{
  CNetworkProvider::~CNetworkProvider(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

