
CNetworkSession * __thiscall FUN_360fabb0(void *this,byte param_1)

{
  CNetworkSession::~CNetworkSession(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

