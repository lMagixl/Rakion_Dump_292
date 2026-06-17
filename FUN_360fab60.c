
CServer * __thiscall FUN_360fab60(void *this,byte param_1)

{
  CServer::~CServer(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

